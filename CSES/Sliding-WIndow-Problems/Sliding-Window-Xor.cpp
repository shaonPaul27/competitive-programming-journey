/*
* Problem    : Sliding Window Xor
* Link       : https://cses.fi/problemset/task/3426
* Platform   : CSES
* Topic      : Two Pointers
* Difficulty : N/A
* Approach   : Sliding Window [Hint: the xor of same number is zero. ex: 2 ^ 2 ^ 3 = 3]
* Time       : O(N)
* Space      : O(1)
--------------------------------
* Solver     : Shaon Paul Shanto
* Time       : 7-7-2026
*/

#include <bits/stdc++.h>
 
#define MaxThree(a,b,c) max(a,max(b,c)) //finding max between 3 numbers
#define MinThree(a,b,c) min(a,min(b,c)) //finding min between 3 numbers
 
#define debug(x) cout<<#x<<": "<<x<<endl
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define ll long long
#define LL long long
using namespace std;
void solve(){
    //input data generator start
    LL n = 8, k = 5;
    cin>>n>>k;
    LL x=3, a = 7, b = 1, c=11;
    cin>>x>>a>>b>>c;
    vector<LL>inputSeries;
    inputSeries.push_back(x);
    for(LL i=0; i<n-1; i++){
       x = (a*x + b) % c;
//       cout<<x<<" ";
        inputSeries.push_back(x);
    }
    // for(auto x: inputSeries) cout<<x<<" ";
    // cout<<endl;
    //input generator end
    ll xorOneWindow = 0, xorAllWindow = 0;
    for(int i=0; i<k; i++) xorOneWindow = xorOneWindow ^ inputSeries[i];
    xorAllWindow = xorOneWindow;
//    cout<<xorOneWindow<<" ";
    for(int i=0, j = k; i<n-k; i++,j++){
        xorOneWindow = xorOneWindow ^ inputSeries[i];
        xorOneWindow = xorOneWindow ^ inputSeries[j];
        xorAllWindow = xorAllWindow ^ xorOneWindow;
    }
    cout<<xorAllWindow;
}
 
int main(){
    ll testCase = 1;
    // cin>>testCase;
    for(ll test = 1; test<= testCase; test++){
        solve();
        cout<<"\n";
    }
    return 0;
}