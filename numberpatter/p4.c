#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 for (int i = 1; i <= n; i++)
 { //17 k duibhag koro 
  
  if(i>=2){ for (int k =i; k >=2; k--)
    { 
        printf("%d",k);
    }}
    
    for (int j = 1; j <=(n-i+1); j++)
    {
        printf("%d",j);
    }printf("\n");//eta ekvag thik ase? kon pasher bhag eta dan na bam print kore dekho
    
 }
 

   return 0;
}
