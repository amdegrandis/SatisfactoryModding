// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRenderTargetStage.h"
#include "Components/SceneComponent.h"
#include "Components/SceneCaptureComponent2D.h"

AFGRenderTargetStage::AFGRenderTargetStage() : Super() {
	this->mDynamicRenderTargetSizeX = 512;
	this->mDynamicRenderTargetSizeY = 512;
	this->mDynamicPixelFormat = PF_B8G8R8A8;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mSceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture")); this->mSceneCaptureComponent->SetupAttachment(this->RootComponent);
	this->mStage = CreateDefaultSubobject<USceneComponent>(TEXT("Stage")); this->mStage->SetupAttachment(this->RootComponent);
}
void AFGRenderTargetStage::BeginPlay(){ }
void AFGRenderTargetStage::BeginCapture(){ }
void AFGRenderTargetStage::EndCapture(){ }
void AFGRenderTargetStage::CaptureOnce(){ }
void AFGRenderTargetStage::SetRenderTargetFormat(int32 width, int32 height, EPixelFormat pixelFormat){ }
void AFGRenderTargetStage::UpdateRenderedComponents(){ }
void AFGRenderTargetStage::SetPreviewDistance(float distance){ }
void AFGRenderTargetStage::SetView(const FItemView& view){ }
UTextureRenderTarget2D* AFGRenderTargetStage::GetRenderTarget() const{ return nullptr; }
