// encoding to euc-kr
#include <stdio.h>
#include <stdlib.h>
#include "gotoxy.c"
#include "setcursortype.c"

int main()
{
    setcursortype(NOCURSOR);
    gotoxy(10, 10);
    printf("Hello world!");

    system("pause > nul"); // 실행창 바로 닫힘 해결법
    return 0;
}