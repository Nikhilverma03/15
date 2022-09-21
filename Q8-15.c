//8. Write a function in C to print all unique elements in an array.

#include<stdio.h>
void unique(int *,int);
void unique(int arr[],int n)
{
    int i,j,frequency=0;
    printf("Enter %d numbers in array: ",n);
    for(i=0;i<=4;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=4;i++)
    {
        int count=0;
        for(j=0;j<=4;j++)
        {
            if(i!=j)
                {
                    if(arr[i]==arr[j])
                        count=count+1;
                }
        }
        if(count==0)
                printf("%d ",arr[i]);
    }
}
int main()
{
    int a[5];
    unique(a,5);
    return 0;
}

