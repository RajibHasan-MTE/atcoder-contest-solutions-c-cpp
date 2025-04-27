#include<stdio.h>

int main(){
    float i;
    int n, c;
    scanf("%f", &i);
    n = i*10;
    c = i*100;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n/1000);
    n = n%1000;
    printf("%d nota(s) de R$ 50.00\n", n/500);
    n = n%500;
    printf("%d nota(s) de R$ 20.00\n", n/200);
    n = n%200;
    printf("%d nota(s) de R$ 10.00\n", n/100);
    n = n%100;
    printf("%d nota(s) de R$ 5.00\n", n/50);
    n = n%50;
    printf("%d nota(s) de R$ 2.00\n", n/20);


    printf("MOEDAS:\n");
    c = c/100;
    printf("%d moeda(s) de R$ 1.00\n", c/1000);
    c = c%100;
    printf("%d moeda(s) de R$ 0.50\n", c/50);
    c = c%50;
    printf("%d moeda(s) de R$ 0.25\n", c/25);
    c = c%25;
    printf("%d moeda(s) de R$ 0.10\n", c/10);
    c = c%10;
    printf("%d moeda(s) de R$ 0.05\n", c/5);
    c = c%5;
    printf("%d moeda(s) de R$ 0.01\n", c/5);

    return 0;


}
