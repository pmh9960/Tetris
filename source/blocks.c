#define WIDTH 11  // Inside width
#define HEIGHT 20 // Inside height

int isBlockArr[WIDTH * 2][HEIGHT * 2] = {
    0,
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void putBlock(int x, int y, int index, int dir)
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
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = isBlockArr[x][y + 2] = 1;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбсбсбс");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x + 2][y] = 1;
            break;
        }
        break;
    case 1:
        switch (dir)
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x + 1][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = 1;
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("бсбс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x - 1][y - 1] = isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = 1;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x - 2, y + 1);
            printf("бс");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x - 1][y + 1] = 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бсбс");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = isBlockArr[x + 1][y] = 1;
            break;
        }
        break;
    case 2:
        switch (dir)
        {
        case 0:
            gotoxy(x - 2, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x - 1][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x - 2, y + 1);
            printf("бсбс");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x - 1][y + 1] = isBlockArr[x][y + 1] = 1;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x + 2, y + 1);
            printf("бс");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x + 1][y + 1] = 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бсбс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x][y - 1] = isBlockArr[x + 1][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = 1;
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
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x + 1][y] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бсбс");
            gotoxy(x - 2, y);
            printf("бсбс");
            isBlockArr[x][y - 1] = isBlockArr[x + 1][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = 1;
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
            isBlockArr[x][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x - 1][y + 1] = 1;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бсбс");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x][y + 1] = isBlockArr[x + 1][y] = 1;
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("бсбс");
        gotoxy(x, y + 1);
        printf("бсбс");
        isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x][y + 1] = isBlockArr[x + 1][y + 1] = 1;
        break;
    case 6:
        switch (dir)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x][y + 1] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = 1;
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x][y + 1] = 1;
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x][y + 1] = 1;
            break;
        }
        break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void removeBlock(int x, int y, int index, int dir)
{
    switch (index)
    {
    case 0:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x, y);
            printf("  ");
            gotoxy(x, y + 1);
            printf("  ");
            gotoxy(x, y + 2);
            printf("  ");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = isBlockArr[x][y + 2] = 0;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("        ");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x + 2][y] = 0;
            break;
        }
        break;
    case 1:
        switch (dir)
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("  ");
            gotoxy(x - 2, y);
            printf("      ");
            isBlockArr[x + 1][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = 0;
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("    ");
            gotoxy(x, y);
            printf("  ");
            gotoxy(x, y + 1);
            printf("  ");
            isBlockArr[x - 1][y - 1] = isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = 0;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("      ");
            gotoxy(x - 2, y + 1);
            printf("  ");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x - 1][y + 1] = 0;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x, y);
            printf("  ");
            gotoxy(x, y + 1);
            printf("    ");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = isBlockArr[x + 1][y] = 0;
            break;
        }
        break;
    case 2:
        switch (dir)
        {
        case 0:
            gotoxy(x - 2, y - 1);
            printf("  ");
            gotoxy(x - 2, y);
            printf("      ");
            isBlockArr[x - 1][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x, y);
            printf("  ");
            gotoxy(x - 2, y + 1);
            printf("    ");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x - 1][y + 1] = isBlockArr[x][y + 1] = 0;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("      ");
            gotoxy(x + 2, y + 1);
            printf("  ");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x + 1][y + 1] = 0;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("    ");
            gotoxy(x, y);
            printf("  ");
            gotoxy(x, y + 1);
            printf("  ");
            isBlockArr[x][y - 1] = isBlockArr[x + 1][y - 1] = isBlockArr[x][y] = isBlockArr[x][y + 1] = 0;
            break;
        }
        break;
    case 3:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x, y);
            printf("    ");
            gotoxy(x + 2, y + 1);
            printf("  ");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x + 1][y] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("    ");
            gotoxy(x - 2, y);
            printf("    ");
            isBlockArr[x][y - 1] = isBlockArr[x + 1][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = 0;
            break;
        }
        break;
    case 4:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x - 2, y);
            printf("    ");
            gotoxy(x - 2, y + 1);
            printf("  ");
            isBlockArr[x][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x - 1][y + 1] = 0;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("    ");
            gotoxy(x, y + 1);
            printf("    ");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x][y + 1] = isBlockArr[x + 1][y] = 0;
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("    ");
        gotoxy(x, y + 1);
        printf("    ");
        isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x][y + 1] = isBlockArr[x + 1][y + 1] = 0;
        break;
    case 6:
        switch (dir)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x, y);
            printf("    ");
            gotoxy(x, y + 1);
            printf("  ");
            isBlockArr[x][y - 1] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x][y + 1] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x - 2, y);
            printf("      ");
            isBlockArr[x][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = 0;
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("  ");
            gotoxy(x - 2, y);
            printf("    ");
            gotoxy(x, y + 1);
            printf("  ");
            isBlockArr[x][y - 1] = isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x][y + 1] = 0;
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("      ");
            gotoxy(x, y + 1);
            printf("  ");
            isBlockArr[x - 1][y] = isBlockArr[x][y] = isBlockArr[x + 1][y] = isBlockArr[x][y + 1] = 0;
            break;
        }
        break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void seeAllBlocks()
{
    for (int i = 0; i < 7; i++)
    {
        for (int dir = 0; dir < 4; dir++)
        {
            putBlock(4 + dir * 8, 2 + i * 4, i, dir);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool isBlockSet(int x, int y, int index, int dir)
{
    switch (index)
    {
    case 0:
        switch (dir % 2)
        {
        case 0:
            if (isBlockArr[x][y + 3] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x - 1][y + 1] + isBlockArr[x][y + 1] + isBlockArr[x + 1][y + 1] + isBlockArr[x + 2][y + 1] > 0)
                return true;
            else
                return false;
            break;
        }
        break;
    case 1:
        switch (dir)
        {
        case 0:
            if (isBlockArr[x - 1][y + 1] + isBlockArr[x][y + 1] + isBlockArr[x + 1][y + 1] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x - 1][y] + isBlockArr[x][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x - 2, y + 1);
            printf("бс");
            isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x + 1][y] + isBlockArr[x - 1][y + 1] + 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бсбс");
            isBlockArr[x][y - 1] + isBlockArr[x][y] + isBlockArr[x][y + 1] + isBlockArr[x + 1][y] + 1;
            break;
        }
        break;
    case 2:
        switch (dir)
        {
        case 0:
            gotoxy(x - 2, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x - 1][y - 1] + isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x + 1][y] + 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x - 2, y + 1);
            printf("бсбс");
            isBlockArr[x][y - 1] + isBlockArr[x][y] + isBlockArr[x - 1][y + 1] + isBlockArr[x][y + 1] + 1;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x + 2, y + 1);
            printf("бс");
            isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x + 1][y] + isBlockArr[x + 1][y + 1] + 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бсбс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x][y - 1] + isBlockArr[x + 1][y - 1] + isBlockArr[x][y] + isBlockArr[x][y + 1] + 1;
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
            isBlockArr[x][y - 1] + isBlockArr[x][y] + isBlockArr[x + 1][y] + isBlockArr[x + 1][y] + 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бсбс");
            gotoxy(x - 2, y);
            printf("бсбс");
            isBlockArr[x][y - 1] + isBlockArr[x + 1][y - 1] + isBlockArr[x - 1][y] + isBlockArr[x][y] + 1;
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
            isBlockArr[x][y - 1] + isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x - 1][y + 1] + 1;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бсбс");
            isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x][y + 1] + isBlockArr[x + 1][y] + 1;
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("бсбс");
        gotoxy(x, y + 1);
        printf("бсбс");
        isBlockArr[x][y] + isBlockArr[x + 1][y] + isBlockArr[x][y + 1] + isBlockArr[x + 1][y + 1] + 1;
        break;
    case 6:
        switch (dir)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x][y - 1] + isBlockArr[x][y] + isBlockArr[x + 1][y] + isBlockArr[x][y + 1] + 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            isBlockArr[x][y - 1] + isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x + 1][y] + 1;
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x][y - 1] + isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x][y + 1] + 1;
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x, y + 1);
            printf("бс");
            isBlockArr[x - 1][y] + isBlockArr[x][y] + isBlockArr[x + 1][y] + isBlockArr[x][y + 1] + 1;
            break;
        }
        break;
    }
}