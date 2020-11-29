#include <stdio.h>
#include <stdlib.h>

int zd1()
{
    int a1, a2, b1, b2, c1, c2;
    printf("god mesyac i den pervogo cheloveka\n");
    scanf("%d%d%d", &a1, &b1, &c1);
    printf("god mesyac i den vtorogo cheloveka\n");
    scanf("%d%d%d", &a2, &b2, &c2);
    if ((a1 - a2)*10000 + (b1-b2)*1000 + (c1-c2)*10 > 0)
        printf("perviy starshe");
    else
        printf("vtoroy starshe");

    return 0;
}


int zd2()
{
    float x, y;
    printf("vvedite x, y");
    scanf("%f%f", &x, &y);
    if (((x <= 2) || (y <= 2)) && (abs(y) > 2 - abs(x)))
        printf("lezhit v 1 figure\n");
    else
        printf("NE lezhit v 1 figure\n");
    if (((x <= 2) || (y <= 2)) && (y*y > 4 - x*x))
        printf("lezhit vo 2 figure\n");
    else
        printf("NE lezhit vo 2 figure\n");

    return 0;
}


int zd3()
{
    float y;
    scanf("%f", &y);

    int x = (int)y;

    if (x < 0)
    {
        printf("0");
        return 0;
    }

    if (x % 2 == 0)
        printf("1");
    else
        printf("-1");

    return 0;
}


int zd4()
{
    float a1, a2, b1, b2, c1, c2, x;
    printf("vvedite storoni 1 treugolnika\n");
    scanf("%f%f%f", &a1, &b1, &c1);
    printf("vvedite storoni 2 treugolnika\n");
    scanf("%f%f%f", &a2, &b2, &c2);
    if (a1 < b1) { x = a1; a1 = b1; b1 = x; }
    if (a1 < c1) { x = a1; a1 = c1; c1 = x; }
    if (b1 < c1) { x = b1; b1 = c1; c1 = x; }

    if (a2 < b2) { x = a2; a2 = b2; b2 = x; }
    if (a2 < c2) { x = a2; a2 = c2; c2 = x; }
    if (b2 < c2) { x = b2; b2 = c2; c2 = x; }

    if (((a1/a2) == (b1/b2)) && ((b1/b2) == (c1/c2)))
        printf("podobni");
    else
        printf("NE podobni");

    return 0;
}


int zd5()
{
    int x;
    scanf("%d", &x);
    if ((x % 4 == 0) && ((x % 100 != 0) || (x % 400 == 0)))
        printf("visokosniy");
    else
        printf("NE visokosniy");
}

int main()
{
    //zd1();
    //zd2();
    //zd3();
    //zd4();
    //zd5();

    return 0;
}
