#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 printf("arrow right :\n");
 for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
     printf("*");
    }printf("\n");
 }
 for(int i=1;i<=n-1;i++){
    for(int j=i;j<=n-1;j++){
     printf("*");
    }printf("\n");
 }
 printf("\narrow left :\n");
 for(int i=1;i<=n;i++){
    for(int j=i;j<n;j++)printf(" ");
    for(int j=1;j<=i;j++){
     printf("*");
    }printf("\n");
 }
 for(int i=1;i<=n-1;i++){
    for(int j=1;j<=i;j++)printf(" ");
    for(int j=i;j<=n-1;j++){
     printf("*");
    }printf("\n");
 }

   return 0;
}
