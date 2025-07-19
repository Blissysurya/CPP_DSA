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

    vector<int> pref(n);
    pref[0]=vec[0];

    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+vec[i];
    }

    map<int,int> mp;

    mp[0]=0;
    int cnt=0;

    for(int i=0;i<n;i++){
        if(mp[pref[i]-k]){
            cnt += mp[pref[i]-k];
        }
        mp[pref[i]]++;
    }

    cout<<cnt<<endl;
    
}