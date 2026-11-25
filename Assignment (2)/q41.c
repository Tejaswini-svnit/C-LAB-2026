#include <stdio.h>
int main(){
    int n;
    printf("enter value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
    for(int j=1;j<2*n;j++){
    if(j+i<=2*i)

        printf("%d",j);
        int x= 2*i-j;
    if(x>0&&j>i){
        printf("%d",x);
    }
}
    
    printf("\n");  
}
    return 0;
}