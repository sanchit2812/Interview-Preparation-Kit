#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,cnt=0;
    cin>>n;
    int a[n+1]={0};
    for(i=0;i<n;i++) cin>>a[i];
    for(i=1;i<n;i++)
    {
        if(a[i]==0 && a[i+1]==0)
        {
            cnt++;
            i++;
        }
        else if(a[i]==0 && a[i+1]==1) cnt++;
        else 
        {
            cnt++;
            i++;
        }
    }
    cout<<cnt;
    return 0;
}
