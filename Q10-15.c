//10. Write a function in C to count the frequency of each element of an array.

#include<stdio.h>
int main()
{
    int a[5];
    int hash[10]={0},i;
    printf("Enter 5 elements in array: ");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        hash[a[i]]++;
    for(i=0;i<10;i++)
        {
            if(hash[i]!=0)
                printf("\nFrequency of %d is %d\n",i,hash[i]);
        }
    return 0;
}
