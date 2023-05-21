#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    int x = 20, y = 10;
    char ch;

    system("cls");
    gotoxy(x, y);
    printf("³¯«\Ê¹");
    //textcolor(BLUE);

    while (1) {
        if (kbhit()) {
            ch = getch();
            switch(ch) {
                case 72:
                    y--;
                    break;
                case 80:
                    y++;
                    break;
                case 75:
                    x--;
                    break;
                case 77:
                    x++;
                    break;
                case 27:
                    gotoxy(0, 25);
                    exit(0);
                default:
                    break;
            }

            system("cls");

            gotoxy(x, y);
            printf("³¯«\Ê¹");

            if (x < 0 || x > 79 || y < 0 || y > 24) {
                break;
            }
        }
    }

    return 0;
}