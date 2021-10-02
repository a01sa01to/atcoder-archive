/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/26261628
 * Submitted at: 2021-10-02 09:58:32
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i=0;i<3;i++) if(s[i]=='7'){cout<<"Yes"<<endl;return 0;}
  cout<<"No"<<endl;
}