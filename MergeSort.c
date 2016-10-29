#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[10] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44 };
int b[10];
int main()
{
     int i;

   printf("List before sorting\n");

   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   MergeSort(0, max);

   printf("\nList after sorting\n");

   for(i = 0; i <= max; i++)
      printf("%d ", b[i]);
}
void Merge(int low, int mid, int high)
{

   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];


}
void MergeSort(int start,int end)
{
    int mid;
   if(start<end)
   {
       mid=((start+end)/2);
       MergeSort(start,mid);
       MergeSort(mid+1,end);
       Merge(start,mid,end);
   }
}
