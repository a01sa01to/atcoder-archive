/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc150/submissions/26690708
 * Submitted at: 2021-10-19 23:30:25
 * Problem URL: https://atcoder.jp/contests/abc150/tasks/abc150_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,c=0;
  string s;
  cin>>n>>s;
  for(int i=0;i<=n-3;i++){
    if(s.substr(i,3)=="ABC") c++;
  }
  cout<<c<<endl;
}