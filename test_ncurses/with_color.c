#include<stdio.h>
#include<curses.h>

void end(){
	endwin();
	exit(0);
}

int main(){
	initscr();
	start_color();
	addstr("Цветной терминал: ");
	if(has_colors()){
		addstr("Да\n");
	}else{
		addstr("Нет\n");
		end();
	}
	printw("Количество поддерживаемых\nцветов: %d\nпар цветов: %d\n", 
			       COLORS,COLOR_PAIRS);
	refresh();
	if(init_color(8, 500,500,500)){
		endwin();
		printf("Ошибка init_color\n");
		exit(0);
	}
	init_pair(1,COLOR_RED, COLOR_GREEN);
	attron(COLOR_PAIR(1));
	printw("Определение новых цветов: %s\n", 
			can_change_color() == TRUE ? "Да":"Нет");
	getch();
	endwin();
	return 0;
}
