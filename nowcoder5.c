#define _CRT_SECURE_NO_WARNINGS
//C语言实现面向对象，细节暂不做修改，简单易懂
#include <stdio.h>
#include <stdlib.h>
#define PI (3.14)

typedef struct shape {      //shape基类
    int x;
    int y;
} shape_t;

typedef struct Rectangle {  //矩形类
    const struct Rectangle* this;
    shape_t point;
    int (*GetArea)(const struct Rectangle*);
} rect_t;

typedef struct Circle {     //圆形类
    const struct Circle* this;
    shape_t point;
    double (*GetArea)(const struct Circle*);
} circ_t;

typedef struct Square {     //正方形类
    const struct Square* this;
    rect_t rect;
    int (*GetArea)(const struct Square*);
} squa_t;

int getRectArea(const struct Rectangle* this) {
    return this->point.x * this->point.y;
}

double getCircArea(const struct Circle* this) {
    return PI * this->point.x * this->point.x;
}

int getSquaArea(const struct Square* this) {
    return this->rect.point.x * this->rect.point.x;
}

int main() {
    rect_t rect = {
        .this = &rect,
        .GetArea = getRectArea
    };
    scanf("%d %d", &rect.point.x, &rect.point.y);
    circ_t circ = {
        .this = &circ,
        .point.y = 0,
        .GetArea = getCircArea
    };
    scanf("%d", &circ.point.x);
    squa_t squa = {
        .this = &squa,
        .rect.point.y = 0,
        .GetArea = getSquaArea
    };
    scanf("%d", &squa.rect.point.x);
    int rectArea = rect.GetArea(&rect);
    double circArea = circ.GetArea(&circ);
    int squaArea = squa.GetArea(&squa);
    printf("%d\n", rectArea);
    printf("%g\n", circArea);
    printf("%d\n", squaArea);
    return 0;
}