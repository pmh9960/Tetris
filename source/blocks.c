void putBlocks(int x, int y, int index, int dir)
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
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("�����");
            break;
        }
        break;
    case 1:
        switch (dir) // Rotation Counter-Clockwise
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("���");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x - 2, y + 1);
            printf("��");
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("���");
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
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x, y);
            printf("��");
            gotoxy(x - 2, y + 1);
            printf("���");
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x + 2, y + 1);
            printf("��");
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("���");
            gotoxy(x, y);
            printf("��");
            gotoxy(x, y + 1);
            printf("��");
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
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x, y - 1);
            printf("���");
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
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("���");
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("���");
        gotoxy(x, y + 1);
        printf("���");
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
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("����");
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("��");
            gotoxy(x - 2, y);
            printf("���");
            gotoxy(x, y + 1);
            printf("��");
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("����");
            gotoxy(x, y + 1);
            printf("��");
            break;
        }
        break;
    }
}
