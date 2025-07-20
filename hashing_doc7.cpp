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
    map<int,int> mp2;



    mp[0]=-1;
    mp2[0]=-1;
    vector<int> pref(n);
    pref[0]=vec[0];

    for(int i=1;i<n;i++){
        pref[i] = pref[i-1] + vec[i];
    }

    int ans=INT_MIN;
    for(int i=0;i<n;i++){

        if(mp.find(pref[i]-k)!=mp.end()){
            ans=max(ans,i-mp[pref[i]-k]);
        }

        int x=pref[i];
        
        

        if(mp.find(x)==mp.end()){
            mp[x]=i;
            mp2[x]=i;
        }

    }

    int res=0;

    for(int i=0;i<n;i++){
        if(mp2.find(pref[i]-k)!=mp2.end()){
            if(i-mp2[pref[i]-k] == ans){
                res++;
            }
        }
    }
    // cout<<ans<<endl;
    cout<<res<<endl;
    

}