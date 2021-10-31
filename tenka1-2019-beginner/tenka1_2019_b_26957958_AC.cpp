/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/26957958
 * Submitted at: 2021-10-31 21:46:33
 * Problem URL: https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;string s;cin>>a>>s>>b;b--;
  for(int i=0;i<a;i++)if(s[i]!=s[b])s[i]='*';
  cout<<s<<endl;
}