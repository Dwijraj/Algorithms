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
    InsertionSort(arr,10);
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);

    }

    return 0;
}
void InsertionSort(int array[],int N)
{
    int j,i,temp;
    for(j=1;j<N;j++)
    {
        i=j-1;
        temp=array[j];
        while(temp<array[i]&&i>=0)
        {
            array[i+1]=array[i];
            i--;
        }
        array[i+1]=temp;

    }

}
