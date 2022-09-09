#define NCURSES_WIDECHAR 1
#include <stdio.h>
#include <curses.h>
#include <unistd.h>
#include <locale.h>
#include <stddef.h>

void ncurs() {
    initscr();
    move(10, 10);
    /* addstr("dsflkajsdus \u2591 \u2569"); */
    addstr("русский текс");
    refresh();
    getch();
    endwin();

}

void pri() {
    printf("€\n");              // literal Unicode
    printf("\u2588");
    printf("\u2588");
    printf("\u2593");
    printf("\u2593");
    printf("\u2592");
    printf("\u2592");
    printf("\u2591");
    printf("\u2591");

}

int main(int args, char *argv[]) {
    setlocale(LC_ALL, "");
    ncurs();
    return 0;
}
