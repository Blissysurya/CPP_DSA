#include <bits/stdc++.h>

using namespace std;

istream& operator>> (istream& in, vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        in >> vec[i];
    }

    return in;
}

int main(){
    int n;
    cin>>n;

    vector<int> cost(n);

    cin>>cost;

    vector<int> dp(n+1,INT_MAX);

    dp[0]=0;
    dp[1]=0;
    for(int i=1;i<=n;i++){
        if(i+1 <= n){
            dp[i+1]=min(dp[i+1],dp[i]+abs(cost[i]-cost[i-1]));
        }

        if(i+3 <= n){
            dp[i+3]=min(dp[i+3],dp[i]+abs(cost[i+2]-cost[i-1]));
        }
    }

    cout<<dp[n]<<endl;

}