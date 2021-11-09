/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc052/submissions/27151515
 * Submitted at: 2021-11-09 21:15:34
 * Problem URL: https://atcoder.jp/contests/arc052/tasks/arc052_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  for(int i=0;i<s.size();i++)if(s[i]-'0'>=0 && s[i]-'0'<10)cout<<s[i];
  cout<<endl;
}