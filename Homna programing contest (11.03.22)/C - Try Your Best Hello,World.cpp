#include<stdio.h>
#include<string.h>

int main(){
    char stringg[15];
    scanf("%s", stringg);

    if(strcmp(stringg, "Hello,World!") == 0){
        printf("AC\n");
    }
    else{
        printf("WA\n");
    }


    return 0;
}
