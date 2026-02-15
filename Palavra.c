#include<stdio.h>

int main()
{
    int c[28];
    int a[28];
    int i;
    
    for(int i = 0; i < 28; i++){
        a[i] = 0;
    }
    
    printf("Digite 29 para finalizar.");
    
    while(i != 29){
        printf("\nEscolha o índice para ser igual a 1: ");
        scanf("%d", &i);
        a[i] = 1;
    }
    
    for(int i = 0; i < 28; i++){
        c[i] = a[27 - i];
    }
    
    for(int i = 0; i < 28; i++){
        printf("%d", c[i]);
    }
    
return 0;
}