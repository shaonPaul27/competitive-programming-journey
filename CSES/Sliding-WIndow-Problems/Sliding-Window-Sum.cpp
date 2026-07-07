/*
* Problem    : Sliding Window Sum
* Link       : https://cses.fi/problemset/task/3220
* Platform   : CSES
* Topic      : Two Pointers
* Difficulty : N/A
* Approach   : Sliding Window
* Time       : O(n)
* Space      : O(1)
--------------------------------
* Solver     : Shaon Paul Shanto
* Time       : 7-7-2026
*/

#include<bits/stdc++.h>
using namespace std;
using LL = long long int;
void solve(){
    LL n = 8, k = 5;
    cin>>n>>k;
    LL x=3, a = 7, b = 1, c=11;
    cin>>x>>a>>b>>c;
    vector<LL>series;
    series.push_back(x);
    for(LL i=0; i<n-1; i++){
       x = (a*x + b) % c;
//       cout<<x<<" ";
        series.push_back(x);
    }
//    for(auto x: series) cout<<x<<" ";
//    cout<<endl;
    LL sum = 0;
    for(LL i=0; i<k; i++)sum = sum+series[i];
    LL left = 0, right = k;
    LL ans = sum;
//    cout<<sum<<" ";
    for(LL i=0; i<n-k; i++, left++, right++){
        sum = sum - series[left];
        sum = sum + series[right];
        ans = ans ^ sum;
//        cout<<sum<<" ";
    }
//    cout<<endl;
 
    cout<<ans;
}
int main(){
    LL test = 1;
//    cin>>test;
    while(test --){
        solve();
        cout<<endl;
    }
}