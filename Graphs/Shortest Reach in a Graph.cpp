#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        
        int n,m,i,j=0;
        cin>>n>>m;
        vector <int > vec[n+1];
        for(i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            vec[x].push_back(y);
            vec[y].push_back(x);
        }
        int st;cin>>st;
        
        bool vis[n+1];memset(vis, false, sizeof(vis));
        int ans[n+1];memset(ans, 0 , sizeof(ans));
        queue <int> q;
        
        q.push(st);
        vis[st]=true;
        
        while(!q.empty()){
            int fr = q.front();
            q.pop();
            
            for(i=0;i<vec[fr].size();i++){
                int check = vec[fr][i];
                if(!vis[check]){
                    vis[check] =true;
                    q.push(check);
                    ans[check] = ans[fr]+6;
                }
            }
        }
        
        for(i=1;i<=n;i++){
            if(i!=st && ans[i]) cout<<ans[i]<<" ";
            else if(i!=st) cout<<-1<<" ";
        }
        cout<<'\n';
        }
        return 0;
    }
