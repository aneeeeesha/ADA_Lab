
#include <stdio.h>
#include <time.h>
int a[10000];
void delay()
{
    long i;
    for(i=0;i<30000;i++)
    {}
}
int linearsearch(int n, int key)
{ delay();
    if(n==-1)
        return 0;
    else if(a[n]!=key)
        return linearsearch(n-1,key);
    else
        return n;
}
int main()
{ clock_t start,end;int n;
printf("enter the size of the array");
scanf("%d",&n);
for(int i=0; i<n;i++)
{a[i]=i;}
   
    start=clock();
    int a ;
    a = linersearch(n,0);
    end=clock();
     printf("\n The execution time is %f",(double)(end-start)/CLOCKS_PER_SEC);
return 0;
}
