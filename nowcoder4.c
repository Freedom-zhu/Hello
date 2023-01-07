#define _CRT_SECURE_NO_WARNINGS
//�����������
//����������һ�У������������ÿո�ָ����ֱ��ʾ�ꡢ�¡��ա�
//���������һ�У��á���/��/�ꡱ��ʽ������ڡ�
#include<stdio.h>

typedef struct day_t Pday_t;
typedef void (*TInitDay)(Pday_t* day);
typedef void (*TSetDay)(Pday_t* day, int y, int m, int d);
typedef void (*TShowDay)(Pday_t* day);

struct day_t //Pday-t
{
    int Day;
    int Month;
    int Year;
    TInitDay init;
    TSetDay  set;
    TShowDay show;
};

void day_init(Pday_t* day)//TInitDay   ��ʼ��
{
    day->Year = 0;
    day->Day = 0;
    day->Month = 0;
}

void day_set(Pday_t* day, int y, int m, int d)//TSetDay   ����
{
    day->Year = y;
    day->Month = m;
    day->Day = d;
}

void day_show(Pday_t* day) //TShowDay   ��ӡ
{
    printf("%d/%d/%d", day->Day, day->Month, day->Year);
}

Pday_t M_day = 
{
    .init = day_init,
    .set = day_set,
    .show = day_show,
};

int main() {
    int y, m, d;
    scanf("%d", &y);
    scanf("%d", &m);
    scanf("%d", &d);

    M_day.init(&M_day);
    M_day.set(&M_day, y, m, d);
    M_day.show(&M_day);

    return 0;
}

