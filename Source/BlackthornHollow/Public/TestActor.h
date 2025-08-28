
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class BLACKTHORNHOLLOW_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATestActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
