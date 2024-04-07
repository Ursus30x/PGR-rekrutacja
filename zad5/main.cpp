#include <iostream>
#include <ncurses.h>

int main(){
    initscr();
    cbreak();

    WINDOW * win = newwin(20,20,0,0);
    box(win,0,0);
    mvwprintw(win,4,4,"it works!!!");
    wrefresh(win);
    getchar();
    endwin();
}