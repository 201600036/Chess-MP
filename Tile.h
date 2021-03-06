#ifndef TILE_H
#define TILE_H

#include "Piece.h"
using namespace std;

class Piece;
class Tile
{
    public:
	Tile();
	void setPiece(Piece* p);
	void removePiece();
	void setCoordinates(int col, int row);
	int getXCoordinates();
	int getYCoordinates();
	void setValue(int val);
	int getValue();
	bool isOccupied();
	Piece* occupier;
	void makePiece(char piece, char color, Tile board[8][8]);
    private:
	int x,y, value;
	
};
#endif
