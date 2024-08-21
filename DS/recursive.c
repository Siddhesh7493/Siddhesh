#include<stdio.h>
int binarySearch(int arr[],int start,int end,int x)
{
	while(start <= end)
	{
		int mid=start+(end-start)/2;
		if (arr[mid]==x)
			return mid;
		if (arr[mid]<x)
			start=mid+1;
		else
			end=mid-1;
	}
	return -1;
}

int rec(int arr[],int start,int end,int x)
{
	if(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]<x)
			return rec(arr,mid+1,end,x);
		else
			return rec(arr,start,mid-1,x);
	}
	return -1;
}	

int main()
{
	int arr[]={-2,1,3,4,6,9,10,11,34,67};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int x=0;
	printf("Enter number to non recursive Search:");
	scanf("%d",&x);
	
	int found=binarySearch(arr,0,n-1,x);
	
	if(found==-1)
		printf("non recursive: %d not found in given array\n",x);
	else
		printf("non recursive: %d found in given array\n",x);
	
	printf("Enter number to recursive Search:");
	scanf("%d",&x);
	
	found=rec(arr,0,n-1,x);
	
	if(found==-1)
		printf("recursive: %d not found in given array\n",x);
	else
		printf("recursive: %d found in given array\n",x);	
	return 0;
}
