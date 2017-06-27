#include<stdio.h>
long long int previousoccurence[1000000],a[100];
int main()
{
	long long int i,n,currlength,maxlength,previous;
	printf("enter no of terms\n");
	scanf("%lld",&n);
	printf("enter the terms\n");
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	for(i=0;i<1000000;i++)
	previousoccurence[i]=-1;
	currlength=1;
	maxlength=1;
	previousoccurence[a[0]]=0;
	for(i=1;i<n;i++)
	{
		previous=previousoccurence[a[i]];
		if((previous==-1)||(i-currlength>previous))
		{
			currlength++;
			previousoccurence[a[i]]=i;
		}
		else
		{
			if(currlength>maxlength)
			maxlength=currlength;
			currlength=i-previous;
			previousoccurence[a[i]]=i;
		}
	}
	if(currlength>maxlength)
	maxlength=currlength;
	printf("size of longest unique subarray is %d\n",maxlength);
	return 0;
}
