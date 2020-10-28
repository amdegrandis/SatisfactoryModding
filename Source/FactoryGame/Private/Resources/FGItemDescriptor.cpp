// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGItemDescriptor.h"

#if WITH_EDITOR
void UFGItemDescriptor::PostEditChangeProperty( FPropertyChangedEvent& propertyChangedEvent){ Super::PostEditChangeProperty(propertyChangedEvent); }
#endif 
#if WITH_EDITOR
void UFGItemDescriptor::DeleteAllIcons(){ }
void UFGItemDescriptor::GenerateAllIcons(){ }
FVector UFGItemDescriptor::GetCenterOfCollision(){ return FVector(); }
#endif 
#if WITH_EDITOR
void UFGItemDescriptor::BeginGenerateIcons(){ }
void UFGItemDescriptor::EndGenerateIcons(){ }
void UFGItemDescriptor::ClearStage(){ }
void UFGItemDescriptor::SetupStage(){ }
void UFGItemDescriptor::GenerateIcon(bool reopenAssetEditor, TArray<UPackage*>& out_modifiedAddedPackages){ }
void UFGItemDescriptor::GetItemName(FString& out_itemName) const{ }
void UFGItemDescriptor::GetCurrentFolderPath(FString& out_folderPath) const{ }
void UFGItemDescriptor::GenerateIconName(FString& out_package, FString& out_assetName) const{ }
void UFGItemDescriptor::GenerateMaterialInstanceName(FString& out_package, FString& out_assetName) const{ }
USceneComponent* UFGItemDescriptor::CreatePreviewComponent( USceneComponent* attachParent,  UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
USceneComponent* UFGItemDescriptor::CalculateComponentBounds( USceneComponent* attachParent,  UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
#endif 
#if WITH_EDITORONLY_DATA
UFGItemDescriptor::FGenerateIconContext::FGenerateIconContext(){ }
bool UFGItemDescriptor::FGenerateIconContext::IsValid() const{ return bool(); }
UFGItemDescriptor::FGenerateIconContext UFGItemDescriptor::GenerateIconContext = UFGItemDescriptor::FGenerateIconContext();
#endif 
UFGItemDescriptor::UFGItemDescriptor() : Super() {
	this->mUseDisplayNameAndDescription = true;
	this->mStackSize = EStackSize::SS_MEDIUM;
	this->mCanBeDiscarded = true;
	this->mForm = EResourceForm::RF_SOLID;
}
void UFGItemDescriptor::Serialize(FArchive& ar){ Super::Serialize(ar); }
void UFGItemDescriptor::PostLoad(){ Super::PostLoad(); }
EResourceForm UFGItemDescriptor::GetForm(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mForm;
	else
		return EResourceForm();
}
float UFGItemDescriptor::GetEnergyValue(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mEnergyValue;
	else
		return float();
}
float UFGItemDescriptor::GetRadioactiveDecay(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mRadioactiveDecay;
	else
		return float();
}
FText UFGItemDescriptor::GetItemName(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (!inClass)
		return FText();
	if (inClass.GetDefaultObject()->mUseDisplayNameAndDescription)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText::FromString(inClass->GetName());
}
FText UFGItemDescriptor::GetItemDescription(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mDescription;
	else
		return FText();
}
FText UFGItemDescriptor::GetAbbreviatedDisplayName(TSubclassOf< UFGItemDescriptor > inClass){ return FText(); }
void UFGItemDescriptor::GetPreviewView(TSubclassOf< UFGItemDescriptor > inClass, FItemView& out_previewView){ }
void UFGItemDescriptor::GetIconView(TSubclassOf< UFGItemDescriptor > inClass, FItemView& out_itemView){ }
FSlateBrush UFGItemDescriptor::GetItemIcon(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mInventoryIcon;
	else
		return FSlateBrush();
}
UTexture2D* UFGItemDescriptor::GetSmallIcon(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mSmallIcon;
	else
		return nullptr;
}
UTexture2D* UFGItemDescriptor::GetBigIcon(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mPersistentBigIcon;
	else
		return nullptr;
}
UStaticMesh* UFGItemDescriptor::GetItemMesh(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mConveyorMesh;
	else
		return nullptr;
}
int32 UFGItemDescriptor::GetStackSize(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return static_cast<int32>(inClass.GetDefaultObject()->mStackSize);
	else
		return int32();
}
float UFGItemDescriptor::GetStackSizeConverted(TSubclassOf< UFGItemDescriptor > inClass){ return float(); }
bool UFGItemDescriptor::CanBeDiscarded(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mCanBeDiscarded;
	else
		return bool();
}
bool UFGItemDescriptor::RememberPickUp(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mRememberPickUp;
	else
		return bool();
}
TSubclassOf< UFGItemCategory > UFGItemDescriptor::GetItemCategory(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mItemCategory;
	else
		return TSubclassOf< UFGItemCategory >();
}
FColor UFGItemDescriptor::GetFluidColor(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mFluidColor;
	else
		return FColor();
}
FLinearColor UFGItemDescriptor::GetFluidColorLinear(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
		return inClass.GetDefaultObject()->mFluidColor.ReinterpretAsLinear();
	else
		return FLinearColor();
}
FTransform UFGItemDescriptor::GetIconCameraTransform(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconCameraTransform;
#else
		return FTransform();
#endif
	else
		return FTransform();
}
void UFGItemDescriptor::SetIconCameraTransform(TSubclassOf< UFGItemDescriptor > inClass, FTransform cameraTransform){ 
#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconCameraTransform = cameraTransform;
#endif
}
float UFGItemDescriptor::GetIconFOV(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconFOV;
#else
		return float();
#endif
	else
		return float();
}
void UFGItemDescriptor::SetIconFOV(TSubclassOf< UFGItemDescriptor > inClass, float iconFOV){ 
#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconFOV = iconFOV;
#endif
}
FRotator UFGItemDescriptor::GetIconObjectOrientation(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconObjectOrientation;
#else
		return FRotator();
#endif
	else
		return FRotator();
}
void UFGItemDescriptor::SetIconObjectOrientation(TSubclassOf< UFGItemDescriptor > inClass, FRotator objectOrientation){ 
#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconObjectOrientation = objectOrientation;
#endif
}
float UFGItemDescriptor::GetIconCameraDistance(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconCameraDistance;
#else
		return float();
#endif
	else
		return  float();
}
void UFGItemDescriptor::SetIconCameraDistance(TSubclassOf< UFGItemDescriptor > inClass, float cameraDistance){ 
#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconCameraDistance = cameraDistance;
#endif
}
FRotator UFGItemDescriptor::GetIconSkyOrientation(TSubclassOf< UFGItemDescriptor > inClass){ 
	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconSkyOrientation;
#else
		return FRotator();
#endif
	else
		return FRotator();
}
void UFGItemDescriptor::SetIconSkyOrientation(TSubclassOf< UFGItemDescriptor > inClass, FRotator skyOrientation){ }
FText UFGItemDescriptor::GetItemNameInternal() const{ return FText(); }
FText UFGItemDescriptor::GetItemDescriptionInternal() const{ return FText(); }
