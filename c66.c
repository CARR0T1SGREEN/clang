#include<stdio.h>
// #define PI 3.14159265358979 
int main(){
    int radius=5;
    const int PI=3.14159265;
    double circle=2*radius*PI;
    printf("r:%d,circumference=%f\n", radius,circle);
    
    return 0;
}