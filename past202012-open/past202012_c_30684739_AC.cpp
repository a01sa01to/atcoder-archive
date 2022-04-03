/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/30684739
 * Submitted at: 2022-04-03 09:32:00
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int ans;cin>>ans;
  if(ans==0){ cout << 0 << endl; return 0; }
  string t="";
  while(ans){
    if(ans%36 >= 10) t.push_back(ans%36 - 10 + 'A');
    else t.push_back(ans%36 + '0');
    ans /= 36;
  }
  reverse(t.begin(),t.end());
  cout << t <<endl;
}