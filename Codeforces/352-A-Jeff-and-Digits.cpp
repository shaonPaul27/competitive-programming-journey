//LIFE GOES ON
#include <bits/stdc++.h>
#define MaxThree(a,b,c) max(a,max(b,c)) //finding max between 3 numbers
#define MinThree(a,b,c) min(a,min(b,c)) //finding min between 3 numbers
#define debug(x) cout<<#x<<": "<<x<<endl
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;
#define ll long long
#define LL long long
void solve(){
    int n, sum=0,z=0; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n);
    if(!arr[0]){
        for(auto x: arr){
            sum += x;
            if(x == 0)z++;
        }
        // debug(sum);
        if(sum == 0){
            // debug(sum);
            cout<<0;
            return;
        }
        int i=upper_bound(arr, arr+n, 0) - arr;
        while(sum%9 != 0){
            sum -= arr[i];
            i++;
        }
        if(sum <= 0){
            cout<<0;
            return;
        }
        for(int j=n-1; j>= i; j--)
            cout<<arr[j];
        while(z--)cout<<0;
    }
    else cout<<-1;
}
int main(){
    //--------------------------------------
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //--------------------------------------

    ll testCase = 1;
    // cin>>testCase;
    for(ll test = 1; test<= testCase; test++){
        solve();
        cout<<"\n";
    }
    return 0;
}
