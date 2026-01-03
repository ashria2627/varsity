#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
        printf("*");
    }
    if(i>=2){
        for(int j=1;j<(2*i-1);j++)printf(" ");
    } 
     for(int j=i;j<=n;j++){
        printf("*");
    }
    printf("\n");
 }
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    if(i<=n-1){
        for(int j=1;j<=(2*(n-i));j++)printf(" ");
    } 
     for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
 }

   return 0;
}
