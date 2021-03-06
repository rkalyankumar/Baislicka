#ifndef PV_H_INCLUDED
#define PV_H_INCLUDED

#include "board.h"
#include "move.h"

typedef struct
{
    int num_moves;
    s_move moves[MAX_DEPTH];
} s_pv;

int legal_pv(s_board *board, const s_pv *pv);

#endif
