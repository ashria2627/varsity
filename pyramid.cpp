#include <bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
    cin.tie(nullptr);
for(int i=1;i<5;i++){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int j=(2*(5-i)-1);j>=1;j--){
      cout<<j;
    }
    cout<<endl;
}
   return 0;
}
