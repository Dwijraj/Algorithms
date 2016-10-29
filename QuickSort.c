#include<stdio.h>
#include<stdlib.h>
int a[10];
int main()
{
    int N,i,d;
    printf("Enter the values into the array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&d);
        a[i]=d;
    }
    QuickSort(0,9);
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);

    }

    return 0;
}
void QuickSort( int start,int end)
{
    int index1,index2,pivot,temps;
    index1=start;
    index2=end;
    pivot=start;

    while(index1 < index2)
        {
            while(index1<=end&&a[pivot]>=a[index1])
    {
        index1++;
    }
    while(a[pivot]<a[index2])
    {
            index2--;
    }
    if(index1<index2)
    {
        int temp;
        temp=a[index2];
        a[index2]=a[index1];
    }
    temps=a[index2];
    a[index2]=a[pivot];
    a[pivot]=temps;
    QuickSort(start,index2-1);
    QuickSort(index2+1,end);
        }


}
