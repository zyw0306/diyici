#include<stdio.h>
int main ()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=0; m<n; m++)
        if((m%4==0&&m%100!=0)||(m%400==0))
        {
            printf("%d ",m);
            i++;
            if(i%5==0)
                printf("\n");
        }
    printf("\n");
    return 0;

}
