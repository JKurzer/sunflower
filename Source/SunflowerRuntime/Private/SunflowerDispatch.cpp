// Fill out your copyright notice in the Description page of Project Settings.


#include "SunflowerDispatch.h"

void USunflowerDispatch::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("SunflowerDispatch:Subsystem: Online"));
}

void USunflowerDispatch::OnWorldBeginPlay(UWorld& InWorld)
{
	if ([[maybe_unused]] const UWorld* World = InWorld.GetWorld()) {
		UE_LOG(LogTemp, Warning, TEXT("SunflowerDispatch:Subsystem: World beginning play"));
	
	}
}

void USunflowerDispatch::Deinitialize()
{

	Super::Deinitialize();
}

void USunflowerDispatch::Tick(float DeltaTime)
{
}

TStatId USunflowerDispatch::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(USunflowerDispatch, STATGROUP_Tickables);
}
