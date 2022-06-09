
#include <stdio.h>
#include <time.h>
int a[10000];
void delay()
{
    long i;
    for(i=0;i<30000;i++)
    {}
}
int binarysearch(int u,int l, int key)
{ delay();
    int mid=(l+u)/2;
    if(a[mid]==key)
    {printf("the element is in the array");
    return 0;}
    else
    if(u<l)
    {printf("the elemetn was not found");
    return 0;}
    else
    {
    if(a[mid]<key)
    binarysearch(u,mid+1,key);
    else
    binarysearch(mid-1,l,key);
    }
   
     
    return 0;
}
int main()
{ clock_t start,end;int n;
printf("enter the size of the array");
scanf("%d",&n);
for(int i=0; i<n;i++)
{a[i]=i;}
   
    start=clock();
    binarysearch(n-1,0,n);
    end=clock();
     printf("\n The execution time is %f",(double)(end-start)/CLOCKS_PER_SEC);
return 0;
}
