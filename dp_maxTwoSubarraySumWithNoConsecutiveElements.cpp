#include <bits/stdc++.h>

using namespace std;

istream& operator>> (istream& in, vector<int>& vec){

    for(int i=0;i<vec.size();i++){
        in>>vec[i];
    }

    return in;
}

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    // cin>>a;
    // cin>>b;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(2));

    dp[0][0]=0;
    dp[0][1]=0;
    dp[1][0]=max(0,a[0]);
    dp[1][1]=max(0,b[0]);

    for(int i=2;i<=n;i++){
       
        if(a[i-1]>0){
            dp[i][0]=a[i-1]+max(dp[i-2][0],dp[i-2][1]);
        }else{  
            dp[i][1]=max(dp[i-2][0],dp[i-2][1]);
        }

        if(b[i-1]>0){
            dp[i][1]=b[i-1]+max(dp[i-2][0],dp[i-2][1]);
        }else{
             dp[i][1]=max(dp[i-2][0],dp[i-2][1]);
        }

    }

    cout<<max(dp[n][0],dp[n][1]);
}