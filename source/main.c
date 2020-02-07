// encoding to euc-kr
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "gotoxy.c"
#include "setcursortype.c"
#include "boundary.c"

int main()
{
    setcursortype(NOCURSOR);
    gotoxy(10, 10);

    setBoundary();

    system("pause > nul"); // 실행창 바로 닫힘 해결법
    return 0;
}