#pragma once

#include "BWSLInterface.h"

#include <string>
#include <set>

namespace BWSL
{
  class Order
  {
    public:
      Order();
      Order(int id);
      Order(const Order& other);
      Order& operator=(const Order& other);
      bool operator==(const Order& other) const;
      bool operator!=(const Order& other) const;
      bool operator<(const Order& other) const;
      int getID() const;
      std::string getName() const;
    private:
      int id;
  };
  namespace Orders
  {
    Order getOrder(std::string& name);
    std::set<Order>& allOrders();
    void init();
    BWSL_EXPORT extern const Order Die;
    BWSL_EXPORT extern const Order Stop;
    BWSL_EXPORT extern const Order Guard;
    BWSL_EXPORT extern const Order PlayerGuard;
    BWSL_EXPORT extern const Order TurretGuard;
    BWSL_EXPORT extern const Order BunkerGuard;
    BWSL_EXPORT extern const Order Move;
    BWSL_EXPORT extern const Order ReaverStop;
    BWSL_EXPORT extern const Order Attack1;
    BWSL_EXPORT extern const Order Attack2;
    BWSL_EXPORT extern const Order AttackUnit;
    BWSL_EXPORT extern const Order AttackFixedRange;
    BWSL_EXPORT extern const Order AttackTile;
    BWSL_EXPORT extern const Order Hover;
    BWSL_EXPORT extern const Order AttackMove;
    BWSL_EXPORT extern const Order InfestMine1;
    BWSL_EXPORT extern const Order Nothing1;
    BWSL_EXPORT extern const Order Powerup1;
    BWSL_EXPORT extern const Order TowerGuard;
    BWSL_EXPORT extern const Order TowerAttack;
    BWSL_EXPORT extern const Order VultureMine;
    BWSL_EXPORT extern const Order StayinRange;
    BWSL_EXPORT extern const Order TurretAttack;
    BWSL_EXPORT extern const Order Nothing2;
    BWSL_EXPORT extern const Order Nothing3;
    BWSL_EXPORT extern const Order DroneStartBuild;
    BWSL_EXPORT extern const Order DroneBuild;
    BWSL_EXPORT extern const Order InfestMine2;
    BWSL_EXPORT extern const Order InfestMine3;
    BWSL_EXPORT extern const Order InfestMine4;
    BWSL_EXPORT extern const Order BuildTerran;
    BWSL_EXPORT extern const Order BuildProtoss1;
    BWSL_EXPORT extern const Order BuildProtoss2;
    BWSL_EXPORT extern const Order ConstructingBuilding;
    BWSL_EXPORT extern const Order Repair1;
    BWSL_EXPORT extern const Order Repair2;
    BWSL_EXPORT extern const Order PlaceAddon;
    BWSL_EXPORT extern const Order BuildAddon;
    BWSL_EXPORT extern const Order Train;
    BWSL_EXPORT extern const Order RallyPoint1;
    BWSL_EXPORT extern const Order RallyPoint2;
    BWSL_EXPORT extern const Order ZergBirth;
    BWSL_EXPORT extern const Order Morph1;
    BWSL_EXPORT extern const Order Morph2;
    BWSL_EXPORT extern const Order BuildSelf1;
    BWSL_EXPORT extern const Order ZergBuildSelf;
    BWSL_EXPORT extern const Order Build5;
    BWSL_EXPORT extern const Order Enternyduscanal;
    BWSL_EXPORT extern const Order BuildSelf2;
    BWSL_EXPORT extern const Order Follow;
    BWSL_EXPORT extern const Order Carrier;
    BWSL_EXPORT extern const Order CarrierIgnore1;
    BWSL_EXPORT extern const Order CarrierStop;
    BWSL_EXPORT extern const Order CarrierAttack1;
    BWSL_EXPORT extern const Order CarrierAttack2;
    BWSL_EXPORT extern const Order CarrierIgnore2;
    BWSL_EXPORT extern const Order CarrierFight;
    BWSL_EXPORT extern const Order HoldPosition1;
    BWSL_EXPORT extern const Order Reaver;
    BWSL_EXPORT extern const Order ReaverAttack1;
    BWSL_EXPORT extern const Order ReaverAttack2;
    BWSL_EXPORT extern const Order ReaverFight;
    BWSL_EXPORT extern const Order ReaverHold;
    BWSL_EXPORT extern const Order TrainFighter;
    BWSL_EXPORT extern const Order StrafeUnit1;
    BWSL_EXPORT extern const Order StrafeUnit2;
    BWSL_EXPORT extern const Order RechargeShields1;
    BWSL_EXPORT extern const Order Rechargeshields2;
    BWSL_EXPORT extern const Order ShieldBattery;
    BWSL_EXPORT extern const Order Return;
    BWSL_EXPORT extern const Order DroneLand;
    BWSL_EXPORT extern const Order BuildingLand;
    BWSL_EXPORT extern const Order BuildingLiftoff;
    BWSL_EXPORT extern const Order DroneLiftoff;
    BWSL_EXPORT extern const Order Liftoff;
    BWSL_EXPORT extern const Order ResearchTech;
    BWSL_EXPORT extern const Order Upgrade;
    BWSL_EXPORT extern const Order Larva;
    BWSL_EXPORT extern const Order SpawningLarva;
    BWSL_EXPORT extern const Order Harvest1;
    BWSL_EXPORT extern const Order Harvest2;
    BWSL_EXPORT extern const Order MoveToGas;
    BWSL_EXPORT extern const Order WaitForGas;
    BWSL_EXPORT extern const Order HarvestGas;
    BWSL_EXPORT extern const Order ReturnGas;
    BWSL_EXPORT extern const Order MoveToMinerals;
    BWSL_EXPORT extern const Order WaitForMinerals;
    BWSL_EXPORT extern const Order MiningMinerals;
    BWSL_EXPORT extern const Order Harvest3;
    BWSL_EXPORT extern const Order Harvest4;
    BWSL_EXPORT extern const Order ReturnMinerals;
    BWSL_EXPORT extern const Order Harvest5;
    BWSL_EXPORT extern const Order EnterTransport;
    BWSL_EXPORT extern const Order Pickup1;
    BWSL_EXPORT extern const Order Pickup2;
    BWSL_EXPORT extern const Order Pickup3;
    BWSL_EXPORT extern const Order Pickup4;
    BWSL_EXPORT extern const Order Powerup2;
    BWSL_EXPORT extern const Order SiegeMode;
    BWSL_EXPORT extern const Order TankMode;
    BWSL_EXPORT extern const Order WatchTarget;
    BWSL_EXPORT extern const Order InitCreepGrowth;
    BWSL_EXPORT extern const Order SpreadCreep;
    BWSL_EXPORT extern const Order StoppingCreepGrowth;
    BWSL_EXPORT extern const Order GuardianAspect;
    BWSL_EXPORT extern const Order WarpingArchon;
    BWSL_EXPORT extern const Order CompletingArchonsummon;
    BWSL_EXPORT extern const Order HoldPosition2;
    BWSL_EXPORT extern const Order HoldPosition3;
    BWSL_EXPORT extern const Order Cloak;
    BWSL_EXPORT extern const Order Decloak;
    BWSL_EXPORT extern const Order Unload;
    BWSL_EXPORT extern const Order MoveUnload;
    BWSL_EXPORT extern const Order FireYamatoGun1;
    BWSL_EXPORT extern const Order FireYamatoGun2;
    BWSL_EXPORT extern const Order MagnaPulse;
    BWSL_EXPORT extern const Order Burrow;
    BWSL_EXPORT extern const Order Burrowed;
    BWSL_EXPORT extern const Order Unburrow;
    BWSL_EXPORT extern const Order DarkSwarm;
    BWSL_EXPORT extern const Order CastParasite;
    BWSL_EXPORT extern const Order SummonBroodlings;
    BWSL_EXPORT extern const Order EmpShockwave;
    BWSL_EXPORT extern const Order NukeWait;
    BWSL_EXPORT extern const Order NukeTrain;
    BWSL_EXPORT extern const Order NukeLaunch;
    BWSL_EXPORT extern const Order NukePaint;
    BWSL_EXPORT extern const Order NukeUnit;
    BWSL_EXPORT extern const Order NukeGround;
    BWSL_EXPORT extern const Order NukeTrack;
    BWSL_EXPORT extern const Order InitArbiter;
    BWSL_EXPORT extern const Order CloakNearbyUnits;
    BWSL_EXPORT extern const Order PlaceMine;
    BWSL_EXPORT extern const Order Rightclickaction;
    BWSL_EXPORT extern const Order SapUnit;
    BWSL_EXPORT extern const Order SapLocation;
    BWSL_EXPORT extern const Order HoldPosition4;
    BWSL_EXPORT extern const Order Teleport;
    BWSL_EXPORT extern const Order TeleporttoLocation;
    BWSL_EXPORT extern const Order PlaceScanner;
    BWSL_EXPORT extern const Order Scanner;
    BWSL_EXPORT extern const Order DefensiveMatrix;
    BWSL_EXPORT extern const Order PsiStorm;
    BWSL_EXPORT extern const Order Irradiate;
    BWSL_EXPORT extern const Order Plague;
    BWSL_EXPORT extern const Order Consume;
    BWSL_EXPORT extern const Order Ensnare;
    BWSL_EXPORT extern const Order StasisField;
    BWSL_EXPORT extern const Order Hallucination1;
    BWSL_EXPORT extern const Order Hallucination2;
    BWSL_EXPORT extern const Order ResetCollision1;
    BWSL_EXPORT extern const Order ResetCollision2;
    BWSL_EXPORT extern const Order Patrol;
    BWSL_EXPORT extern const Order CTFCOPInit;
    BWSL_EXPORT extern const Order CTFCOP1;
    BWSL_EXPORT extern const Order CTFCOP2;
    BWSL_EXPORT extern const Order ComputerAI;
    BWSL_EXPORT extern const Order AtkMoveEP;
    BWSL_EXPORT extern const Order HarassMove;
    BWSL_EXPORT extern const Order AIPatrol;
    BWSL_EXPORT extern const Order GuardPost;
    BWSL_EXPORT extern const Order RescuePassive;
    BWSL_EXPORT extern const Order Neutral;
    BWSL_EXPORT extern const Order ComputerReturn;
    BWSL_EXPORT extern const Order InitPsiProvider;
    BWSL_EXPORT extern const Order SelfDestrucing;
    BWSL_EXPORT extern const Order Critter;
    BWSL_EXPORT extern const Order HiddenGun;
    BWSL_EXPORT extern const Order OpenDoor;
    BWSL_EXPORT extern const Order CloseDoor;
    BWSL_EXPORT extern const Order HideTrap;
    BWSL_EXPORT extern const Order RevealTrap;
    BWSL_EXPORT extern const Order Enabledoodad;
    BWSL_EXPORT extern const Order Disabledoodad;
    BWSL_EXPORT extern const Order Warpin;
    BWSL_EXPORT extern const Order Medic;
    BWSL_EXPORT extern const Order MedicHeal1;
    BWSL_EXPORT extern const Order HealMove;
    BWSL_EXPORT extern const Order MedicHoldPosition;
    BWSL_EXPORT extern const Order MedicHeal2;
    BWSL_EXPORT extern const Order Restoration;
    BWSL_EXPORT extern const Order CastDisruptionWeb;
    BWSL_EXPORT extern const Order CastMindControl;
    BWSL_EXPORT extern const Order WarpingDarkArchon;
    BWSL_EXPORT extern const Order CastFeedback;
    BWSL_EXPORT extern const Order CastOpticalFlare;
    BWSL_EXPORT extern const Order CastMaelstrom;
    BWSL_EXPORT extern const Order JunkYardDog;
    BWSL_EXPORT extern const Order Fatal;
    BWSL_EXPORT extern const Order None;
    BWSL_EXPORT extern const Order Unknown;
  };
}