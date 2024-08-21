#include<stdio.h>

void accept_element(int a[100],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter the element at index %d :",i);
    scanf("%d",&a[i]);
  }
}

void display_element(int a[100],int n)
{
  int i;
  printf("Array is : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
    
  }
  printf("\n");
}

void Searching_element(int a[100],int n,int key)
{
  int i;
  
  for(i=0;i<n;i++)
  {
    if(a[i]==key)
    {
    	printf("Searching element is found of index %d \n",i);
    }
    
  }
}

int main()
{
  int n;
  printf("Enter the number of element you want to store :");
  scanf("%d",&n);
  
  int a[n];
  accept_element(a,n);
  display_element(a,n);
  int key;
  printf("Enter the searching element : ");
  scanf("%d",&key);
  Searching_element(a,n,key);

  return 0;
}