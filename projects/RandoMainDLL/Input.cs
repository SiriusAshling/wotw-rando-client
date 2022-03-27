﻿using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;
using System.Linq;
using RandoMainDLL.Wheel;

namespace RandoMainDLL {
  public static class Input {
    // Mirrors C++ definition in InjectDll/input/enums/actions.h
    public enum Action {
      MainMenuSaveCopy,
      MainMenuSaveDelete,
      Interact,
      Jump,
      Ability1,
      Ability2,
      Ability3,
      Glide,
      Grab,
      Dash,
      Burrow,
      Bash,
      Grapple,
      DialogueAdvance,
      DialogueOption1,
      DialogueOption2,
      DialogueOption3,
      DialogueExit,
      OpenMapsShardsInventory,
      OpenWeaponWheel,
      PauseScreen,
      LiveSignIn,
      MapZoomIn,
      MapZoomOut,
      MenuSelect,
      MenuBack,
      MenuClose,
      MenuDown,
      MenuUp,
      MenuLeft,
      MenuRight,
      MenuPageLeft,
      MenuPageRight,
      LeaderboardCycleFilter,
      MapFilter,
      MapDetails,
      MapFocusOri,
      MapFocusObjective,

      RANDO_ACTIONS_START,

      OpenRandoWheel,
      QuickBuy,

      // Legacy actions.
      Binding1,
      Binding2,
      Binding3,
      Binding4,
      Binding5,
      Reload,
      ShowLastPickup,
      ShowProgressWithHints,
      WarpCredits,

      ToggleCursorLock,
      ToggleAlwaysShowKeystones,
      ToggleAutoaim,

      ShowDevFlag,
      ToggleDebug,
      PrintCoordinates,
      ClearMessages,
      TeleportCheat,
      UnlockSpoilers,
      TogglePickupNamesOnSpoiler,
      ForceExit,

      TOTAL
    }

    private static readonly UberId GameComplete = new UberId(34543, 11226);

    public static void OnActionTriggered(Action action) {
      switch (action) {
        case Action.Reload:
          if (AHK.CanReload()) {
            AHK.Reload();
            ShopSlot.ResetSlotData();
            WebSocketClient.Connect();
            SeedController.ReadSeed();
            if (InterOp.Utils.get_game_state() == GameState.Game) {
              WheelManager.ResetWheels();
              PsuedoLocs.LOAD_SEED.OnCollect();
            }
          }
          break;
        case Action.ShowLastPickup:
          MessageController.ShowLastPickup();
          break;
        case Action.ShowProgressWithHints:
          HintsController.ProgressWithHints();
          break;
        case Action.ShowDevFlag:
          Randomizer.Dev = !Randomizer.Dev;
          Randomizer.Log($"Dev: {Randomizer.Dev}", false);
          MessageController.ShowTimedMessage($"Dev: {Randomizer.Dev}", queue: "wheel");
          WheelManager.OnDevChanged();
          break;
        case Action.ForceExit:
          Environment.Exit(Environment.ExitCode);
          break;
        case Action.ToggleDebug:
          InterOp.Utils.set_debug_controls(!InterOp.Utils.get_debug_controls());
          MessageController.ShowTimedMessage($"Debug {(InterOp.Utils.get_debug_controls() ? "enabled" : "disabled")}", queue: "wheel");
          break;
        case Action.ToggleCursorLock:
          MessageController.ShowTimedMessage($"Cursor Lock {(InterOp.toggle_cursorlock() ? "enabled" : "disabled")}", queue: "wheel");
          break;
        case Action.ToggleAlwaysShowKeystones:
          MessageController.ShowTimedMessage($"Always show keystones: {InterOp.toggle_always_show_keystones()}", queue: "wheel");
          break;
        case Action.ToggleAutoaim:
          UberSet.Bool(4, 37, !UberGet.Bool(4, 37));
          break;
        case Action.Binding1:
          PsuedoLocs.BINDING_ONE.OnCollect();
          break;
        case Action.Binding2:
          PsuedoLocs.BINDING_TWO.OnCollect();
          break;
        case Action.Binding3:
          PsuedoLocs.BINDING_THREE.OnCollect();
          break;
        case Action.Binding4:
          PsuedoLocs.BINDING_FOUR.OnCollect();
          break;
        case Action.Binding5:
          PsuedoLocs.BINDING_FIVE.OnCollect();
          break;
        case Action.UnlockSpoilers:
          if (SeedController.Settings.RaceMode) {
            MessageController.ShowTimedMessage("Not allowed in race mode.", queue: "wheel");
            return; // no cheat
          }
          UberSet.Bool(GameComplete, true);
          MessageController.ShowTimedMessage("spoiler unlocked", queue: "wheel");
          break;
        case Action.TeleportCheat:
          if (SeedController.Settings.RaceMode) return; // no cheat
          tpCheatToggle = !tpCheatToggle;
          MessageController.ShowTimedMessage($"TPCheat {(tpCheatToggle ? "enabled" : "disabled")}", queue: "wheel");
          break;
        case Action.WarpCredits:
          if (UberGet.Bool(GameComplete))
            InterOp.start_credits();
          else
            MessageController.ShowTimedMessage($"Credit warp not unlocked!", queue: "wheel");
          break;
        case Action.PrintCoordinates:
          var pos = InterOp.get_position();
          MessageController.ShowTimedMessage($"{pos.X}, {pos.Y}", queue: "wheel");
          break;
        case Action.TogglePickupNamesOnSpoiler:
          MapController.NameLabels = !MapController.NameLabels;
          MessageController.ShowTimedMessage($"Loc name labels {(MapController.NameLabels ? "enabled" : "disabled")}", queue: "wheel");
          break;
        case Action.ClearMessages:
          MessageController.Clear();
          break;
        default:
          Randomizer.Log("Unhandled action triggered.");
          break;
      }
    }

    public static bool tpCheatToggle = false;
    public static bool TPToPickupsEnabled { get => tpCheatToggle && InterOp.Utils.get_debug_controls(); }
  }
}
