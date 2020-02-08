

void setSpeed(int *speed, int score)
{
    int delLine = score / 1000;
    if (delLine < 25)
        *speed = 30 - delLine * 3 / 5;
    else if (delLine < 50)
        *speed = 20 - delLine / 5;
    else if (delLine < 100)
        *speed = 18 - delLine * 3 / 50;
    else if (delLine < 200)
        *speed = 5;
    else if (delLine < 500)
        *speed = 4;
    else if (delLine < 1000)
        *speed = 3;
    else if (delLine < 2000)
        *speed = 2;
    else
        *speed = 1;
}