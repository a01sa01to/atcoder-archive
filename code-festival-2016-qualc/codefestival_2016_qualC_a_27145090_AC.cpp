/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-qualc/submissions/27145090
 * Submitted at: 2021-11-09 13:24:48
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  bool c=false,f=false;
  for(int i=0;i<s.size();i++){
    if(s[i]=='C')c=true;
    if(c&&s[i]=='F')f=true;
  }
  puts(c&&f?"Yes":"No");
}