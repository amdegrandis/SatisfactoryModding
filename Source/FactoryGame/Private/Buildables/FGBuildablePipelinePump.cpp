// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipelinePump.h"
#include "FGPipelineAttachmentHologram.h"
#include "FGPowerInfoComponent.h"

void FQuantizedPumpIndicatorData::SetFlowPct(float pct){ }
float FQuantizedPumpIndicatorData::GetFlowPct() const{ return float(); }
void FQuantizedPumpIndicatorData::SetPressurePct(float pct){ }
float FQuantizedPumpIndicatorData::GetPressurePct() const{ return float(); }
AFGBuildablePipelinePump::AFGBuildablePipelinePump() : Super() {
	this->mMaxPressure = 22;
	this->mDesignPressure = 20;
	this->mDefaultFlowLimit = 10;
	this->mUserFlowLimit = -1;
	this->mMinimumFlowPercentForStandby = 0.0500000007450581;
	this->mRadius = 75;
	this->mFluidBoxVolume = 5;
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCurrentPotential = 1;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mFluidStackSizeMultiplier = 1;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGPipelineAttachmentHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildablePipelinePump::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipelinePump::BeginPlay(){ }
void AFGBuildablePipelinePump::Tick(float dt){ }
void AFGBuildablePipelinePump::Factory_Tick(float dt){ }
bool AFGBuildablePipelinePump::CanProduce_Implementation() const{ return bool(); }
void AFGBuildablePipelinePump::OnBuildEffectFinished(){ }
EProductionStatus AFGBuildablePipelinePump::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
void AFGBuildablePipelinePump::OnFluidDescriptorSet(){ }
void AFGBuildablePipelinePump::StopIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildablePipelinePump::SetMaxHeadLift(float design, float max){ }
float AFGBuildablePipelinePump::GetMaxHeadLift() const{ return float(); }
float AFGBuildablePipelinePump::GetDesignHeadLift() const{ return float(); }
void AFGBuildablePipelinePump::SetUserFlowLimit(float rate){ }
float AFGBuildablePipelinePump::GetFlowLimit() const{ return float(); }
float AFGBuildablePipelinePump::GetFlowLimitPct() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorFlowPct() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorFlow() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorHeadLiftPct() const{ return float(); }
float AFGBuildablePipelinePump::GetIndicatorHeadLift() const{ return float(); }
void AFGBuildablePipelinePump::UpdateDefaultFlowLimit(){ }
void AFGBuildablePipelinePump::UpdateFlowLimitOnFluidBox(){ }
