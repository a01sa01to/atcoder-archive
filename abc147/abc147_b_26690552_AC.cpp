/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc147/submissions/26690552
 * Submitted at: 2021-10-19 23:21:47
 * Problem URL: https://atcoder.jp/contests/abc147/tasks/abc147_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int c=0;
  for(int i=0;i<s.size()/2;i++){
    if(s[i]!=s[s.size()-i-1])c++;
  }
  cout<<c<<endl;
}