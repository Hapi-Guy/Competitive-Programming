#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define tc int TC;cin>>TC;while(TC--)
#define all(x) x.begin(), x.end()

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}
int const N=2e5+20;
int ar[N],ans,cur;
map<int,int> dp;
vector<int> v;

int32_t main(){
    FastAF
    //tc
    {
        int n;cin>>n;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            dp[ar[i]]=max(dp[ar[i]],dp[ar[i]-1]+1);
            if(dp[ar[i]]>ans){
                ans=dp[ar[i]];
                cur=ar[i];
            }
        }
        cout<<ans<<endl;
        for(int i=n;i>0;i--){
            if(ar[i]==cur){
                cur--;
                v.push_back(i);
            }
        }
        reverse(all(v));
        cout<<v<<endl;
    }
return 0;
}