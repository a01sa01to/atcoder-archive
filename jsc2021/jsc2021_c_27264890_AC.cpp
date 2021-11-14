/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jsc2021/submissions/27264890
 * Submitted at: 2021-11-14 23:48:19
 * Problem URL: https://atcoder.jp/contests/jsc2021/tasks/jsc2021_c
 * Result: AC
 * Execution Time: 219 ms
 */

#include<bits/stdc++.h>
using namespace std;
vector<int> divisor(int x){
  vector<int> ret;
  for(int i=2;i*i<=x;i++){
    if(x%i)continue;
    ret.push_back(i);
    if(i*i!=x)ret.push_back(x/i);
  }
  ret.push_back(1);
  ret.push_back(x);
  sort(ret.begin(),ret.end());
  return ret;
}
int main(){
  int a,b;cin>>a>>b;
  int ans=0;
  for(int i=a;i<b;i++){
    vector<int> div = divisor(i);
    for(const int x:div)if(i+x<=b)ans=max(ans,x);
  }
  cout<<ans<<endl;
}