#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<limits.h>

int main() 
{  
    long int n,k,j,i;
    cin>>n>>k;
    long int a[n+1]={0},b[n+1]={0};
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int min=INT_MAX;
    for(i=0;i<n-k+1;i++) if( (a[k+i-1] - a[i]) < min) min = a[k+i-1] - a[i];
    cout<<min;
    return 0;
}
