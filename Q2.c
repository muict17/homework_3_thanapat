#include <stdio.h>
int main(){
    int n;
    int i,j,min,max,count;
    printf("Input N amount : ");
    scanf("%d",&n);
    int array[n];
    int expectedarray[]={0};
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
    }
    printf("The missing number is : ");
    for(i=min;i<=max;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(array[j]==i){
                count++;
            }
        }
        if(count==0){
            printf("%d ",i);
        }
    }
    printf("\n");
   
    return 0;
}
