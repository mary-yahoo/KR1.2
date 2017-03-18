#include"head.h"
#include<iostream>
float ch(float x, float y){
    float k;
    k=x-y;
    static int n;
    n++;
    printf("%d\n", n);
    return k;
}
