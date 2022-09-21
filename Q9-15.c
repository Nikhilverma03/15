//9. Write a function in C to merge two arrays of the same size sorted in descending order.

#include<stdio.h>
void merge(int *, int *,int);
void merge(int a[],int b[],int n)
{
    int c[2*n],k,i,j,temp=0;
    printf("Enter %d numbers for array a: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter %d numbers for array b: ",n);
    for(j=0;j<n;j++)
        scanf("%d",&b[j]);
    i=0;
    j=0;
    for(k=0;k<2*n;k++)
        {
            if(k<(2*n)/2)
                {
                    c[k]=a[i];
                    i++;
                }
            else
                {
                    c[k]=b[j];
                    j++;
                }
        }
    for(i=0;i<2*n;i++)
        {
            for(j=i+1;j<2*n;j++)
                {
                    if(c[i]>c[j])
                        {
                            temp=c[i];
                            c[i]=c[j];
                            c[j]=temp;
                        }
                }
        }
    printf("\nSorted array list is: ");
    for(k=2*n-1;k>=0;k--)
            printf("%d ",c[k]);
}
int main()
{
    int a[5],b[5];
    merge(a,b,5);
    return 0;
}
