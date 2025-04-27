#include<stdio.h>


int main(){
    int x, m, d;

    scanf("%d %d %d", &x, &m, &d);

    if(x*d <= x+d) printf("%d\n", x*d);
    else printf("%d", x+d);

    return 0;


}
