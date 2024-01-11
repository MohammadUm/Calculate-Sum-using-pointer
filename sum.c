#include<stdio.h>
void main()
{
    int arr[]={10,20,30,40,50};
    int *q;
    q=arr;
    int sum;
    int i;
    
    sum=0;

for(i=0;i<5;i++)
{
    sum+=q[i];
    
}
printf("%d",sum);
}