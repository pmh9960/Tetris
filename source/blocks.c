#define WIDTH 11  // Inside width
#define HEIGHT 20 // Inside height

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void putBlock(int x, int y, int index, int dir, int isBlockArr[][HEIGHT + 2])
{
    switch (index)
    {
    case 0:
        switch (dir % 2) // Rotation Counter-Clockwise
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
            gotoxy(x, y + 2);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2][y + 2] = 1;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("�����");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 2][y] = 1;
            break;
        }
        break;
    case 1:
        switch (dir)
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 1;
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("���");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x - 2, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 - 1][y + 1] = 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("���");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 1;
            break;
        }
        break;
    case 2:
        switch (dir)
        {
        case 0:
            gotoxy(x - 2, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x - 2, y + 1);
            printf("���");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x + 2, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 1;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("���");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        }
        break;
    case 3:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("���");
            gotoxy(x + 2, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("���");
            gotoxy(x - 2, y);
            printf("���");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = 1;
            break;
        }
        break;
    case 4:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x - 2, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = 1;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("���");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y] = 1;
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("���");
        gotoxy(x, y + 1);
        printf("���");
        isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 1;
        break;
    case 6:
        switch (dir)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 1;
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 1;
            break;
        }
        break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void removeBlock(int x, int y, int index, int dir, int isBlockArr[][HEIGHT + 2])
{
    switch (index)
    {
    case 0:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
            gotoxy(x, y + 2);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2][y + 2] = 0;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("�����");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 2][y] = 0;
            break;
        }
        break;
    case 1:
        switch (dir)
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 0;
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("���");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x - 2, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 - 1][y + 1] = 0;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("���");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 0;
            break;
        }
        break;
    case 2:
        switch (dir)
        {
        case 0:
            gotoxy(x - 2, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            isBlockArr[x / 2 - 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x - 2, y + 1);
            printf("���");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x + 2, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 0;
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("���");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        }
        break;
    case 3:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("���");
            gotoxy(x + 2, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2 + 1][y + 1] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("���");
            gotoxy(x - 2, y);
            printf("���");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 + 1][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = 0;
            break;
        }
        break;
    case 4:
        switch (dir % 2)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x - 2, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 - 1][y + 1] = 0;
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("���");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y] = 0;
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("���");
        gotoxy(x, y + 1);
        printf("���");
        isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = isBlockArr[x / 2 + 1][y + 1] = 0;
        break;
    case 6:
        switch (dir)
        {
        case 0:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = 0;
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2][y - 1] = isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x, y + 1);
            printf("��");
            isBlockArr[x / 2 - 1][y] = isBlockArr[x / 2][y] = isBlockArr[x / 2 + 1][y] = isBlockArr[x / 2][y + 1] = 0;
            break;
        }
        break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void seeAllBlocks(int isBlockArr[][HEIGHT + 2])
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

bool isBlockSet(int x, int y, int index, int dir, int isBlockArr[][HEIGHT + 2])
{
    switch (index)
    {
    case 0:
        switch (dir % 2)
        {
        case 0:
            if (isBlockArr[x / 2][y + 3] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] + isBlockArr[x / 2 + 2][y + 1] > 0)
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
            if (isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 2:
            if (isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] + isBlockArr[x / 2 - 1][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 3:
            if (isBlockArr[x / 2][y + 2] + isBlockArr[x / 2 + 1][y + 2] > 0)
                return true;
            else
                return false;
            break;
        }
        break;
    case 2:
        switch (dir)
        {
        case 0:
            if (isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y + 2] + isBlockArr[x / 2][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 2:
            if (isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 3:
            if (isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2][y + 2] > 0)
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
            if (isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 1] > 0)
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
            if (isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 - 1][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 2] + isBlockArr[x / 2 + 1][y + 1] > 0)
                return true;
            else
                return false;
            break;
        }
        break;
    case 5:
        if (isBlockArr[x / 2][y + 2] + isBlockArr[x / 2 + 1][y + 2] > 0)
            return true;
        else
            return false;
        break;
    case 6:
        switch (dir)
        {
        case 0:
            if (isBlockArr[x / 2 + 1][y + 1] + isBlockArr[x / 2][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 1:
            if (isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 1] + isBlockArr[x / 2 + 1][y + 1] > 0)
                return true;
            else
                return false;
            break;
        case 2:
            if (isBlockArr[x / 2 - 1][y + 1] + isBlockArr[x / 2][y + 2] > 0)
                return true;
            else
                return false;
            break;
        case 3:
            if (isBlockArr[x / 2 - 1][y] + isBlockArr[x / 2 + 1][y] + isBlockArr[x / 2][y + 1] > 0)
                return true;
            else
                return false;
            break;
        }
        break;
    }
    return false;
}