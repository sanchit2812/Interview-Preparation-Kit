#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cout<< a[(d+i)%n]<<" ";
    return 0;
}
