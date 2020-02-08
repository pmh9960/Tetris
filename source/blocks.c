#define arr_HEIGHT 25

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void putBlock(int x, int y, int index, int dir, int isBlockArr[][arr_HEIGHT])
{
    switch (index)
    {
    case 0:
        switch (dir % 2) // Rotation Counter-Clockwise
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
            gotoxy(x, y + 2);
            printf("бс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2][y + 2] = 1;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбсбсбс");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 2][y] = 1;
            break;
        }
        break;
    case 1:
        switch (dir % 4)
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 1;
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("бсбс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x - 2, y + 1);
            printf("бс");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 - 1][y + 1] = 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бсбс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 1;
            break;
        }
        break;
    case 2:
        switch (dir % 4)
        {
        case 0:
            gotoxy(x - 2, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x - 2, y + 1);
            printf("бсбс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x + 2, y + 1);
            printf("бс");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бсбс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        }
        break;
    case 3:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бсбс");
            gotoxy(x + 2, y + 1);
            printf("бс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бсбс");
            gotoxy(x - 2, y);
            printf("бсбс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = 1;
            break;
        }
        break;
    case 4:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x - 2, y + 1);
            printf("бс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = 1;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бсбс");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 1;
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("бсбс");
        gotoxy(x, y + 1);
        printf("бсбс");
        isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 1;
        break;
    case 6:
        switch (dir % 4)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 1;
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        }
        break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void removeBlock(int x, int y, int index, int dir, int isBlockArr[][arr_HEIGHT])
{
    switch (index)
    {
    case 0:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x, y);
            printf("бр");
            gotoxy(x, y + 1);
            printf("бр");
            gotoxy(x, y + 2);
            printf("бр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2][y + 2] = 0;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("брбрбрбр");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 2][y] = 0;
            break;
        }
        break;
    case 1:
        switch (dir % 4)
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("бр");
            gotoxy(x - 2, y);
            printf("брбрбр");
            isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 0;
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("брбр");
            gotoxy(x, y);
            printf("бр");
            gotoxy(x, y + 1);
            printf("бр");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("брбрбр");
            gotoxy(x - 2, y + 1);
            printf("бр");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 - 1][y + 1] = 0;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x, y);
            printf("бр");
            gotoxy(x, y + 1);
            printf("брбр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 0;
            break;
        }
        break;
    case 2:
        switch (dir % 4)
        {
        case 0:
            gotoxy(x - 2, y - 1);
            printf("бр");
            gotoxy(x - 2, y);
            printf("брбрбр");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x, y);
            printf("бр");
            gotoxy(x - 2, y + 1);
            printf("брбр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("брбрбр");
            gotoxy(x + 2, y + 1);
            printf("бр");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 0;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("брбр");
            gotoxy(x, y);
            printf("бр");
            gotoxy(x, y + 1);
            printf("бр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        }
        break;
    case 3:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x, y);
            printf("брбр");
            gotoxy(x + 2, y + 1);
            printf("бр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("брбр");
            gotoxy(x - 2, y);
            printf("брбр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = 0;
            break;
        }
        break;
    case 4:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x - 2, y);
            printf("брбр");
            gotoxy(x - 2, y + 1);
            printf("бр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = 0;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("брбр");
            gotoxy(x, y + 1);
            printf("брбр");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 0;
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("брбр");
        gotoxy(x, y + 1);
        printf("брбр");
        isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 0;
        break;
    case 6:
        switch (dir % 4)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x, y);
            printf("брбр");
            gotoxy(x, y + 1);
            printf("бр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x - 2, y);
            printf("брбрбр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 0;
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("бр");
            gotoxy(x - 2, y);
            printf("брбр");
            gotoxy(x, y + 1);
            printf("бр");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("брбрбр");
            gotoxy(x, y + 1);
            printf("бр");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        }
        break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void seeAllBlocks(int isBlockArr[][arr_HEIGHT])
{
    for (int i = 0; i < 7; i++)
    {
        for (int dir = 0; dir < 4; dir++)
        {
            putBlock(4 + dir * 8, 2 + i * 4, i, dir, isBlockArr);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool isBlockSet(int x, int y, int index, int dir, int isBlockArr[][arr_HEIGHT])
{
    switch (index)
    {
    case 0:
        switch (dir % 2) // Rotation Counter-Clockwise
        {
        case 0:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2][y] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2][y + 2] > 4)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2 + 2][y] > 4)
                return true;
            else
                return false;
            break;
        }
        break;
    case 1:
        switch (dir % 4)
        {
        case 0:
            if (isBlockArr[x / 2 + 1][y - 1] + isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] > 4)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y - 1] + isBlockArr[x / 2][y - 1] + isBlockArr[x / 2][y] + isBlockArr[x / 2][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 2:
            if (isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2 - 1][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 3:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2][y] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] > 4)
                return true;
            else
                return false;
            break;
        }
        break;
    case 2:
        switch (dir % 4)
        {
        case 0:
            if (isBlockArr[x / 2 - 1][y - 1] + isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] > 4)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2][y] + isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 2:
            if (isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2 + 1][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 3:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2 + 1][y - 1] + isBlockArr[x / 2][y] + isBlockArr[x / 2][y + 1] > 4)
                return true;
            else
                return false;
            break;
        }
        break;
    case 3:
        switch (dir % 2)
        {
        case 0:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2 + 1][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2 + 1][y - 1] + isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] > 4)
                return true;
            else
                return false;
            break;
        }
        break;
    case 4:
        switch (dir % 2)
        {
        case 0:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 - 1][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] > 4)
                return true;
            else
                return false;
            break;
        }
        break;
    case 5:
        if (isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] > 4)
            return true;
        else
            return false;
        break;
    case 6:
        switch (dir % 4)
        {
        case 0:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] > 4)
                return true;
            else
                return false;
            break;
        case 2:
            if (isBlockArr[x / 2][y - 1] + isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2][y + 1] > 4)
                return true;
            else
                return false;
            break;
        case 3:
            if (isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2][y + 1] > 4)
                return true;
            else
                return false;
            break;
        }
        break;
    }
}

//////////////////////////////////////////////////////////

void makeBlockHard(int isBlockArr[][arr_HEIGHT])
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (isBlockArr[j][i] > 0)
                isBlockArr[j][i] = 99;
        }
    }
}