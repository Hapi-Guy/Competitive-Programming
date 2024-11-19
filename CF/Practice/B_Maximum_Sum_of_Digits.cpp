// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define double long double
// #define endl '\n'
// #define no cout<<"NO\n"
// #define yes cout<<"YES\n"
// #define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define sp " "
// #define tc int TC;cin>>TC;while(TC--)
// #define all(x) x.begin(), x.end()

// template <typename T> // cin >> vector<T>
// istream &operator>>(istream &istream, vector<T> &v)
// {
//     for (auto &it : v)
//         cin >> it;
//     return istream;
// }
// template <typename T> // cout << vector<T>
// ostream &operator<<(ostream &ostream, const vector<T> &c)
// {
//     for (auto &it : c)
//         cout << it << " ";
//     return ostream;
// }
// int32_t main(){
//     //tc
//     {
//         int n;
//         cin>>n;
//         int fh,sh,ans=0;
//         if(n&1){
//             fh=n/2;
//             sh=fh+1;
//             while(fh!=0){
//                 ans+=(fh%10);
//                 fh/=10;
//             }
//             while(sh!=0){
//                 ans+=(sh%10);
//                 sh/=10;
//             }
//         }else{
//             fh=(n/2)+1;
//             sh=(n/2)-1;
//             while(fh!=0){
//                 ans+=(fh%10);
//                 fh/=10;
//             }
//             while(sh!=0){
//                 ans+=(sh%10);
//                 sh/=10;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
//bogus niyom
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
int32_t main(){
    FastAF
    //tc
    {
        int n,nn,cnt=0,ten=1,dif=0,fh,sh,ans=0;cin>>n;
        nn=n;
        vector<int>d;
        while(n!=0){
            cnt++;
            d.push_back(n%10);
            n/=10;
        }
        cnt--;
        for(int i=0;i<cnt;i++){
           dif+=(d[i]*ten);
           ten*=10;
        }
        dif++;
        fh=nn-dif;
        sh=dif;
        while(fh!=0){
            ans+=(fh%10);
            fh/=10;
        }
        while(sh!=0){
            ans+=(sh%10);
            sh/=10;
        }
        cout<<ans<<endl;        
    }
return 0;
}

