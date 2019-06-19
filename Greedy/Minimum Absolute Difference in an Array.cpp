#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<limits.h>


int main() 
{  
    long long int n,i,a[100001]={0},min=INT_MAX;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++) if(abs(a[i]-a[i+1]) <min) min= abs(a[i]-a[i+1]);
    cout<<min;
    return 0;
}
