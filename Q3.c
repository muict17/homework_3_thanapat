#include <stdio.h>
int main(){
    int n,m;
    int i,j,max;
    printf("Input matrix size : ");
    scanf("%d %d",&n,&m);
    int array[n][m];
    int sum[]={0};
    max = sum[0];
    int posmax;
    printf("Input elements : \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&array[i][j]);
            sum[i]+=array[i][j];
        }
        if(sum[i]>max){
            max = sum[i];
            posmax = i+1;
        }
    }
    printf("Row %d has the max sum\n",posmax);
    return 0;
}