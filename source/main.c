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

int main()
{
    setcursortype(NOCURSOR);
    setBoundary();
    //seeAllBlocks();
    int cnt = 0,
        startX = marginLeft + WIDTH + 1,
        startY = marginTop + 2,
        currentX, currentY;
    char ch;
    // for (int i = 0; i < HEIGHT * 2; i++)
    // {
    //     gotoxy(70, i);
    //     for (int j = 0; j < WIDTH * 2; j++)
    //     {
    //         printf("%d ", arr[j][i]);
    //     }
    //     printf("\n");
    // }

    // while (!isBlockSet)
    // {
    //     ch = '\0';
    //     if (kbhit()) // 키보드가 입력 받을 때만
    //     {
    //         ch = getch();
    //         removeBlock(x, y, index, dir);
    //         switch (ch)
    //         {
    //         case 'a':
    //             if (n > 10)
    //                 n = 0;
    //             bulX[n] = x;
    //             bulY[n] = y - 1;
    //             n++;
    //             break;
    //         case UP:
    //             if (y > 0)
    //                 y--;
    //             break;
    //         case DOWN:
    //             if (y < 24)
    //                 y++;
    //             break;
    //         case LEFT:
    //             if (x > 0)
    //                 x--;
    //             break;
    //         case RIGHT:
    //             if (x < 79)
    //                 x++;
    //             break;
    //         }
    //         gotoxy(x, y);
    //         printf("@");
    //     }
    //     if (cnt % 5 == 0)
    //     {
    //     }

    //     Sleep(1000 / freq);
    //     cnt++;
    // }

    system("pause > nul"); // 실행창 바로 닫힘 해결법
    return 0;
}