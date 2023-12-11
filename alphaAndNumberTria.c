#include<stdio.h>

int main()
{
    int n=5; 

    for(int i=1; i<=n ; i++){
        int A=65 , count=1;
        for(int j=1; j<=i ; j++){
            if(i%2==0){
            printf("%c ",A);
            A++;
            }else{
            printf("%d ", count);
            count++;
            }

        }
        printf("\n");
    }
return 0;
}