#define arr_HEIGHT 25
#define arr_WIDTH 12
#define marginLeft 4
#define marginRight 4
#define marginTop 3

bool checkLine(int i, int arr[][arr_HEIGHT])
{
    int chk = 1;
    for (int j = 2; j < 2 + arr_WIDTH; j++)
    {
        if (arr[j][i] == 0)
            chk = 0;
    }
    if (chk)
        return true;
    return false;
}

void arrayToBlocks(int arr[][arr_HEIGHT])
{
    for (int i = 2; i < arr_WIDTH + 2; i++)
    {
        for (int j = 3; j <= arr_HEIGHT - 2; j++)
        {
            if (arr[i][j])
            {
                gotoxy(marginLeft + i * 2 - 4, j);
                printf("бс");
            }
            else
            {
                gotoxy(marginLeft + i * 2 - 4, j);
                printf("бр");
            }
        }
    }
}

void eraseLine(int arr[][arr_HEIGHT], int *score)
{
    for (int i = arr_HEIGHT - 2; i > 0; i--)
    {
        if (checkLine(i, arr))
        {
            // Erase i'th row
            for (int k = i; k >= 0; k--)
            {
                for (int j = 2; j < 2 + arr_WIDTH; j++)
                {
                    arr[j][k] = arr[j][k - 1];
                }
            }
            for (int j = 2; j <= 13; j++)
            {
                arr[j][0] = 0;
            }
            arrayToBlocks(arr);
            *score += 1000;
            information(score);
            i = arr_HEIGHT - 1;
        }
    }
}
