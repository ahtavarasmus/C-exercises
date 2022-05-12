#include <stdio.h>
#include <curses.h>

int main(void)
{
	int k;

	initscr();
	addstr("How are you?\n");

	while (1){
		k = getch();
		if (k == 'q')
			break;
		if (k == 'h')
			printf("left");
		if (k == 'j')
			printf("down");
		if (k == 'k')
			printf("up");
		if (k == 'l')
			printf("right");
		printf("\n");
	}


	endwin();


	return 0;
}

