#include<stdio.h>
int main()
{
	int i,j,n,arr[100],temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			for(j=0;j<n;j++)
			{
				if(arr[j]>0)
				{
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		}

	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
