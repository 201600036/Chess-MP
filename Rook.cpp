#include "Rook.h"
#include <iostream>

using namespace std;

Rook::Rook()
{
}

bool Rook::isMoveValid(int col, int row, int board[8][8])
{
    return (checkHorizontal(col ,board) &&
    checkVertical(row, board));
}
