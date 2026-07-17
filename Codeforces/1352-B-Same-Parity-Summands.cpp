#include <bits/stdc++.h>
#define MaxThree(a,b,c) max(a,max(b,c)) //finding max between 3 numbers
#define MinThree(a,b,c) min(a,min(b,c)) //finding min between 3 numbers
#define debug(x) cout<<#x<<": "<<x<<endl
#define DEBUG(x) cout<<#x<<": "<<x<<endl

using namespace std;

#define ll long long
#define LL long long
void solve(){

    int sum, n; cin>>sum>>n;
    if(n>sum)cout<<"NO";
    else if((sum - (n - 1)) % 2 != 0){
        cout<<"YES\n";
        for(int i=0; i<n-1; i++)
            cout<<1<<" ";
        cout << sum - n + 1;
    }
    else if(sum % 2 == 0 and n <= sum / 2){
        cout<<"YES\n";
        for(int i=0; i<n-1; i++)
            cout<<2<<" ";
        cout<< sum - 2*(n-1);
    }
    else cout<<"NO";
}

int main(){
    //--------------------------------------
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //--------------------------------------
    //LIFE GOES ON

    ll testCase = 1;
    cin>>testCase;
    for(ll test = 1; test<= testCase; test++){
        solve();
        cout<<"\n";
    }
    return 0;
}
