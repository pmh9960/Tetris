// encoding to euc-kr
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>
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

int array[WIDTH + 3][HEIGHT + 5] = {
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

void showArray();

int main()
{
    setcursortype(NOCURSOR);
    setBoundary();
    //seeAllBlocks(array);
    int cnt = 0,
        startX = marginLeft + WIDTH - 2,
        startY = marginTop + 1,
        curX, curY, curI, curD; // current x, y, index, direction
    char ch;

    while (!isBlockSet(startX, startY + 1, curI, curD, array))
    {
        curX = startX;
        curY = startY;
        curI = 5; // function
        curD = 3; // function
        putBlock(curX, curY, curI, curD, array);
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
                    if (!isBlockSet(curX - 2, curY + 1, curI, curD, array))
                    {
                        removeBlock(curX, curY, curI, curD, array);
                        curX = curX - 2;
                        putBlock(curX, curY, curI, curD, array);
                    }
                    break;
                case RIGHT:
                    if (!isBlockSet(curX + 2, curY + 1, curI, curD, array))
                    {
                        removeBlock(curX, curY, curI, curD, array);
                        curX = curX + 2;
                        putBlock(curX, curY, curI, curD, array);
                    }
                    break;
                case SPACE:
                    if (!isBlockSet(curX, curY + 1, curI, curD + 1, array))
                    {
                        removeBlock(curX, curY, curI, curD, array);
                        putBlock(curX, curY, curI, ++curD, array);
                    }
                    break;
                case UP:
                    if (!isBlockSet(curX, curY + 1, curI, curD + 1, array))
                    {
                        removeBlock(curX, curY, curI, curD, array);
                        putBlock(curX, curY, curI, ++curD, array);
                    }
                    break;
                case DOWN:
                    if (!isBlockSet(curX, curY + 1, curI, curD, array))
                    {
                        removeBlock(curX, curY, curI, curD, array);
                        putBlock(curX, ++curY, curI, curD, array);
                    }
                    break;
                }
            }

            // block fall
            if (cnt % 10 == 0)
            {
                showArray();
                if (!isBlockSet(curX, curY + 1, curI, curD, array))
                {
                    removeBlock(curX, curY, curI, curD, array);
                    putBlock(curX, ++curY, curI, curD, array);
                }
                else
                {
                    break;
                }
            }

            Sleep(1000 / freq);
            cnt++;
        }
        eraseLine(array);
    }

    system("pause > nul"); // 실행창 바로 닫힘 해결법
    return 0;
}

void showArray()
{
    for (int i = 3; i < HEIGHT + 5; i++)
    {
        gotoxy(70, i);
        for (int j = 1; j < WIDTH + 2; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
}