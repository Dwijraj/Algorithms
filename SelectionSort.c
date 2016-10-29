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
    SelectionSort(arr,10);
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);

    }

    return 0;
}
void SelectionSort(int array[],int N)
{
    int c,pos,d,swap;
    for(c=0;c<N;c++)
    {
        pos=c;
        for(d=c+1;d<N;d++)
        {
            if(array[d]<array[pos])
            {
                pos=d;
            }
        }
        if(pos!=c)
        {
            // swap;
            swap=array[c];
            array[c]=array[pos];
            array[pos]=swap;
        }




    }

}
