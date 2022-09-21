//1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
void input(int *,int);
void input(int b[],int n)
{
    int i;
    printf("Enter %d numbers in array in a vertical manner: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<n;i++)
    {
        if(b[0]<b[i])
            b[0]=b[i];
    }
    printf("Greatest number is %d",b[0]);
}

int main()
{
    int a[10];
    input(a,10);
    return 0;
}

