#pragma once
#define ADDRESS_GAMEMANAGER 0x4EAA460 // Game-> 
#define ADDRESS_STATUSMANAGER 0x4E6D1D8 // Game->
#define ADDRESS_INTERFACEMANAGER 0x4EA8A60 // Game->

#define OFFSET_GAMEMANAGER_ENTITYLIST 0xC8  // GameManager->

#define OFFSET_ENTITY_ENTITYINFO 0x18 // Entity->

#define OFFSET_ENTITYINFO_MAINCOMPONENT 0xA8 // Entity->EntityInfo->
#define OFFSET_MAINCOMPONENT_ESPCHAIN1 0x30
#define OFFSET_ESPCHAIN1_ESPCHAIN2 0x78 // ESPCHAIN1 ->
#define OFFSET_ESPCHAIN2_ESPCHAIN3 0x2E4 // ESPCHAIN2 ->

#define OFFSET_ISINGAME 0x38C //is in game