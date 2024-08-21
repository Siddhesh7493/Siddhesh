#include<stdio.h>
int linearsearch(int a[],int size,int key)
{
	if(size==0)
		return -1;
	if(a[size-1]==key)
		return size-1;
	return linearsearch(a,size-1,key);
}

int main()
{
 int a[]={5,15,6,9,4};
 int key=0;
 printf("Enter key to search:");
 scanf("%d",&key);
 int index=linearsearch(a,sizeof(a),key);
 if(index==1)
   printf("Key not found \n");
 else
   printf("The element %d is found at %d \n",key,index);
 return 0;
}
