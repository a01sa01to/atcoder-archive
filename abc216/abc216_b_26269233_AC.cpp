/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc216/submissions/26269233
 * Submitted at: 2021-10-02 18:51:39
 * Problem URL: https://atcoder.jp/contests/abc216/tasks/abc216_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  set<string> st;
  for(int i=0;i<n;i++){
    string s,t;
  	cin>>s>>t;
    if(st.count(s+" "+t)){cout<<"Yes"<<endl;return 0;}
    st.insert(s+" "+t);
  }
  cout<<"No"<<endl;return 0;
}