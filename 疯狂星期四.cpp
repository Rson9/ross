#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        string s,aa = "crazy",bb = "thursday";
        int a = 0,b = 0,c = 0,d = 0,e = 0;
        cin>>s;
        for(int i = 0;i < s.size();i++){
            if(i + 2 <= s.size()) {
                if(s[i] == '5'&&s[i + 1] == '0')  a = 1;  
            } 
            if(i + 3 <= s.size()) {
                if((s[i] == 'k' || s[i] == 'K')&&(s[i + 1] == 'f'|| s[i + 1] =='F') && (s[i + 2] == 'c' ||s[i + 2] == 'C')) b = 1;
            }
            if(i + 4 <= s.size()) {
                if((s[i] == 'v' || s[i] == 'V') &&(s[i + 1] == 'i' || s[i + 1] == 'I') && (s[i + 2] == 'v' || s[i + 2] == 'V') && (s[i + 3] == 'o' || s[i + 3] == 'O')) c = 1;
            }
            if(i + 5 <= s.size() && d == 0) {
                for(int g = i,m = 0;g < i + 5;g++,m++){
                    if(s[g] == aa[m] || s[g] ==char(aa[m] + 'A' -'a') || s[g] == char (aa[m] + 'a' -'A')) d++;
                    else {d = 0;break;}
                }
            }
            if(i + 8 <= s.size() && e == 0) {
                for(int g = i,m = 0;g < i + 8;g++,m++){
                    if(s[g] == bb[m] || s[g] == char(bb[m] + 'A' -'a') || s[g] == char (bb[m] + 'a' -'A')) e++;
                    else {e = 0;break;}
                }
            }    

            }     
        if(a + b + c + d + e == 16) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}