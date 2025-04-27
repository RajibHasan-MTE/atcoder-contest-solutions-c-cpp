#include<stdio.h>


int main(){
    int counterr;
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    for(int i=0; i<=n; i++){
        for(int j = 0; j<i; j++){
            if(arr[i] == arr[j]){
                break;
            }
            if(i == j){
                counterr++;
            }
        }
    }
    printf("%d\n", counterr);
    return 0;

}
