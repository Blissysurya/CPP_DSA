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

           

        int cnt=0;
        for(int i=0;i<n;i++){
             if(mp[k-vec[i]]){
                cnt+= mp[k-vec[i]];
            }
            mp[vec[i]]++;

        }

        cout<<cnt<<endl;


}