/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc049/submissions/27200437
 * Submitted at: 2021-11-13 11:43:32
 * Problem URL: https://atcoder.jp/contests/arc049/tasks/arc049_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;int a;cin>>s>>a;
  for(int i=0;i<s.size();i++){
    if(i==a){cout<<"\"";cin>>a;}
    cout<<s[i];
  }
  if(a==s.size())cout<<"\"";
  cout<<endl;
}