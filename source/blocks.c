void putBlocks(int x, int y, int index, int dir)
{
    switch (index)
    {
    case 0:
        switch (dir % 2)
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
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбсбсбс");
            break;
        }
        break;
    case 1:
        switch (dir) // Rotation Counter-Clockwise
        {
        case 0:
            gotoxy(x + 2, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            break;
        case 1:
            gotoxy(x - 2, y - 1);
            printf("бсбс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x - 2, y + 1);
            printf("бс");
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бсбс");
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
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x - 2, y + 1);
            printf("бсбс");
            break;
        case 2:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x + 2, y + 1);
            printf("бс");
            break;
        case 3:
            gotoxy(x, y - 1);
            printf("бсбс");
            gotoxy(x, y);
            printf("бс");
            gotoxy(x, y + 1);
            printf("бс");
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
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y - 1);
            printf("бсбс");
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
            break;
        case 1:
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бсбс");
            break;
        }
        break;
    case 5:
        gotoxy(x, y);
        printf("бсбс");
        gotoxy(x, y + 1);
        printf("бсбс");
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
            break;
        case 1:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбсбс");
            break;
        case 2:
            gotoxy(x, y - 1);
            printf("бс");
            gotoxy(x - 2, y);
            printf("бсбс");
            gotoxy(x, y + 1);
            printf("бс");
            break;
        case 3:
            gotoxy(x - 2, y);
            printf("бсбсбс");
            gotoxy(x, y + 1);
            printf("бс");
            break;
        }
        break;
    }
}
