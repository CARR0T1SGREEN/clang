#include<stdio.h>
int main(){
    int num,encrypt,password,key=3141;
    printf("num:"), scanf("%d", &num);
    encrypt=num^key;
    printf("encrypt:%d\n", encrypt);
    while(1){
    printf("password:"), scanf("%d",&password);
    printf("original data:%d\n", encrypt^password);
    }
        return 0;
}