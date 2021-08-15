#include <stdio.h>
#include <stdlib.h>

typedef struct datetype
{
    int mm;    //month
    int dd;    //date
    int yy;    //year
}datetype;

int date2days(struct datetype date)
{
    int godine, prijestupne_godine, broj_dana;
    godine = date.yy - 1984;
    prijestupne_godine = (int)(godine / 4);
    broj_dana = godine * 365 + prijestupne_godine + (int)((date.mm - 1) * 30.5) + date.dd;
    return broj_dana;
}

int main()
{
    struct datetype date;
    int broj_dana;
    date.mm = 8;
    date.dd = 15;
    date.yy = 2021;
    broj_dana = date2days(date);
    printf("Broj dana proteklih  od 1.1.1984. je %d.", broj_dana);
    return 0;
}

