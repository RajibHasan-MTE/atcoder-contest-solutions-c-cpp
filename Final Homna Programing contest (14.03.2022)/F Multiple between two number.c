#include<stdio.h>


int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int mul = c*2;


    if(1<=a && a<=b && a<=b && b<=1000 && 1<=c && c<=1000){
            if(a>mul && b>mul){
                printf("%d\n", mul);
            }
            else{
                 printf("-1\n");
            }
    }
    else{
        printf("-1\n");
    }
    return 0;

}
