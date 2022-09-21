//4. Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include<stdio.h>
void rotate(int *,int);
void rotate(int a[],int no)
{
    int temp,i,j=0,n,r=1;
    int direction;
    printf("Enter direction with integer 1(for right) or 0(for left): ");
    scanf("%d",&direction);
    printf("Enter number of rotations: ");
    scanf("%d",&n);
    printf("Enter %d numbers in array in a vertical manner: \n",no);
    for(i=0;i<no;i++)
        scanf("%d",&a[i]);
    j=i;
    if(direction)
    {
    while(r<=n)
    {
        temp=a[j-1];
        for(i=no-1;i>0;i--)
            a[i]=a[i-1];
    a[i]=temp;
    r++;
    }
    printf("After right turn: ");
    for(i=0;i<=no-1;i++)
        printf("%d ",a[i]);
    }
    else
    {
    while(r<=n)
    {
    temp=a[0];
    for(i=0;i<no-1;i++)
        a[i]=a[i+1];
    a[j-1]=temp;
    r++;
    }
    printf("Array is: ");
    for(i=0;i<=no-1;i++)
        printf("%d ",a[i]);
    }
}
int main()
{
    int arr[5];
    rotate(arr,5);
    return 0;
}
