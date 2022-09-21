//7. Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>
void duplicate(int *,int);
void duplicate(int arr[],int n)
{
    int count=0,i,j;
    printf("Enter %d numbers in array: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count=count+1;
            else
                continue;
        }
    }
    printf("There are total %d duplicates in array",count);
}
int main()
{
    int a[9];
    duplicate(a,9);
    return 0;
}
