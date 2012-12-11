#include<stdio.h>
#include<curses.h>

void end(){
	endwin();
	exit(0);
}

int main(){
	initscr();
	start_color();
	addstr("������� ��������: ");
	if(has_colors()){
		addstr("��\n");
	}else{
		addstr("���\n");
		end();
	}
	printw("���������� ��������������\n������: %d\n��� ������: %d\n", 
			       COLORS,COLOR_PAIRS);
	refresh();
	if(init_color(8, 500,500,500)){
		endwin();
		printf("������ init_color\n");
		exit(0);
	}
	init_pair(1,COLOR_RED, COLOR_GREEN);
	attron(COLOR_PAIR(1));
	printw("����������� ����� ������: %s\n", 
			can_change_color() == TRUE ? "��":"���");
	getch();
	endwin();
	return 0;
}
