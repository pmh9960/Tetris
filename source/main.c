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
#include "blocks_order.c"
#include "erase_line.c"

#define freq 50
#define WIDTH 12  // Inside width
#define HEIGHT 20 // Inside height
#define MAX 50000 // Cnt의 제한
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32

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
void showMainArray();

int main()
{
    srand(time(NULL));
    setcursortype(NOCURSOR);
    setBoundary();
    //seeAllBlocks(mainArray);
    int cnt = 0,
        startX = marginLeft + WIDTH - 2,
        startY = marginTop + 1,
        curX, curY, curI, curD, // current x, y, index, direction
        nextI = rand() % 7,
        nextD = rand() % 4;
    char ch;

    while (!isBlockSet(startX, startY + 1, curI, curD, mainArray))
    {
        curX = startX;
        curY = startY;
        curI = nextI;
        curD = nextD;
        putBlock(curX, curY, curI, curD, mainArray);

        removeBlock(40, 5, nextI, nextD, nextArray);
        nextI = rand() % 7;
        nextD = rand() % 4;
        putBlock(40, 5, nextI, nextD, nextArray);

        while (true)
        {
            if (cnt > MAX)
                cnt = 0;
            ch = '\0';
            if (kbhit())
            {
                // control
                ch = getch();
                switch (ch)
                {
                case LEFT:
                    if (!isBlockSet(curX - 2, startY, curI, curD, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        curX = curX - 2;
                        putBlock(curX, curY, curI, curD, mainArray);
                    }
                    break;
                case RIGHT:
                    if (!isBlockSet(curX + 2, startY, curI, curD, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        curX = curX + 2;
                        putBlock(curX, curY, curI, curD, mainArray);
                    }
                    break;
                case SPACE:
                    if (!isBlockSet(curX, startY, curI, curD + 1, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        putBlock(curX, curY, curI, ++curD, mainArray);
                    }
                    break;
                case UP:
                    if (!isBlockSet(curX, startY, curI, curD + 1, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        putBlock(curX, curY, curI, ++curD, mainArray);
                    }
                    break;
                case DOWN:
                    if (!isBlockSet(curX, startY, curI, curD, mainArray))
                    {
                        removeBlock(curX, curY, curI, curD, mainArray);
                        putBlock(curX, ++curY, curI, curD, mainArray);
                    }
                    break;
                }
            }

            // block fall
            if (cnt % 10 == 0)
            {
                showMainArray();
                if (!isBlockSet(curX, curY + 1, curI, curD, mainArray))
                {
                    removeBlock(curX, curY, curI, curD, mainArray);
                    putBlock(curX, ++curY, curI, curD, mainArray);
                }
                else
                {
                    break;
                }
            }

            Sleep(1000 / freq);
            cnt++;
        }
        eraseLine(mainArray);
    }

    system("pause > nul"); // 실행창 바로 닫힘 해결법
    return 0;
}

void showMainArray()
{
    for (int i = 3; i < HEIGHT + 5; i++)
    {
        gotoxy(70, i);
        for (int j = 1; j < WIDTH + 2; j++)
        {
            printf("%d ", mainArray[j][i]);
        }
        printf("\n");
    }
}