#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> st;
        int flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i] == '{' || s[i]=='[') st.push(s[i]);
            else if(s[i]==')'){
                if(st.empty() || st.top()!='('){
                    flag=1;
                    break;
                }
                else st.pop();
            }
            else if(s[i]=='}'){
                if(st.empty() || st.top()!='{'){
                    flag=1;
                    break;
                }
                else st.pop();
            }
            else if(s[i]==']'){
                if(st.empty() || st.top()!='['){
                    flag=1;
                    break;
                }
                else st.pop();
            }
        }
       if(st.empty() && !flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
