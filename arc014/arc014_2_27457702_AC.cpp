/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc014/submissions/27457702
 * Submitted at: 2021-11-23 15:44:22
 * Problem URL: https://atcoder.jp/contests/arc014/tasks/arc014_2
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string prev;cin>>prev;
  set<string>st;st.insert(prev);
  for(int i=1;i<n;i++){
    string s;cin>>s;
    if(prev.back()!=s.front() || st.count(s)){puts(i%2?"WIN":"LOSE");return 0;}
    st.insert(s);prev=s;
  }
  puts("DRAW");
}