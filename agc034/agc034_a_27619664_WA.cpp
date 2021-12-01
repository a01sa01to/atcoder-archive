/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc034/submissions/27619664
 * Submitted at: 2021-12-01 23:45:58
 * Problem URL: https://atcoder.jp/contests/agc034/tasks/agc034_a
 * Result: WA
 * Execution Time: 15 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c,d;string s;cin>>n>>a>>b>>c>>d>>s;
  {
    bool chk=true;
    for(int i=a;i<max(c,d);++i)if(s[i]=='#'&&s[i+1]=='#')chk=false;
    if(!chk){puts("No");return 0;}
  }
  if(c<d){
    puts("Yes");
  }
  else{
    bool chk=false;
    for(int i=b;i<=d;++i)if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.')chk=true;
   	puts(chk?"Yes":"No");
  }
}