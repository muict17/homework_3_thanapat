#include <stdio.h>
int main(){
    int n;
    int i,min,max,sum=0,expectedsum=0,missingnum;
    printf("Input N amount : ");
    scanf("%d",&n);
    int array[n];
    printf("Input numbers : ");
    scanf("%d",&array[0]);
    min=array[0],max=array[0];
    for(i=1;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i]<min){
            min=array[i];
        }
        if(array[i]>max){
            max=array[i];
        }
        sum += array[i];
    }
    sum = sum+array[0];
    for(i=min;i<=max;i++){
        expectedsum += i;
    }
    missingnum = expectedsum - sum;
    if(missingnum==0){
        printf("No missing number\n");
    }else{
        printf("The missing number is : %d\n",missingnum);
    }
    
    return 0;
}