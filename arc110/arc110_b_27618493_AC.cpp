/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc110/submissions/27618493
 * Submitted at: 2021-12-01 22:31:12
 * Problem URL: https://atcoder.jp/contests/arc110/tasks/arc110_b
 * Result: AC
 * Execution Time: 457 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string s;cin>>s;
  {
  	string tmp="";
  	for(int i=0;i<3e5;++i)tmp+="110";
    auto itr=tmp.find(s);
  	if(itr==string::npos){puts("0");return 0;}
  }
  if(n==1&&s=="1")cout<<(long)2e10<<endl;
  else if(n==2&&s=="11")cout<<(long)1e10<<endl;
  else{
    long cnt=0;
    for(int i=0;i<n;++i)if(s[i]=='0')++cnt;
    cout<<(long)1e10-cnt+(s.back()=='0')<<endl;
  }
}