#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "

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
int const N=100009;
int result[N];
void et()
{
    int v,r;
    for(int i=1;i<=N;i++)
    {
       r=v=i;
       for(int j=2;j*j<=v;j++)
       {
           if(v%j==0)
            r-=r/j;
           while(v%j==0)
            v/=j;
       }
       if(v>1)
       r-=r/v;
       result[i]=result[i-1]+(i-r);
    }
 
}
#define tc int TC;cin>>TC;for(int i=1;i<=TC;i++)
int32_t main()
{
    FastAF
    et();
    tc
    {
        int n;
        cin>>n;
        cout<<"Case "<<i<<": "<<result[n];
        if(TC!=i){
            cout<<endl;
        }
    }
}