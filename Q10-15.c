//10. Write a function in C to count the frequency of each element of an array.

#include<stdio.h>
int count(int*, int);
int count(int b[],int n)
{
    int hash[10]={0},i;
    printf("Enter 5 elements in array: ");
    for(i=0;i<=4;i++)
        scanf("%d",&b[i]);
    for(i=0;i<5;i++)
        hash[b[i]]++;
    for(i=0;i<10;i++)
        {
            if(hash[i]!=0)
                printf("Frequency of %d is %d\n",i,hash[i]);
        }
}
int main()
{
    int a[5];
    count(a,5);
    return 0;
}
