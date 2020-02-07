// encoding to euc-kr
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include "gotoxy.c"
#include "setcursor_type.c"
#include "boundary.c"
#include "blocks.c"
#include "blocks_order.c"

#define freq 50
#define WIDTH 11  // Inside width
#define HEIGHT 20 // Inside height
#define MAX 50000 // Cnt의 제한

int array[WIDTH * 2][HEIGHT * 2] = {
    0,
};

int main()
{
    setcursortype(NOCURSOR);
    //setBoundary();
    seeAllBlocks(array);
    int cnt = 0,
        startX = marginLeft + WIDTH + 1,
        startY = marginTop + 2,
        curX, curY, curI, curD; // current x, y, index, direction
    char ch;
    putBlock(startX, startY, 1, 0, array);
    for (int i = 0; i < HEIGHT + 2; i++)
    {
        gotoxy(70, i);
        for (int j = 0; j < WIDTH + 2; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    curX = startX;
    curY = startY;
    curI = 1;
    curD = 0;
    // curI = function();
    // curD = function();
    putBlock(curX, curY, curI, curD, array);
    while (true)
    {
        if (cnt > MAX)
            cnt = 0;
        if (cnt % 5 == 0)
        {
            if (!isBlockSet(curX, curY + 1, curI, curD, array))
            {
                removeBlock(curX, curY, curI, curD, array);
                putBlock(curX, ++curY, curI, curD, array);
            }
            else
            {
                return 0;
            }
        }
        Sleep(1000 / freq);
        cnt++;
    }

    system("pause > nul"); // 실행창 바로 닫힘 해결법
    return 0;
}