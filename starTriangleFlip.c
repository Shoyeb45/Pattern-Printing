#include<stdio.h>

void main()
{
    int n=4;

    for(int i=1; i<=n ; i++ ){
        for(int j=1; j<=n-i ; j++){
            printf(" "); //For printing space          
        }
         for(int k=1 ; k<=i ; k++){
                printf("*"); //Printing stars  
            }
        printf("\n");
    }
}