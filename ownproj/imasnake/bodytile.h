typedef struct {
	int is = 0;
	int last_tile = 0;
	int x;
	int y;
	char dir;
	
}BodyTile;

BodyTile gameboard[50][50];

BodyTile* snaketiles[500];
