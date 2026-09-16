  GNU nano 8.7.1                                                                                                   scrh.c                                                                                                             
#include<stdio.h>
int linearsearch(int arr[],int size, int target)
{
 for(int i=0;i<size;i++)
 {
  if(arr[i]==target)
  {
   return i ;
   }
 }
 return-1;
}
int main()
{
int arr[100],size,traget,result;
printf("enter the number of element in the array:");
scanf("%d",&size);
printf("enter %d intergers:\n",size);
for(int i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
}
printf("enter the element to search for :");
scanf("%d",&traget);
result = linearsearch(arr,size,traget);
if(result != -1)
{
 printf("enter %d found at index %d(position %d).\n",traget,result,result+1);
}
 else
 {
  printf("element %d not foumd in the array.\n",traget);
}
 return 0;
}

