/*
* Problem    : 1D Eraser
* Link       : https://codeforces.com/contest/1873/problem/D
* Platform   : Codeforces
* Topic      : Two Pointers
* Difficulty : 800
* Approach   : N/A
* Time       : O(n)
* Space      : N/A
--------------------------------
* Solver     : Shaon Paul Shanto
* Time       : 6-7-2026
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int test; cin>>test;
    while(test--){
        int n, k, cnt = 0, i=0;
        string s, ans ="";
        cin>>n>>k>>s;
        while(ans.size() < s.size()){
            if(s[i] == 'W') {
                ans.push_back('W');
                i++;
            }
            else{
                for(int j=0; j<k; j++){
                    ans.push_back('W');
                }
                i = i+ k;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}