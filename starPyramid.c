#include<stdio.h>

void main()
{
    int n=4;

    for(int i=1; i<=n ; i++ ){
        for(int j=1; j<=n-i ; j++){
            printf(" "); //For printing space          
        }
         for(int k=1 ; k<=n-i ; k++){
                printf("*"); //Printing stars  
            }
                     for(int u=1 ; u<=i ; u++){
                printf("*"); //Printing stars  
            }
            for(int l=1; l<=n-i ; l++){
                printf(" ");
            }
        printf("\n");
    }
}