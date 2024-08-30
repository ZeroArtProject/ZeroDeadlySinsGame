// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/CharacterAnimInstance.h"
#include "Characters/WarriorBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCharacterAnimInstance::NativeInitializeAnimation()
{
	OwningCharacter = Cast<AWarriorBaseCharacter>(TryGetPawnOwner());
	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void UCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}
	GroundSpeed = OwningCharacter->GetVelocity().Size2D();

	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;

	
  ////////////////////////////////

    // �������� �������� ���������
    FVector Velocity = OwningCharacter->GetVelocity();
    GroundSpeed = Velocity.Size2D(); // ��������� �������� �� ���������

    // �������� ������� �������� ������
    FRotator ActorRotation = OwningCharacter->GetActorRotation();

    // ��������� ����������� ��������
    CharacterDirection = CalculateDirection(Velocity, ActorRotation);

  
}


