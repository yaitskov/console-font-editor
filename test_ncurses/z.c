#include<curses.h>

int main(){
	int i,j,k;
	initscr();
	start_color();
	for(i=300,j=1;i<1000;i+=100,j++)
		init_color(j,999,999,i);
	for(i=1;i<8;i++)
		init_pair(i,i,0);
	for(i=1;i<8;i++){
		attron(COLOR_PAIR(i));
		printw("HELLO WORLD\n");
	}
	getch();
	endwin();
	return 0;
}
