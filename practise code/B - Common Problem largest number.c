#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int mx=1;
    for(int i=0; i<n; i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    printf("%d", mx);
    return 0;


}
