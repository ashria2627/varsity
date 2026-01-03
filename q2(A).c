#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int a[7],x;
 for(int i=0;i<8;i++){
    scanf("%d",&x);
    if(x==1 )a[i]=0;
    else a[i]=1;
 }
 
int num[10][7]={
    {0,1,1,1,1,1,1},//0
    {0,0,0,0,0,1,1},//1
    {1,0,1,1,0,1,1},//2
    {1,0,0,1,1,1,1},//3
    {1,1,0,0,1,1,0},//4
    {1,1,0,0,1,0,1},//5
    {1,1,1,1,1,0,1},//6
    {0,0,0,0,1,1,1},//7
    {1,1,1,1,1,1,1},//8
    {1,1,0,1,1,1,1}//9
};

for(int i=0;i<10;i++)
{int f=0;
   for(int j=0;j<7;j++){
       
       if(a[j+1]!=num[i][j])break;
       else f++;
   }
   printf("\n");
   
   if(f==7){printf("%d",i);return 0;}
   
}
printf("No digit is generated Marking");
   return 0;
}
