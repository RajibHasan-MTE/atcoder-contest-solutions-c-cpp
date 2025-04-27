#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int var1 = a+b;
    int var2 = a-b;
    int var3 = a*b;
    int largeNumber = var1;
    if(var2 > largeNumber){
        largeNumber = var2;
    }
    if(var3 > largeNumber){
        largeNumber = var3;
    }
    printf("%d", largeNumber);
    return 0;

}
