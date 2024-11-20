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

int et(int n){ 
    int result = n; 
    for(int i=2;i*i<=n;i++){ 
        if(n%i==0){
            result-=result/i;
        }
        while(n%i==0){
            n/= i;
        } 
    } 
    if (n>1){
        result-=result/n;
    } 
    return result;
} 

int32_t main(){
    FastAF
    tc
    {
        int n;cin>>n;
        cout<<et(n)<<endl;
    }
return 0;
}
