/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc003/submissions/26268577
 * Submitted at: 2021-10-02 18:14:32
 * Problem URL: https://atcoder.jp/contests/abc003/tasks/abc003_2
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;
  cin>>s>>t;
  const string a = "atcoder";
  for(int i=0;i<s.size();i++){
    if(s[i]==t[i]) continue;
    if(s[i]=='@' && a.find(t[i])!=string::npos) continue;
    if(t[i]=='@' && a.find(s[i])!=string::npos) continue;
    cout << "You will lose" << endl;
    return 0;
  }
  cout << "You can win" << endl;
}