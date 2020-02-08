// encoding to euc-kr
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>
#include <time.h>
#include "gotoxy.c"
#include "setcursor_type.c"
#include "boundary.c"
#include "blocks.c"
#include "erase_line.c"
#include "set_speed.c"

#define freq 50
#define WIDTH 12  // Inside width
#define HEIGHT 20 // Inside height
#define MAX 500   // CntÀÇ Á¦ÇÑ

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32
#define ESC 27

int mainArray[WIDTH + 3][HEIGHT + 5] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};
int nextArray[WIDTH + 3][HEIGHT + 5] = {
    0,
};
int score = 0, speed = 30;

// void showMainArray();

int main()
{
    srand(time(NULL));
    setcursortype(NOCURSOR);
    setBoundary();
    makeBlockHard(mainArray);
    //seeAllBlocks(mainArray);

    int cnt = 0,
        startX = marginLeft + WIDTH - 2,
        startY = marginTop + 1,
        curX, curY, curI, curD, // current x, y, index, direction
        nextI = rand() % 7,
        nextD = rand() % 4;
    char ch;

    cnt = 0;
    while (true)
    {
        if (kbhit())
        {
            ch = getch();
            if (ch == SPACE)
                break;
        }

        gotoxy(marginLeft, marginTop + HEIGHT + 2);
        printf("¡ç ¡æ ¡é : MOVE, ¡è or 'SPACE' : ROTATE");
        if (cnt > 70)
            cnt = 0;
        if (cnt / 35 == 0)
        {
            gotoxy(marginLeft, marginTop + HEIGHT + 4);
            printf("Press 'SPACE' button to start.");
        }
        else
        {
            gotoxy(marginLeft, marginTop + HEIGHT + 4);
            printf("                                 ");
        }
        Sleep(1000 / freq);
        cnt++;
    }
    gotoxy(marginLeft, marginTop + HEIGHT + 2);
    printf("                                         ");
    gotoxy(marginLeft, marginTop + HEIGHT + 4);
    printf("                                 ");

    while (!isBlockSet(startX, startY + 1, curI, curD, mainArray))
    {
        curX = startX;
        curY = startY;
        curI = nextI;
        curD = nextD;
        putBlock(curX, curY, curI, curD, mainArray);

        setSpeed(&speed, score);

        removeBlock(40, 5, nextI, nextD, nextArray);
        nextI = rand() % 7;
        nextD = rand() % 4;
        putBlock(40, 5, nextI, nextD, nextArray);

        while (true)
        {
            if (cnt > MAX)
            {
                cnt = 0;
            }
            ch = '\0';
            if (kbhit())
            {
                // control
                ch = getch();
                switch (ch)
                {
                case LEFT:
                    if (!isBlockSet(curX - 2, curY, curI, curD, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        curX = curX - 2;
                        putBlock(curX, curY, curI, curD, mainArray);
                    }
                    break;
                case RIGHT:
                    if (!isBlockSet(curX + 2, curY, curI, curD, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        curX = curX + 2;
                        putBlock(curX, curY, curI, curD, mainArray);
                    }
                    break;
                case SPACE:
                    if (!isBlockSet(curX, curY, curI, curD + 1, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        putBlock(curX, curY, curI, ++curD, mainArray);
                    }
                    break;
                case UP:
                    if (!isBlockSet(curX, curY, curI, curD + 1, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        putBlock(curX, curY, curI, ++curD, mainArray);
                    }
                    break;
                case DOWN:
                    if (!isBlockSet(curX, curY + 1, curI, curD, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        putBlock(curX, ++curY, curI, curD, mainArray);
                        score++;
                        information(&score);
                    }
                    break;
                }
            }

            // block fall
            if (cnt % speed == 0)
            {
                //showMainArray();
                if (!isBlockSet(curX, curY + 1, curI, curD, mainArray))
                {
                    removeBlock(curX, curY, curI, curD, mainArray);
                    putBlock(curX, ++curY, curI, curD, mainArray);
                    score++;
                    information(&score);
                }
                else
                {
                    break;
                }
            }

            Sleep(1000 / freq);
            cnt++;
        }

        eraseLine(mainArray, &score);
        makeBlockHard(mainArray);
    }
    ch = '\0';
    cnt = 0;
    while (true)
    {
        if (kbhit())
        {
            ch = getch();
            if (ch == ESC)
                break;
        }
        if (cnt > 70)
            cnt = 0;
        if (cnt / 35 == 0)
        {
            gotoxy(marginLeft + 4, marginTop + HEIGHT + 2);
            printf("G A M E  O V E R");
            gotoxy(marginLeft, marginTop + HEIGHT + 4);
            printf("Press 'ESC' button to exit.");
        }
        else
        {
            gotoxy(marginLeft + 4, marginTop + HEIGHT + 2);
            printf("                  ");
            gotoxy(marginLeft, marginTop + HEIGHT + 4);
            printf("                            ");
        }
        Sleep(1000 / freq);
        cnt++;
    }
    return 0;
}

// void showMainArray()
// {
//     for (int i = 3; i < HEIGHT + 5; i++)
//     {
//         gotoxy(70, i);
//         for (int j = 1; j < WIDTH + 2; j++)
//         {
//             printf("%3d", mainArray[j][i]);
//         }
//         printf("\n");
//     }
// }