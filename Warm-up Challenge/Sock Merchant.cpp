#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int n,c[102]={0},x,sum=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        c[x]++;
    }
    for(i=1;i<101;i++) sum+=c[i]/2;
    cout<<sum;
    return 0;
}
