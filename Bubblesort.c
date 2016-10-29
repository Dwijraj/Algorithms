#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,i,d;
    int arr[10];
    printf("Enter the values into the array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&d);
        arr[i]=d;
    }
    BubbleSort(arr,10);
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);

    }

    return 0;
}
void BubbleSort(int a[],int N)
{
    int c,d,temp;
    for(c=0;c<N;c++)
    {
        for(d=c;d<N;d++)
        {
            if(a[c]>a[d])
            {
                temp=a[c];
                a[c]=a[d];
                a[d]=temp;
            }
        }
    }
}
