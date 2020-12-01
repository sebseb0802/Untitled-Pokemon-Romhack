#ifndef GUARD_BATTLE_Z_MOVE_H
#define GUARD_BATTLE_Z_MOVE_H

#include "constants/z_move_effects.h"

#define MOVE_Z_STATUS   0xFFFF

struct SignatureZMove
{
    u16 species;
    u16 item;
    u16 move;
    u16 zmove;
};

void QueueZMove(u8 battlerId, u16 baseMove);
bool32 IsViableZMove(u8 battlerId, u16 move);
bool32 TryChangeZIndicator(u8 battlerId, u16 move);
void CreateZMoveTriggerSprite(u8, bool8);
void HideZMoveTriggerSprite(void);
bool32 IsZMoveTriggerSpriteActive(void);
void DestroyZMoveTriggerSprite(void);
bool32 MoveSelectionDisplayZMove(u16 zmove);
const u8* GetZMoveName(u16 move);
void SetZEffect(void);
bool32 ShouldAIUseZMove(u8 activeId, u8 targetId, u16 *baseMove, u8 *chosenMoveId);

#endif // GUARD_BATTLE_Z_MOVE_H