/*
* Problem    : WonderFul Gloves
* Link       : https://codeforces.com/problemset/problem/2096/B
* Platform   : Codeforces
* Topic      : Greedy, Math, Sorting
* Difficulty : 1100
* Approach   : Pigenhole Theorem. check for the worst case.
* Time       : N/A
* Space      : O(1)
--------------------------------
* Solver     : Shaon Paul Shanto
* Time       : 6-7-2026
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
    ll n = 5, k =2;
    cin>>n>>k;
    vector<ll>one(n), two(n);
    // 97 59 50 87 36
    // 95 77 33 13 74
    for(ll i=0; i<n; i++) cin>>one[i];
    for(ll i=0; i<n; i++) cin>>two[i];

    vector<ll>firstTook, secondTook;
    for(ll i=0; i<n; i++){
        if(one[i]>two[i]){
            firstTook.push_back(one[i]);
            secondTook.push_back(two[i]);
        }
        else {
            firstTook.push_back(two[i]);
            secondTook.push_back(one[i]);
        }
    }
    ll sum = 0;
    for(auto x: firstTook) sum = sum + x;
    sort(secondTook.rbegin(), secondTook.rend());
    // reverse(secondTook.begin(), secondTook.end());
    for(ll i=0; i<k-1; i++){
        sum = sum + secondTook[i];
    }
    cout<<sum+1;
}
int main(){
    ll testCase = 1;
    cin>>testCase;
    for(ll test = 1; test<= testCase; test++){
        solve();
        cout<<"\n";
    }
    return 0;
}
