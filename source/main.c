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

    system("pause > nul"); // ����â �ٷ� ���� �ذ��
    return 0;
}