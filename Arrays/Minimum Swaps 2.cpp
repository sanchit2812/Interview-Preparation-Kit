#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        while(a[i]!=i+1){
            swap(a[i],a[a[i]-1]);
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}
