#include <stdio.h>
int main(){
    int n;
    int i,value=0;
    printf("Input N amount : ");
    scanf("%d",&n);
    char array[n];
    printf("Input brackets : ");
    for(i=0;i<n;i++){
        scanf(" %c",&array[i]);
        if(array[i]=='('){
            value++;
        }else if(array[i]==')'){
            value--;
        }else{
            printf("Invalid \n");
            return 0;
        }
        if(value<0){
            printf("Invalid \n");
            return 0;
        }
    }
    if(value==0){
        printf("Complete \n");
    }else{
        printf("Incomplete \n");
    }
    
    return 0;
}