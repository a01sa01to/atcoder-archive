/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc126/submissions/27308507
 * Submitted at: 2021-11-18 00:15:30
 * Problem URL: https://atcoder.jp/contests/arc126/tasks/arc126_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;cin>>n;
  while(n--){
    ll l2,l3,l4;cin>>l2>>l3>>l4;
    l3/=2;//長さ6にする
    ll ans=0;
    //6と4
    ll l34 = min(l3,l4);
    l3-=l34,l4-=l34;ans+=l34;
    //4x2と2
    ll l24 = min(l4/2,l2);
    l2-=l24,l4-=l24*2;ans+=l24;
    //6と2x2
    ll l23 = min(l3,l2/2);
    l3-=l23,l2-=l23*2;ans+=l23;
    //4と2x3
    ll l24_ = min(l4,l2/3);
    l2-=l24_*3,l4-=l24_;ans+=l24_;
    //2x5
    ans+=l2/5;
    
    cout<<ans<<endl;
  }
}