// encoding to euc-kr
#define marginLeft 4
#define marginRight 4
#define marginTop 3
#define WIDTH 12  // Inside width
#define HEIGHT 20 // Inside height

void setBoundary()
{

    for (int j = 0; j < HEIGHT + 1; j++)
    {
        gotoxy(marginLeft, marginTop + j);
        for (int i = 0; i < WIDTH; i++)
        {
            printf("□");
        }
    }
    int nextBlockLeft = marginLeft + (WIDTH)*2 + marginRight * 2,
        nextBlockWidth = 8, nextBlockHeight = 6;

    for (int j = 0; j < nextBlockHeight; j++)
    {
        gotoxy(nextBlockLeft, marginTop + j);
        for (int i = 0; i < nextBlockWidth; i++)
        {
            printf("□");
        }
    }
}

// void setBoundary()
// {
//     gotoxy(marginLeft, marginTop);
//     for (int i = 0; i < WIDTH + 1; i++)
//     {
//         printf("□");
//     }
//     for (int i = 0; i < HEIGHT + 1; i++)
//     {
//         gotoxy(marginLeft, marginTop + i);
//         printf("□");
//         gotoxy(marginLeft + (WIDTH + 1) * 2, marginTop + i);
//         printf("□");
//     }
//     gotoxy(marginLeft, marginTop + HEIGHT + 1);
//     for (int i = 0; i < WIDTH + 2; i++)
//     {
//         printf("□");
//     }

//     // 각 꼭지점 위치
//     gotoxy(marginLeft, marginTop);
//     printf("□");
//     gotoxy(marginLeft, marginTop + HEIGHT + 1);
//     printf("□");
//     gotoxy(marginLeft + (WIDTH + 1) * 2, marginTop);
//     printf("□");
//     gotoxy(marginLeft + (WIDTH + 1) * 2, marginTop + HEIGHT + 1);
//     printf("□");

//     int nextBlockLeft = marginLeft + (WIDTH + 1) * 2 + marginRight * 2,
//         nextBlockWidth = 8, nextBlockHeight = 6;
//     gotoxy(nextBlockLeft, marginTop);
//     for (int i = 0; i < nextBlockWidth; i++)
//     {
//         printf("□");
//     }
//     for (int i = 0; i < nextBlockHeight; i++)
//     {
//         gotoxy(nextBlockLeft, marginTop + i);
//         printf("□");
//         gotoxy(nextBlockLeft + (nextBlockWidth - 1) * 2, marginTop + i);
//         printf("□");
//     }
//     gotoxy(nextBlockLeft, marginTop + nextBlockHeight - 1);
//     for (int i = 0; i < nextBlockWidth; i++)
//     {
//         printf("□");
//     }
// }