// encoding to euc-kr
#define marginLeft 4
#define marginRight 4
#define marginTop 3
#define WIDTH 12  // Inside width
#define HEIGHT 20 // Inside height

void information();

void setBoundary()
{

    information();

    for (int j = 0; j < HEIGHT + 1; j++)
    {
        gotoxy(marginLeft, marginTop + j);
        for (int i = 0; i < WIDTH; i++)
        {
            printf("бр");
        }
    }
    int nextBlockLeft = marginLeft + (WIDTH)*2 + marginRight * 2, // 36
        nextBlockWidth = 6, nextBlockHeight = 6;

    for (int j = 0; j < nextBlockHeight; j++)
    {
        gotoxy(nextBlockLeft, marginTop + j); // 36, 3
        for (int i = 0; i < nextBlockWidth; i++)
        {
            printf("бр");
        }
    }
}

void information(int *num)
{
    // title
    gotoxy(marginLeft + 6, marginTop - 2);
    printf("T E T R I S");
    // next block
    gotoxy(marginLeft + (WIDTH)*2 + marginRight * 2 + 2, marginTop + 6);
    printf("N E X T");
    gotoxy(marginLeft + (WIDTH)*2 + marginRight * 2 - 2, marginTop + 8);
    printf("SCORE : %7d", *num);
}
