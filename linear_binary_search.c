
#include<stdio.h>
#include<time.h>

void delay(){
int temp;
for(int i=0;i<300000;i++){
        temp=300/52;
}
}

int main(){

int s,e,mid;
int i,n,key,a[5000],choice;
clock_t start,end;

printf("Press 1 for linear search and press 2 for binary search");
scanf("%d",&choice);
printf("Enter the number that you want to stop at ");
        scanf("%d",&n);
        for (int i=0;i<n;i++){
            a[i]=i;
        }

        key=a[n-1];
        int c=0;
        e=n-1;
        s=0;
while(choice!=10){
switch(choice){
case 1:
        while(choice!=0){


        start=clock();
        while(c!=n){
            delay();
            if(a[c++]==key)
                break;
        }
        end=clock();

        printf("The element was found at %d",c);
        printf("\n The execution time is %f",(double)(end-start)/CLOCKS_PER_SEC);

        scanf("%d",&choice);
        }

        printf("\n$$$$DONE$$$$");


case 2:

        mid=(e+s)/2;

        start=clock();

        while(s<=e){
            delay();
            if(key>a[mid])
                s=mid+1;

            else if(key==a[mid])
            {   end=clock();
                printf("The element was found using binary search at %d",mid);
                printf("\n The execution time is %f",(double)(end-start)/CLOCKS_PER_SEC);
                break;
            }

            else
                e=mid-1;

        mid=(e+s)/2;



        }
        end=clock();
 if(s>e){
                printf("THE ELEMENT NOT FOUND");
                printf("\n The execution time is %f",(double)(end-start)/CLOCKS_PER_SEC);
                return 0;            }


}
printf("\nEnter you choice");
scanf("%d",&choice);
}

}
