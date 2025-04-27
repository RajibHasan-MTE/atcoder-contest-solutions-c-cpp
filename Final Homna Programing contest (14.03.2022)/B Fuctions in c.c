#include<stdio.h>


int mxFunction(int a, int b, int c, int d){
    int mx;
    if(a>=b && a>=c && a>=d){
        mx = a;
    }
    else if(b>=c && b>=d && b>=a){
        mx = b;
    }
    if(c>=d && c>=a && c>=b){
        mx = c;
    }
    if(d>=a && d>=b && d>=d){
        mx = d;
    }
    return mx;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int gretest = mxFunction(a, b, c, d);
    printf("%d\n", gretest);
    return 0;
}


