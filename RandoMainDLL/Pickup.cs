﻿using System;
using System.Collections.Generic;
using System.Linq;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PickupType : byte {
    SpiritLight,
    Resource,
    Ability,
    Shard,
    QuestItem,
    Teleporter,
    Message,
    Multi,
  }

  public enum TeleporterType : byte {
    MidnightBurrows,
    HowlsDen,
    LumaPoolsA,
    Wellspring,
    BaursReach,
    KwoloksHollow,
    Mouldwood,
    SilentWoodsA,
    SilentWoodsB,
    WindsweptWastesA,
    WindsweptWastesB,
    WindtornRuinsA,
    WillowsEnd,
    LumaPoolsB,
    WindtornRuinsB,
    WillowsEndShriek,
    InkwaterMarsh,
    builderProjectSpiritWell,
  }

  public enum ResourceType : byte {
    Health,
    Energy,
    Ore,
    Keystone,
    ShardSlot
  }

  public abstract class Pickup {
    public int Frames = 240;

    public virtual bool NonEmpty() => false;

    public abstract PickupType Type();

    public virtual void Grant(bool squelch = false) {
      if (!squelch) {
        AHK.Print(ToString(), Frames);
      }
    }

    public Pickup Concat(Pickup other) {
      var children = new List<Pickup>();
      if (this is Multi) {
        children.AddRange((this as Multi).Children);
      }
      else {
        children.Add(this);
      }

      if (other is Multi) {
        children.AddRange((other as Multi).Children);
      }
      else {
        children.Add(other);
      }
      // this can only really happen if one of these was Multi.Empty
      if (children.Count == 1) {
        return children[0];
      }

      return new Multi(children);
    }
  }

  public class Multi : Pickup {
    public Multi(List<Pickup> children) {
      Children = children;
    }

    public static Multi Empty => new Multi(new List<Pickup>());

    public List<Pickup> Children;

    public override PickupType Type() => PickupType.Multi;

    public override bool NonEmpty() => Children.Count > 0;

    public override void Grant(bool squelch = false) {
      foreach (var Child in Children) {
        Child.Grant(true);
      }

      if (Children.Exists(p => (p is Message) && (p as Message).Squelch)) {
        Children.Find(p => (p is Message) && (p as Message).Squelch).Grant(false);
      }
      else {
        base.Grant(squelch);
      }
    }

    public override string ToString() => string.Join(", ", Children.Select(c => c.ToString()));
  }

  public class Message : Pickup {
    public Message(string msg, int frames = 240, bool squelch = false) {
      Msg = msg;
      Frames = frames;
      Squelch = squelch;
    }

    public string Msg;
    public bool Squelch = false;

    public override PickupType Type() => PickupType.Message;
    public override void Grant(bool squelch = false) {
      if (!squelch) {
        AHK.Print(Msg, Frames);
      }
    }
    public override string ToString() => Msg;
  }

  public abstract class Sellable : Pickup {
    public abstract int DefaultCost();
  }

  public class Teleporter : Sellable {
    public Teleporter(TeleporterType _type) {
      type = _type;
    }

    public override PickupType Type() => PickupType.Teleporter;
    public TeleporterType type;

    public static Dictionary<TeleporterType, UberState> TeleporterStates = new Dictionary<TeleporterType, UberState>() {
      { TeleporterType.MidnightBurrows, UberStateDefaults.savePedestalMidnightBurrows },
      { TeleporterType.HowlsDen, UberStateDefaults.savePedestalHowlsDen },
      { TeleporterType.LumaPoolsA, UberStateDefaults.savePedestalLumaPoolsA },
      { TeleporterType.Wellspring, UberStateDefaults.savePedestalWellspring },
      { TeleporterType.BaursReach, UberStateDefaults.savePedestalBaursReach },
      { TeleporterType.KwoloksHollow, UberStateDefaults.savePedestalKwoloksHollow },
      { TeleporterType.Mouldwood, UberStateDefaults.savePedestalMouldwood },
      { TeleporterType.SilentWoodsA, UberStateDefaults.savePedestalSilentWoodsA },
      { TeleporterType.SilentWoodsB, UberStateDefaults.savePedestalSilentWoodsB },
      { TeleporterType.WindsweptWastesA, UberStateDefaults.savePedestalWindsweptWastesA },
      { TeleporterType.WindsweptWastesB, UberStateDefaults.savePedestalWindsweptWastesB },
      { TeleporterType.WindtornRuinsA, UberStateDefaults.savePedestalWindtornRuinsA },
      { TeleporterType.WillowsEnd, UberStateDefaults.savePedestalWillowsEnd },
      { TeleporterType.WindtornRuinsB, UberStateDefaults.savePedestalWindtornRuinsB },
      { TeleporterType.LumaPoolsB, UberStateDefaults.savePedestalLumaPoolsB },
      { TeleporterType.WillowsEndShriek, UberStateDefaults.savePedestalWillowsEndShriek },
      { TeleporterType.InkwaterMarsh, UberStateDefaults.savePedestalInkwaterMarsh },
    };

    public static Dictionary<TeleporterType, string> TeleporterNames = new Dictionary<TeleporterType, string>() {
      { TeleporterType.MidnightBurrows,  "Midnight Burrows" },
      { TeleporterType.HowlsDen,  "Howls Den" },
      { TeleporterType.LumaPoolsA,  "Luma Pools (East)" },
      { TeleporterType.Wellspring,  "Wellspring" },
      { TeleporterType.BaursReach,  "Baur's Reach" },
      { TeleporterType.KwoloksHollow,  "Kwoloks Hollow" },
      { TeleporterType.Mouldwood,  "Mouldwood Depths" },
      { TeleporterType.SilentWoodsA,  "Silent Woods (West)" },
      { TeleporterType.SilentWoodsB,  "Silent Woods (East)" },
      { TeleporterType.WindsweptWastesA,  "Windswept Wastes (West)" },
      { TeleporterType.WindsweptWastesB,  "Windswept Wastes (East)" },
      { TeleporterType.WindtornRuinsA,  "Windtorn Ruins (Outer)" },
      { TeleporterType.WillowsEnd,  "Willows End" },
      { TeleporterType.LumaPoolsB,  "Luma Pools (West)" },
      { TeleporterType.WindtornRuinsB,  "Windtorn Ruins (Inner)" },
      { TeleporterType.WillowsEndShriek,  "Spirit Willow" },
      { TeleporterType.InkwaterMarsh,  "Inkwater Marsh" },
    };

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      TeleporterStates[type].Value.Byte = 1;
      Randomizer.Memory.WriteUberState(TeleporterStates[type]);
    }
    public override int DefaultCost() => 250;
    public override string ToString() => $"Teleporter: {TeleporterNames[type]}";
  }

  public class Ability : Sellable {
    public Ability(AbilityType ability) {
      type = ability;
    }

    public override PickupType Type() => PickupType.Ability;
    public AbilityType type;

    public override int DefaultCost() {
      if (type == AbilityType.Blaze) {
        return 420; // :3
      }

      return 500;
    }

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.SetAbility(type);
    }

    public override string ToString() => AbilityN.ame(type);
  }

  public class Shard : Sellable {
    public Shard(ShardType shard) {
      type = shard;
    }

    public override PickupType Type() => PickupType.Shard;
    public ShardType type;

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.SetShard(type);
    }

    public override int DefaultCost() => 300;
    public override string ToString() => ShardN.ame(type);
  }

  public class Cash : Pickup {
    public Cash(int amount) {
      this.amount = amount;
    }

    public override PickupType Type() => PickupType.SpiritLight;
    public int amount;

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.Experience += amount;
    }

    private static List<string> MoneyNames = new List<string>() { "Spirit Light", "Gallons", "Spirit Bucks", "Gold", "Geo", "Experience", "Gil", "GP", "Dollars", "Tokens", "Tickets", "Pounds Sterling", "BTC", "Euros", "Credits", "Bells", "Zenny", "Pesos", "Exalted Orbs", "Poké", "Glod", "Dollerydoos", "Boonbucks" };
    public override string ToString() => $"{amount} {MoneyNames[new Random().Next(MoneyNames.Count)]}";
  }

  public class Resource : Sellable {
    public Resource(ResourceType resource) {
      type = resource;
    }

    public override PickupType Type() => PickupType.Resource;
    public ResourceType type;

    public override int DefaultCost() {
      switch (type) {
        case ResourceType.Health:
          return 200;
        case ResourceType.Energy:
          return 150;
        case ResourceType.Ore:
        case ResourceType.Keystone:
          return 100;
        case ResourceType.ShardSlot:
          return 400;
        default:
          return 0;
      }
    }

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      switch (type) {
        case ResourceType.Health:
          Randomizer.Memory.FakeHalfHealth();
          break;
        case ResourceType.Energy:
          Randomizer.Memory.FakeHalfEnergy();
          break;
        case ResourceType.Ore:
          Randomizer.Memory.Ore++;
          Randomizer.OreFound = true;
          break;
        case ResourceType.Keystone:
          Randomizer.Memory.Keystones++;
          break;
        case ResourceType.ShardSlot:
          Randomizer.Memory.Shards++;
          break;
      }
    }

    public override string ToString() {
      switch (type) {
        case ResourceType.Health:
          return "Half-Health Cell";
        case ResourceType.Energy:
          return "Half-Energy Cell";
        case ResourceType.Ore:
          return "Gorlek Ore";
        case ResourceType.Keystone:
          return "Keystone";
        case ResourceType.ShardSlot:
          return "Shard Slot";
        default:
          return $"Unknown resource type {type}";
      }
    }
  }
}
