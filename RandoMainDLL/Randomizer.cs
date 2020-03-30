﻿using System;
using System.IO;
using RandoMainDLL.Memory;
using System.Collections.Generic;
namespace RandoMainDLL
{
    public static class Randomizer
    {
        public static string PickupLog = "C:\\moon\\rando.PICKUPS";
        public static string SeedFile = "C:\\moon\\.currentseed";
        public static string SeedNameFile = "C:\\moon\\.currentseedname";
        public static string LogFile = "C:\\moon\\cs_log.txt";
        public static MemoryManager Memory;
        [DllExport]
        public static bool Initialize()
        {
            try {
                foreach(var fileName in new String[] { LogFile, PickupLog, SeedFile, SeedNameFile }) {
                    if(!File.Exists(fileName)) {
                        File.WriteAllText(fileName, "");
                        Log($"Wrote blank {fileName} (normal for first-time init)");
                    }
                }
                AHK.Init();
                SeedManager.ReadSeed();
                Memory = new MemoryManager();
                if (!Memory.HookProcess())
                    return false;

                Memory.PatchNoPause(true);
                return true;
            } catch (Exception e) {
                Log($"init error: {e.Message}\n{e.StackTrace}");
                return true;
            }
        }

        [DllExport]
        public static int Update() {
            try {
                if (!Memory.IsHooked) {
                    Memory.HookProcess();
                    return -3;
                }
                AHK.Tick();
                if (Memory.GameState() == GameState.Game) {
                    StateListener.Update();
                    if (!DoneInitial) {
                        UberStateInits();
                        return -1;
                    }
                    return -2;
                } 
                if(Memory.GameState() == GameState.Prologue) {
                    if(DoneInitial)
                        Log("new file detected");
                    DoneInitial = false;
                    return 0;
                }
                return -1;

            }
            catch (Exception e)
            {
                Log($"Update error: {e.Message}\n{e.StackTrace}");
            }

            return 4;
        }
        public static bool Dev = false;
        public static void Log(string message, bool printIfDev = true) {
            if (AHK.IniFlag("MuteCSLogs"))
                return;
            if (LastMessage == message && message.Length > 60) {
                repeats++;
                if (repeats > 180) {
                    repeats = 0;
                    File.AppendAllText(LogFile, "suppressed repeats x180\n");
                }
                return;
            }
            LastMessage = message;
            File.AppendAllText(LogFile, message+"\n");
            if(Dev && printIfDev) 
                AHK.Print(message);
        }
        public static string LastMessage = "";
        public static int repeats = 0;
        public static void UberStateInits()
        {
            if(!Memory.IsLoadingGame())
            {
                Memory.SetAbility(AbilityType.SpiritEdge);
                UberStateDefaults.savePedestalInkwaterMarsh.Value.Byte = 1;
                Memory.WriteUberState(UberStateDefaults.savePedestalInkwaterMarsh);
                foreach (UberState s in DefaultUberStates) { Memory.WriteUberState(s); }
                foreach (UberState s in KeystoneDoors) { Memory.WriteUberState(s); }
                BlackSheepWall = true;
                DoneInitial = true;
            }
        }
        public static bool DoneInitial = false;
        public static List<UberState> DefaultUberStates = new List<UberState>() {
            new UberState() { Name = "builderProjectSpiritWell", ID = 16825, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
            new UberState() { Name = "eyesPlacedIntoStatue", ID = 1038, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
            new UberState() { Name = "entranceStatueOpened", ID = 64003, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "risingPedestals", ID = 54318, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mokiTorchPlayed", ID = 3621, GroupName = "inkwaterMarshStateGroup", GroupID = 9593, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mapSecretsRevealed", ID = 35534, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "leverA", ID = 50432, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) }
        };
        public static List<UberState> KeystoneDoors = new List<UberState>() {
            new UberState() {Name = "e3DesertG_clone0_KeystoneDoor", ID = 28786, GroupName = "windsweptWastesGroupDescriptor",  GroupID = 20120, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true)},
            new UberState() { Name = "swampTorchIntroductionADoorWithTwoSlotsBooleanDescriptor", ID = 42309, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "swampNightcrawlerCavernADoorWithTwoSlotsBooleanDescriptor", ID = 47445, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorWithTwoSlots", ID = 59990, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mouldwoodDepthsGDoorWithTwoSlotsOpened", ID = 10758, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "keystoneGate", ID = 47621, GroupName = "lumaPoolsStateGroup", GroupID = 5377, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorWithFourSlots", ID = 4290, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "keystoneGate", ID = 49900, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorWithFourSlots", ID = 3171, GroupName = "moulwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorState", ID = 21500, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mouldwoodDepthsHDoorWithFourSlotsOpened", ID = 41544, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
        };

        // interop flag system (reserve the right at any time to change this to a dict)
        public static bool OreFound = false;
        public static bool PleaseSave = false;
        public static bool BlackSheepWall = false;
        public enum FlagCode: int {
            Save = 0,
            Ore = 1,
            UnlockMap = 2,
        }
        [DllExport]
        public static int OreCount() { return Memory.Ore;  }

        [DllExport]
        public static bool CheckFlag(FlagCode flag) {
            switch(flag) {
                case FlagCode.Ore:
                    if (OreFound) {
                        OreFound = false;
                        return true;
                    }
                    return false;
                case FlagCode.Save:
                    if (PleaseSave) {
                        PleaseSave = false;
                        return true;
                    }
                    return false;
                case FlagCode.UnlockMap:
                    if (BlackSheepWall) {
                        BlackSheepWall = false;
                        return true;
                    }
                    return false;
                default:
                    Randomizer.Log($"Unknown Flag code {flag}");
                    return false;
            }
        }
        public static bool TreeCollected(AbilityType ability)
        {
            return true;
        }

        [DllExport]
        public static UInt64 GetShardSlotPtr() {
            return Memory.ShardSlotPtr();
        }

        [DllExport]
        public static bool InjectLogEnabled() {
            return !AHK.IniFlag("MuteInjectLogs");
        }
        [DllExport]
        public static bool DoInvertTree(AbilityType ability) {
            return TreeCollected(ability) ^ Memory.HasAbility(ability);
        }
    }
}
