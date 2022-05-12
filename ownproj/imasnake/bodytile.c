#include <stdio.h>
#include "bodytile.h"

void move_snake()
{
	int y, x;
	BodyTile tmp;

	for (i = 0; i < 500; i++){
		/* if not null */
		if (snakebody[i]){
			if (snakebody[i]->dir == 'l'){
				snakebody[i]->x--;

			}
			if (snakebody[i]->dir == 'u')
				snakebody[i]->--;
			if (snakebody[i]->dir == 'r')
				snakebody[i]->x++;
			if (snakebody[i]->dir == 'd')
				snakebody[i]->y++;



		}
	}





	for (y = 0; y < 50; y++){
		for (x = 0; x < 50; x++){
			if (b[y][x].is){
				if (b[y][x].dir == 'l'){
					if (!b[x-1][y].is){
						/*if next tile is empty*/
						b[x-1][y].is = 1;
						b[x-1][y].dir = b[x][y].dir;
					}
				}

				else if (b[y][x].dir == 'u')
					b[y--][x];
				else if (b[y][x].dir == 'r')
					b[y][x].x++;
				else if (b[y][x].dir == 'd')
					b[y][x].y++;
			} 
		}
	}
	while (b[i].is){
		
		i++;
	}
}

int main(void)
{
	while (1){

	}
	return 0;
}
