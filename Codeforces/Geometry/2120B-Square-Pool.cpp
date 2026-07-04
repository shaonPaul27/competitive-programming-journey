/*
* Problem    : Square Pool
* Link       : https://codeforces.com/problemset/problem/2120/B
* Platform   : Codeforces
* Topic      : Geometry
* Difficulty : 1000
* Approach   : If points place in Diagonal, then check the hitting degree. Consider all 	       coordinates.
* Time       : N/A
* Space      : O(1)
--------------------------------
* Solver     : Shaon Paul Shanto
* Time       : 4-7-2026
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int test; cin>>test;
    while (test--)
    {
        int point, n;
        cin>>point>>n;
        int cnt = 0;
        while (point--)
        {
            int dx, dy,x,y;
            cin>>dx>>dy>>x>>y;
            if(x == y or x+y == n){
                if(x == y){
                    if(x+y == n){
                        cnt++;
                    }
                    else{
                        int s = dx+ dy;
                        if(s == 2 or s == -2){
                            cnt++;
                        }
                    }
                }
                else{
                    int s = dx+ dy;
                    if(s == 0)cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}