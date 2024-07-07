#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <ncurses.h>

bool running = true;

int main(int argc, char ** argv) {
	int x,y;
	initscr();
	getmaxyx(stdscr,y,x);
	WINDOW * win = newwin(y,x,0,0);
	refresh();
	wrefresh(win);
	while (running==true) {
		box(win,0,0);
		wprintw(win,"Hello World!");
		refresh();
		wrefresh(win);
		int ch = getchar();
		if (ch==113) { // q: quit
			running=false;
		}
	}
	endwin();
	return 0;
}
