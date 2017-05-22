#include "Queen.h"
#include <cmath>
#include <iostream>

using namespace std;

Queen::Queen()
{
    value = 9;
    symbol = 'Q';

}

bool Queen::checkDiagonal(int col, int row, Tile board[8][8])
{
    float rise, run;
    rise = y - row;
    run = x - col;
    float slope = abs(rise/run);
    if(run == 0)
    {
	return false;
    }
    return(slope == 1.0);
}

bool Queen::checkVertical(int col, int row, Tile board[8][8])
{
    /*
    int delta;
    delta = abs(row-y);
    cout << "Delta: " << delta << endl;
    for(int i = 0; i < delta; i++ )
    {
	cout << "Checking " << col << " " << row + i;
	if(row + i >= 8)
	    continue;
	if(board[row + i][col].isOccupied() && board[row + i][col].occupier->getColor() == color)
	{
	    cout << "Space occupied" << endl;
	    return false;
	}
    }*/

    //TODO pls fix this shit idk why my mind isn't working ty
    return(x == col);
}

bool Queen::checkHorizontal(int col, int row, Tile board[8][8])
{
	int x;
	do{
	  x=x++;
	  if ([0][x] == ' '){
	     do{
		[0][x] = '0';
	     while (x != 8);
	  }else{ 
	     	[0][x] = '1';
	  }
	}while (x != 8);
	
	int y;
	do{
	   y = y++;
	   if ([0][y] == '1'){
		   return false;
	   }
	}while();
    return(y == row);
}

bool Queen::isMoveValid(int col,int row, Tile board[8][8])
{
    return (checkDiagonal(col, row, board) || checkHorizontal(col, row, board) || checkVertical(col, row, board));
}
