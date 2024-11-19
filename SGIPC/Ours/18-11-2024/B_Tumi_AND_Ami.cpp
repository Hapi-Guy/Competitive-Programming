#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        int d;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>d;
            if(c!=d){
                v.push_back(d);
            }
            c++;
        }
        int ans=v[0];
        for(int i=1;i<v.size();i++){
            ans=(ans&v[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
