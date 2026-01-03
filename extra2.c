#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)scanf("%d",&a[i]);
 for(int i=0;i<n;i+=2){
    for(int j=i+2;j<n;j+=2){
       
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
 }
 for(int i=1;i<n;i+=2){
    for(int j=i+2;j<n;j+=2){
    //   printf("%d %d\n",a[i],a[j]);
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
 }
 for(int i=0;i<n;i++)printf("%d ",a[i]);

   return 0;
}
