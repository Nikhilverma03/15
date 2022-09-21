//5. Write a function to find the first occurrence of adjacent duplicate values in the array.
 //  Function has to return the value of the element.
#include<stdio.h>
int occurence(int *,int);
int occurence(int a[],int n)
{
    int i,j,temp=0;
    printf("Enter %d numbers in array: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
}
int main()
{
    int no,arr[20];
    no=occurence(arr,20);
    printf("%d",no);
    return 0;
}
