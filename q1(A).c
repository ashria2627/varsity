#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 float x;
 scanf("%f",&x);
 int n;
 if(x<300)n=3;
 else if(x>=300 && x<=600)n=4;
 else if(x>600 && x<1000)n=5;
 else if(x==1000)n=6;
 
for(int i=1;i<=n-1;i++){
    for(int j=n-i-1;j>=1;j--){
        printf(" ");
    }printf("*");
    if(i!=1){
    for(int j=1;j<=(2*i-3);j++){
      printf(" ");
    }
    printf("*");}
   printf("\n");
   
}

for(int i=2;i<n;i++){
    for(int j=1;j<i;j++){
        printf(" ");
    }printf("*");
     if(i!=1){
    
    for(int j=(2*(n-i)-3);j>=1;j--){
     printf(" ");
    }}
    if(i!=n-1)printf("*");
   printf("\n");
}
   return 0;
}
