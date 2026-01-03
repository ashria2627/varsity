#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 int temp=n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",n-j+1);
    }
      for(int j=1;j<=(2*(temp-1)-1);j++){
        printf("%d",temp);
    };temp--;
    for(int j=n-i+1;j<=n;j++){
        if(j==1)continue;
        printf("%d",j);
    }
    printf("\n");
}
 temp=n;
for(int i=2;i<=n;i++){
    for(int j=n;j>=i;j--){
        printf("%d",j);
    }
     for(int j=1;j<=(2*(i-1)-1);j++){
        printf("%d",n-temp+2);
    };temp--;
    for(int j=i;j<=n;j++){
        if(j==1)continue;
        printf("%d",j);
    }
    
    printf("\n");
}


   return 0;
}
