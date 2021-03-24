// This file has been automatically generated by the Unreal Header Implementation tool

#include "Resources/FGBuildDescriptor.h"

#if WITH_EDITOR
void UFGBuildDescriptor::PostEditChangeProperty( FPropertyChangedEvent& propertyChangedEvent){ Super::PostEditChangeProperty(propertyChangedEvent); }
#endif 
UFGBuildDescriptor::UFGBuildDescriptor() : Super() {
	this->mUseDisplayNameAndDescription = true;
	this->mStackSize = EStackSize::SS_MEDIUM;
	this->mCanBeDiscarded = true;
}
TSubclassOf< class UFGBuildCategory > UFGBuildDescriptor::GetBuildCategory(TSubclassOf< UFGBuildDescriptor > inClass){ return TSubclassOf<class UFGBuildCategory>(); }
void UFGBuildDescriptor::GetSubCategories(TSubclassOf< UFGBuildDescriptor > inClass,  TArray< TSubclassOf<  UFGBuildSubCategory > >& out_subCategories){ }
float UFGBuildDescriptor::GetBuildMenuPriority(TSubclassOf< UFGBuildDescriptor > inClass){ return float(); }
UClass* UFGBuildDescriptor::GetHologramClass(TSubclassOf< UFGBuildDescriptor > inClass){ return nullptr; }
TSubclassOf< AActor > UFGBuildDescriptor::GetBuildClass(TSubclassOf< UFGBuildDescriptor > inClass){ return TSubclassOf<AActor>(); }
TSubclassOf< class AFGHologram > UFGBuildDescriptor::GetHologramClassInternal() const{ return TSubclassOf<class AFGHologram>(); }
TSubclassOf< AActor > UFGBuildDescriptor::GetBuildClassInternal() const{ return TSubclassOf<AActor>(); }
