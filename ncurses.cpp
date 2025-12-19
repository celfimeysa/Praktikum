#include <ncurses\curses.h>
using namespace std;

int main(){
    initscr();

    mvprintw(10, 10, "Hello World");

    refresh();

    getch();

    endwin();
    
}