// Copyright Jakub W, All Rights Reserved.

#include "JakubCableComponentBPLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "PhysicsEngine/BodySetup.h"
#include "JakubCableComponent.h"

UJakubCableComponentBPLibrary::UJakubCableComponentBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

ECollisionTraceFlag UJakubCableComponentBPLibrary::GetCollisionTraceFlag(UStaticMeshComponent* Object)
{
    UStaticMesh* Mesh = Object->GetStaticMesh();
    if (Mesh != nullptr)
    {
        UBodySetup* BodySetup = Mesh->GetBodySetup();
        if (BodySetup != nullptr)
        {
            return BodySetup->CollisionTraceFlag;
        }
    }
    return ECollisionTraceFlag::CTF_UseDefault;
}
