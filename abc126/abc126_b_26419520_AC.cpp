/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc126/submissions/26419520
 * Submitted at: 2021-10-09 00:11:03
 * Problem URL: https://atcoder.jp/contests/abc126/tasks/abc126_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  int y=stoi(s.substr(0,2)),m=stoi(s.substr(2,2));
  bool ym=(1<=m&&m<=12);
  bool my=(1<=y&&y<=12);
  if(ym&&my) cout<<"AMBIGUOUS"<<endl;
  else if(ym) cout<<"YYMM"<<endl;
  else if(my) cout<<"MMYY"<<endl;
  else cout<<"NA"<<endl;
}