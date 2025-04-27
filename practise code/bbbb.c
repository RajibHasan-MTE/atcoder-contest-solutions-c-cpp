#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int counterr = 1;
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j]) break;

        if (i == j)
            counterr++;
    }
    printf("%d\n", counterr);
    return 0;

}
