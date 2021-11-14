/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc022/submissions/27264970
 * Submitted at: 2021-11-14 23:52:56
 * Problem URL: https://atcoder.jp/contests/arc022/tasks/arc022_1
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  bool _i=false,c=false,t=false;
  for(int i=0;i<s.size();i++){
    if(s[i]=='I')_i=true;
    if(_i&&s[i]=='C')c=true;
    if(_i&&c&&s[i]=='T')t=true;
    if(s[i]=='i')_i=true;
    if(_i&&s[i]=='c')c=true;
    if(_i&&c&&s[i]=='t')t=true;
  }
  puts(_i&&c&&t?"YES":"NO");
}