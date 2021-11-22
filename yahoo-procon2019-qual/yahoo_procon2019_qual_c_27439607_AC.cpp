/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/yahoo-procon2019-qual/submissions/27439607
 * Submitted at: 2021-11-22 11:00:33
 * Problem URL: https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_c
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll k,a,b;cin>>k>>a>>b;
  ll ans=0;
  {
    const ll _k=k;
    //まずはa枚までふやす
    k-=a-1;
    //a枚で1円->1円でb枚->a枚で...
    ans=b+(b-a)*(k/2-1);
    if(k%2)ans++;
    k=_k;
  }
  {
    //全部たたく
    ans=max(1+k,ans);
  }
  cout<<ans<<endl;
}