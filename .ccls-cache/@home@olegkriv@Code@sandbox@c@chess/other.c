#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <locale.h>


int main(int argc, char *argv[]) 
{ 
    setlocale(LC_ALL, "");
    initscr();              // Initialize stdscr

    for(int x = 0; x < 20; x++)
    {
        switch (x%5)
        {
            case 0:
                mvaddstr(1, x, "\u2588");
                break;
            case 1:
                mvaddstr(1, x, "\u2593");
                break;
            case 2:
                mvaddstr(1, x, "\u2592");
                break;
            case 3:
                mvaddstr(1, x, "\u2591");
                break;
            case 4:
                mvaddstr(1, x, " ");
                break;
        }
    }

    mvprintw(3, 0, "Press ANY KEY to finish");
    refresh();
    int ch = getch();
    endwin();

    return 0;
}
