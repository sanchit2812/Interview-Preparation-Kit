#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main() 
{ 
   long long int n,k,i=0;
    cin>>n>>k;
    int x,y,sum=0,a[n+1];
    while(n--)
    {
        cin>>x>>y;
        if(y==0) sum+=x;
        else a[i++]=x;
    }
    sort(a,a+i);
    if(i>k){
    for(int j=i-1;j>=i-k;j--) sum+=a[j];
    for(int j=i-k-1;j>=0;j--) sum-=a[j];
    }
    else for(int j=i-1;j>=0;j--) sum+=a[j];
    cout<<sum;
    return 0;
}
