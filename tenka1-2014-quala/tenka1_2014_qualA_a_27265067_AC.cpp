/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2014-quala/submissions/27265067
 * Submitted at: 2021-11-14 23:59:59
 * Problem URL: https://atcoder.jp/contests/tenka1-2014-quala/tasks/tenka1_2014_qualA_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<string> ans;
  for(int i=1;i<=1000;i++){
    ans.push_back(to_string(i));
  }
  sort(ans.begin(),ans.end());
  for(string x:ans)cout<<x<<endl;
}