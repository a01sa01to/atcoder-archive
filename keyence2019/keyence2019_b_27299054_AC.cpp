/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2019/submissions/27299054
 * Submitted at: 2021-11-17 13:04:54
 * Problem URL: https://atcoder.jp/contests/keyence2019/tasks/keyence2019_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  set<string> st;
  st.insert(s);
  for(int i=0;i<s.size();i++) for(int j=i+1;j<=s.size();j++){
    st.insert(s.substr(0,i)+s.substr(j));
  }
  puts(st.count("keyence")?"YES":"NO");
}