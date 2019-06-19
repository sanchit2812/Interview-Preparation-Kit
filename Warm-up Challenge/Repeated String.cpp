#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<bits/stdc++.h>

int main() 
{  
    long int n,q,r,i,cnt=0; 
    char s[101]; cin>>s;cin>>n;
    q = n/strlen(s);
    r= n% (strlen(s));
    for(i=0;s[i];i++) 
        if(s[i]=='a') cnt++;
    cnt*=q;
    for(i=0;i<r;i++) if(s[i]=='a') cnt++;
    cout<<cnt;
    return 0;
}
