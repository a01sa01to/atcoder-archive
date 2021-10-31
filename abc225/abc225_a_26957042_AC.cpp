/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/26957042
 * Submitted at: 2021-10-31 21:28:55
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  set<string> st;
  sort(s.begin(),s.end());
  do{ st.insert(s); }while(next_permutation(s.begin(),s.end()));
  cout<<st.size()<<endl;
}