/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc120/submissions/26387982
 * Submitted at: 2021-10-06 22:59:55
 * Problem URL: https://atcoder.jp/contests/abc120/tasks/abc120_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
vector<int> s(int x){
  vector<int> v;
  for(int i=1;i*i<=x;i++){
    if(!(x%i)){
      v.push_back(i);
      if(i*i!=x) v.push_back(x/i);
    }
  }
  sort(v.begin(),v.end(),greater<int>());
  return v;
}
int main(){
  int a,b,k;
  cin>>a>>b>>k;
  cout<<s(__gcd(a,b))[k-1]<<endl;
}