#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1||j==n ||i==1||i==n)printf("1");
        else printf("0");
    }printf("\n");
 }printf("\n\n");
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==j && i==(n/2)+1 && j==(n/2)+1)printf("0");
        else printf("1");
    }printf("\n");
 }

   return 0;
}
