#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 int a[n];
 int freq[100]={};
 for(int i=0;i<n;i++)scanf("%d",&a[i]);
 for(int i=0;i<n;i++){
    freq[a[i]]++;
 }
 for(int i=0;i<n;i++){
  if(freq[a[i]]==1)printf("%d ",a[i]);
 }



   return 0;
}
