#include<stdio.h>
int main()
{
	int size,a[100],i,mid,j,median;
	printf("\n enter the size of an array");
	scanf("%d",&size);
	printf("\n enter the elements of an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i--)
  {
  for(j=size-1;j<size;j++)
  {
  mid=a[i]+a[j]/2;
  median=a[mid];
  printf("%d",&median);
  }
  }
  return 0;
  }
