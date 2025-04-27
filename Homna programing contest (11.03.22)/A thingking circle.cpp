#include<stdio.h>


int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>=1 && a<=9 && b>=1 && b<=9){
        if(a+1==b || a==1 && b==10 || a==10 && b==1){
                printf("Yes\n");
       }
    }
    else printf("No\n");

return 0;
}
