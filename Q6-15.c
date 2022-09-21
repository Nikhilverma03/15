//6. Write a function in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
void reverse(int *, int);
void reverse(int a[], int n)
{
    int i;
    printf("Enter %d number in array: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Reverse order is: ");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
int main()
{
    int arr[10];
    reverse(arr,10);
    return 0;
}
