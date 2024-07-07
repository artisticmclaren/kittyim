#include <stdio.h>
#include <ncurses.h>

int main(int argc, char ** argv) {
	initscr();
	refresh();
	int ch = getch();
	printw("%d",ch);
	getch();
	endwin();
	return 0;
}
