/*
* Problem    : Books
* Link       : https://codeforces.com/contest/279/problem/B
* Platform   : Codeforces
* Topic      : Two Pointers
* Difficulty : 1400
* Approach   : Use sliding window technic.
* Time       : O(n)
* Space      : N/A
--------------------------------
* Solver     : Shaon Paul Shanto
* Time       : 5-7-2026
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
    int n, time;
    cin>>n>>time;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int left = 0, right =0,sum = 0, mx = INT_MIN;
    for(; right<n; right++){
        sum = sum + arr[right];
        if(sum > time){
            while (sum>time)
            {
                sum = sum - arr[left];
                left++;
            }
        }
        mx = max(mx, right-left + 1);
    }
    cout<<mx;
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