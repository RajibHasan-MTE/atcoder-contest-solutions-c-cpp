#include<stdio.h>



int main(){
    int n, i, j, a[100], b[100];


    printf("Enter the array Lenth: ");
    scanf("%d", &n);

    printf("\nEnter %d Elements\n", n);
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=n-1, j=0; i>=0; i--, j++){
        b[j] = a[i];
    }
    for(i=0; i<n; i++){
        a[i] = b[i];
    }

    printf("Reverse Array is: ");
    for(i=0; i<n; i++){
        printf("%d", a[i]);
    }
return 0;
}
