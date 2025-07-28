#include <bits/stdc++.h>

using namespace std;

istream& operator>> (istream& in, vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        in>>vec[i];
    }

    return in;
}

int main(){

    string s;
    cin>>s;

    int k;
    cin>>k;

    int n=s.size();

    vector<int> dp(n+1);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        if(abs(s[i-1]-s[i-2])<= k ){
            dp[i]=dp[i-1]+1;
        }else{
            dp[i]=1;
        }
    }

    int ans=0;

    for(int i=1;i<=n;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
}