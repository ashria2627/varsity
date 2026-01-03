#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  //17 try koro 
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
        printf("%d",j);
        
    }
    if(i>=2){for(int j=i-1;j>=1;j--){
     printf("%d",j);
    }}
    printf("\n"); //dekho

 }
   return 0;
}
