#include<stdio.h>
int a[1000];
int main()
{
	int n,i,count,currentMajor;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	count=1;
	currentMajor=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]==currentMajor)
		count++;
		else
		count--;
		if(count==0)
		{
			currentMajor=a[i];
			count=1;
		}
	}
	count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==currentMajor)
		count++;
	}
	if(count>(n/2))
	printf("%d\n",currentMajor);
	else
	printf("NONE\n");
	return 0;
}
