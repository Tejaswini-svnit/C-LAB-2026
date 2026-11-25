#include <stdio.h>
int main(){
    int n,m;
    printf("enter value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
    for(int j=1;j<2*n;j++){
    if(i==n||j==n||j>n-i&&j<n+i){
    
    printf("*");}
    else {
        printf(" ");
    }
    }
    printf("\n");
}

    return 0;
}