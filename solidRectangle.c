#include<stdio.h>

void main()
{
    int l, b;
    printf("Length and breadth:");
    scanf("%d %d" , & b , &l);

    for(int i=1 ; i<=l ; i++){
        for(int j=1 ; j<=b ; j++){
            printf("*");
        }
        printf("\n");
    }
}
