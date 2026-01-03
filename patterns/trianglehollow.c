#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 printf("right triangle : \n");
 for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(i==j|| j==0)printf("*");
        else printf(" ");
    }printf("\n");
 }
 for(int i=0;i<n;i++)printf("*");

 printf("\nleft triangle : \n");
  for(int i=0;i<n;i++)printf("*");
  printf("\n");
 for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(j==(n-i-2)|| j==0)printf("*");
        else printf(" ");
    }printf("\n");
 }


   return 0;
}
