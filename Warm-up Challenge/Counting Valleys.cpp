#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{ 
    long int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    int sum=0,i,cnt=0;
    for(i=0;s[i];i++)
    {
        if(s[i]=='U') ++sum;
        else if(s[i]=='D') --sum;
        if(sum == 0 && s[i] =='U') cnt++; 
    }
    cout<<cnt;
    return 0;
}
