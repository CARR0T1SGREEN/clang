#include<stdio.h>
int main() //총점수,평균,등급 출력하기
{
    int Korean=0;
    int math=0, english=0, total=0;
    float average;
    int science=95, history=97;
    char grade='A';
    total=Korean+math+english+science+history;
    average=total/5.0;
    printf("total:%d average:%.1f grade:%c\n", total, average, grade);
    return 0;
}
