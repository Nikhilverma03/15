//3. Write a function to sort an array of any size. (TSRS)

#include<stdio.h>
void sort(int *,int);
void sort(int b[],int n)
{
    int i,j,temp=0;
    printf("Enter %d number in array: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("Sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
int main()
{
    int arr[10];
    sort(arr,10);
    return 0;
}
