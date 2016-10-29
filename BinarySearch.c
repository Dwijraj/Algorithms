#include<stdio.h>
#include<stdlib.h>
int a[10];
int main()
{
    int N,i,d;
    //int a[10];
    printf("Enter the number of elements you want");
    scanf("%d",&N);
    printf("Enter the values into the array in sorted order");
    for(i=0;i<N;i++)
    {
        scanf("%d",&d);
        a[i]=d;
    }
    printf("Enter the element you want to search");
    scanf("%d",&d);
    BinarySearch(0,N-1,d);
  /* if( BinarySearch(0,N-1,d))
   {
        printf("Found !");
   }
   else
   {
        printf("Not present!");
    }
    return 0; */
}
void BinarySearch(int start,int end,int e)
{
    int mid;
    if(start==end)
    {
        if(a[start]==e)
            printf("Found !");
        else
            printf("Not present!");
    }
    else
    {
            mid=(start+end/2);
            if(a[mid]==e)
            {
                 printf("Found !");
            }
            else
            {
                if(a[mid]>e)
                {
                    BinarySearch(mid,end,e);
                }
                else
                {
                    BinarySearch(start,mid,e);
                }
            }

    }

}
