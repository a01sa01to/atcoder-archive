/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc109/submissions/27429248
 * Submitted at: 2021-11-21 22:09:55
 * Problem URL: https://atcoder.jp/contests/arc109/tasks/arc109_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  ll ok=0,ng=1e10;//長さn+1から、長さ1~midが1本ずつできるか
  while(ng-ok>1){
    ll mid=(ok+ng)/2;
    if(mid*(mid+1)/2 <= n+1)ok=mid;else ng=mid;
  }
  cout<<n-ok+1<<endl;
}