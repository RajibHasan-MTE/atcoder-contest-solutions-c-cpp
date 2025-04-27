#include<stdio.h>

int main(){
    int n, a=0, sum=0;
    printf("Enter the last number");
    scanf("%d", &n);

    printf("1+2+3+4+....+%d\n", n);

    while(a<=n){
        sum += a;
        a = a+1;
    }

    printf("sum = %d", sum);
    return 0;

}
