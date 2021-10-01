/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc093/submissions/26255234
 * Submitted at: 2021-10-01 21:22:08
 * Problem URL: https://atcoder.jp/contests/abc093/tasks/abc093_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  string t="abc";
  do{if(s==t){cout<<"Yes"<<endl;return 0;}}while(next_permutation(t.begin(),t.end()));
  cout<<"No"<<endl;
}