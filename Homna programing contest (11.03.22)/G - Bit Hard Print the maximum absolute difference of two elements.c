#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int aray[n];
    for(int i=0; i<n; i++) scanf("%d", &aray[i]);

    int mx = 1;
    for(int i=0; i<n; i++){
        if(aray[i]>mx){
            mx = aray[i];
        }
    }

    int mini = 1000000000;
    for(int i=0; i<n; i++){
        if(aray[i]<mini){
            mini = aray[i];
        }
    }
    printf("%d\n", mx - mini);
    return 0;

}
