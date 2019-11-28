#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,n,count;
    count=0;
    for(m=2;m<=100;m++){
        n=sqrt(m);
    for(i=2;i<=m;i++)
    if(m%i==0)
      break;
      if(i>n){
        printf("%d\n",m);
        count++;
        if (count%10==0)
        printf("\n");
    }
    }
    printf("\n");
    return 0;                                                                
}