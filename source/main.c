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

    system("pause > nul"); // ����â �ٷ� ���� �ذ��
    return 0;
}