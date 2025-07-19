#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    map<int,int> mp;

    bool ans=false;

    for(int i=0;i<n;i++){
        mp[vec[i]]=i;
        if(mp.find(vec[i])!=mp.end()){
            if(i-mp[vec[i]]<=k){
                ans=true;
                break;
            }
        }
    }

    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


}