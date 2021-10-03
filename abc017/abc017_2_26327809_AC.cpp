/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc017/submissions/26327809
 * Submitted at: 2021-10-03 10:45:01
 * Problem URL: https://atcoder.jp/contests/abc017/tasks/abc017_2
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin>>s;
  string x="abdefghijlmnpqrstvwxyz";
  for(int i=0;i<s.size();i++){
    if(x.find(s[i])!=string::npos){puts("NO");return 0;}
    if(i<s.size()-1&&s[i]=='c'){
      if(s[i + 1]=='h')i++;
      else{puts("NO");return 0;}
    }
  }
  puts("YES");
  return 0;
}