#include <bits/stdc++.h>

using namespace std;

istream& operator>> ( istream& in,vector<int>& arr){
    for(int i=0;i<(int)arr.size();i++){
        in>>arr[i];
    }
    return in;
}

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;


    vector<int> vec(n);
    
    cin>>vec;

    map<int,int> mp;

    mp[0]=-1;

    vector<int> pref(n);
    pref[0]=vec[0];

    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+vec[i];
    }

    int ans=0;

    // code for max Subarray with sum==k

    for(int i=0;i<n;i++){
        if(mp[pref[i]-k]){
            ans = max(ans,i-mp[pref[i]-k]);
        }

        int x=mp[pref[i]
    ];

        if(mp.find(x)==mp.end()){
            mp[x]=i;
        }
    }
    

    cout<<ans<<endl;

}