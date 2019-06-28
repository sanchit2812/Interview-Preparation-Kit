#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1]={0};
        for(int i=0;i<n;i++) cin>>a[i];
        int b=0,flag=0;

        for(int i=n-1;i>=0;i--){
            if((a[i]- i-1)>2){
                flag=1;
                break;
            }
            for(int j= max(0,a[i]-2);j<i;j++){
                if(a[j]>a[i]) b++;
            }
        }
        (flag)?(cout<<"Too chaotic"<<endl):(cout<<b<<endl);
    }
    return 0;
}
