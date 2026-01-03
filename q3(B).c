#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
int n;
scanf("%d",&n);
int a[n][n];
int b[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);}
} 
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
b[j][i]=a[i][j];
}
} 

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(a[i][j]!=b[i][j]){
    printf("Not Symmetrical");
    return 0;
}
}
} printf("Symmetrical");

   return 0;
}
