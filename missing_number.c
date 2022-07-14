int *sorted(int a[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(a[j]>key && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        
    }
    return a;
}
int* missingNumbers(int arr_count, int* arr, int brr_count, int* brr, int* result_count) {
        sorted(arr,arr_count);
        sorted(brr,brr_count);
        int i=0,j=0,k=0;
        int crr[10];
        while(j<arr_count){

            if(brr[i]==arr[j]){
                i++;
                j++;
            }
            else{
                crr[k++]=brr[i];
                i++;
            }
        }
      static int drr[100];
      (*result_count)=k;
              for(int i = 0 ;i< k;i++){
           drr[i]=crr[i];}
    
    for(int i = 0 ;i< k;i++){
           printf("%d ",drr[i]);
    }
           
    return drr;
}
