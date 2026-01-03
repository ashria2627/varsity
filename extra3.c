#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 int a[n][n];
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
 }
 int f=0;
 for(int i=0;i<n-1;i++){
    if(a[i][i]!=a[i+1][i+1]){
        f++;
        break;
    }
 }
 if(f!=0){
    printf("The given matrix is not a scalar matrix.\nThe matrix is:\n");
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
 }
 return 0;
 }else{
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(i==j)continue;
       if(a[i][j]!=0){f++;
        break;}
    }
      if(f!=0)break;
 }
 }
  if(f!=0){
    printf("The given matrix is not a scalar matrix.\nThe matrix is:\n");
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
 }}else{
     printf("The given matrix is a scalar matrix.\nThe matrix is:\n");
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
 }

 }
   return 0;
}
