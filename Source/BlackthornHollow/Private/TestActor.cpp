

#include "TestActor.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Test Actor Tick") );
}

void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

