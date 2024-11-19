#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n,sum=0;
    cin>>n;
    vector<int>v(n);
    for(auto &a:v){
        cin>>a;
        sum+=a;
    }
    int ans=LLONG_MAX;
    int p=0,q;
    for(int i=0;i<(1<<n);i++){
        p=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                p+=v[j];
            }
        }
        q=sum-p;
        ans=min(ans,abs(p-q));
    }
    cout<<ans<<"\n";
    return 0;
}



