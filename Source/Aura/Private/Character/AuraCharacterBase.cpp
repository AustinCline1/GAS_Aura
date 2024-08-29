// Copyright Austin Cline


#include "Character/AuraCharacterBase.h"

// Sets default values
AAuraCharacterBase::AAuraCharacterBase()
{
 	PrimaryActorTick.bCanEverTick = false;
	//Creating a Skeletal Mesh Compenent called Weapon
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	//Attaching the Mesh Component using the socket named WeaponHandSocket on the Skeletal Mesh 
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	//Removing Collision from the weapon
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}


void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


