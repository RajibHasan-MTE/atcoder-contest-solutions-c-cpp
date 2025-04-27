#include<stdio.h>


int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int x = b/c;
    x = c*x;

    if(x<=b && x>=a) printf("%d\n", x);
    else printf("-1\n");
return 0;
}
