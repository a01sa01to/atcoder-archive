/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc031/submissions/27028032
 * Submitted at: 2021-11-05 01:01:32
 * Problem URL: https://atcoder.jp/contests/arc031/tasks/arc031_1
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  bool chk=true;
  for(int i=0;i<s.size()/2;i++)if(s[i]!=s[s.size()-i-1])chk=false;
  puts(chk?"YES":"NO");
}