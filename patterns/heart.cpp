#include <bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n;
cin>>n;
//  for(int i=n/2; i<=n; i+=2)
//     {
//         for(int j=1; j<n-i; j+=2)
//         {
//             printf(" ");
//         }

//         for(int j=1; j<=i; j++)
//         {
//             printf("*");
//         }

//         for(int j=1; j<=n-i; j++)
//         {
//             printf(" ");
//         }

//         for(int j=1; j<=i; j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }

for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
        printf("-");
    }
    for(int j=(2*(n-i)+1);j>=1;j--){
        printf("*");
    }
    printf("\n");
}
   return 0;
}
