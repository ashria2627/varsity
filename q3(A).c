#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
  long long a[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%lld",&a[i][j]);
    }
  }
  int q;
  scanf("%d",&q);
  while(q--)
 { int i,j;

    scanf("%d%d",&i,&j);//i=1,j==2
    long long s=0;
    if(i==0 && j==0)continue;
    for(int l=0;l<=i;l++){
        for(int r=0;r<=j;r++){
            // printf("%d ",a[l][r]);
            s+=a[l][r];
    }
}   printf("%lld\n",s);
}
   return 0;
}
