#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int ar[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }
  

  int f[1001]={ };

  for (int i = 0; i < n; i++)
  {
     f[ar[i]]++;
  }
  
for (int i = 0; i < 1001; i++)
{
  if (f[i]!=0)
  {
     printf("%d is %d times\n",i,f[i]);
  }
  
}



}