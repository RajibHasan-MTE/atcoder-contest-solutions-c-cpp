#include<stdio.h>


int main(){
    int a, b;
    scanf("%d %b", &a, &b);
    int flage;

    for(int i=1; i<11; i++){
        for(int j=1; j<11; j++){
            if(i==a && j==b){
                flage = 1;
                break;
            }
            else{
                flage = 0;
            }
        }
    }
    if(flage == 1){
        printf("Yes\n");
    }
    else{
         printf("No\n");
    }


return 0;
}




