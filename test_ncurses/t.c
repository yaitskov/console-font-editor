#include<stdio.h>
#include<curses.h>

void main(void){
	initscr();
	clear();
	move(10,20);
	addstr("Hello world");
	getch();
	endwin();
}

