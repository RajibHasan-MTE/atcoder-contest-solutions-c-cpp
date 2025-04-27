#include<stdio.h>

int main(){
    int n, sum=0;

    printf("Please Enter the n value: ");
    scanf("%d", &n);
    printf("1+2+3+...%d\n", n);
    for(int i=1; i<=n; i++){
        sum += i;
    }
    printf("sum = %d\n", sum);
    return 0;
}
