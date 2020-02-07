// encoding to euc-kr
#define marginLeft 5
#define marginTop 3
#define WIDTH 10  // Inside width
#define HEIGHT 20 // Inside height

void setBoundary()
{
    gotoxy(marginLeft, marginTop);
    for (int i = 0; i < WIDTH + 1; i++)
    {
        printf("■");
    }
    for (int i = 0; i < HEIGHT + 1; i++)
    {
        gotoxy(marginLeft, marginTop + i);
        printf("■");
        gotoxy(marginLeft + (WIDTH + 1) * 2, marginTop + i);
        printf("■");
    }
    gotoxy(marginLeft, marginTop + HEIGHT + 1);
    for (int i = 0; i < WIDTH + 2; i++)
    {
        printf("■");
    }

    // 각 꼭지점 위치
    // gotoxy(marginLeft, marginTop);
    // printf("□");
    // gotoxy(marginLeft, marginTop + HEIGHT + 1);
    // printf("□");
    // gotoxy(marginLeft + (WIDTH + 1) * 2, marginTop);
    // printf("□");
    // gotoxy(marginLeft + (WIDTH + 1) * 2, marginTop + HEIGHT + 1);
    // printf("□");
}