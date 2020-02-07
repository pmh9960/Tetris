// encoding to euc-kr
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "gotoxy.c"
#include "setcursortype.c"
#include "boundary.c"
#include "blocks.c"

int main()
{
    setcursortype(NOCURSOR);
    gotoxy(10, 10);

    // setBoundary();
    for (int i = 0; i < 7; i++)
    {
        for (int dir = 0; dir < 4; dir++)
        {
            putBlocks(4 + dir * 8, 2 + i * 4, i, dir);
        }
    }

    system("pause > nul"); // 실행창 바로 닫힘 해결법
    return 0;
}