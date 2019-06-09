#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    
    int a[n+1]={0};
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                cnt++;
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Array is sorted in "<<cnt<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}
