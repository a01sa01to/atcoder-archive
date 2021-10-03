/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc017/submissions/26327675
 * Submitted at: 2021-10-03 10:37:33
 * Problem URL: https://atcoder.jp/contests/abc017/tasks/abc017_2
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;cin>>s;
  while(!s.empty()){
    if(s.back()=='h'){s.pop_back();
      if(s.back()=='c')s.pop_back();
      else break;
    }
    else if(s.back()=='o'||s.back()=='k'||s.back()=='u')s.pop_back();
    else break;
  }
  puts(s.empty()?"YES":"NO");
}