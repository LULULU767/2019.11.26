#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);
    if(n>2){
    for(i=2;i<n;i++){
    if(n%i!=0){
        printf("N is a prime number!",n);
    return 0;
    }
    }
    if(n%i==0){
        printf("N is not a prime number!",n);
    }
    }
    if(n=2){
        printf("N is a prime number!",n);
    }
    if(n=1){
        printf("N is not a prime number!",n);
    }
}