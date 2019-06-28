#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int ar[27] ={0};
    for(int i=0;s[i];i++) ar[s[i]-'a']++;
    for(int i=0;t[i];i++) ar[t[i]-'a']--;
    int cnt=0;
    for(int i=0;i<26;i++) cnt += abs(ar[i]);
    cout<<cnt;
    return 0;
}
