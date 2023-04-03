#include<bits/stdc++.h>
using namespace std;
constexpr int MAXN = 2e5 + 7;
int main() {
    int n,m,a[9],b[MAXN] = {0};
    string num1,num2,num3;
    num3.clear();
    num2.clear();
    num1.clear();
    cin>>n>>m;
    for(int i = 0;i < 9;i++){
        cin>>a[i];
    }
    int i = 8;
    for(int s = 0; s < n + m;i--){
    while(a[i]) {
     b[s] = i + 1;
     a[i]--,s++;
    }
}
   for(int i = 0;i < n;i++) num1 +=to_string(b[i]); 
   for(int i = n + m - 1;i >= n ;i--) num2 += to_string(b[i]);
   if(n - m) num3 = num1.substr(0,n - m);
   string c;
   for(int j = 0; j < m;j++){
    c.clear();
     c = to_string((num1[n - m + j] -'0') - (num2[j] -'0'));
     num3 +=c;
   }
   cout<<num3<<'\n';
}