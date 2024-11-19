#include<bits/stdc++.h>
using namespace std;

map<int,int> cl;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int d;
    for(int i=0;i<a;i++){
        cin>>d;
        if(cl[d]==0){
            cl[d]=1;
        }
    }
    for(int i=0;i<b;i++){
        cin>>d;
        if(cl[d]!=1){
            cl[d]=2;
        }
    }
    for(auto a:cl){
        cout<<a.second<<" ";
    }cout<<"\n";
    return 0;
}