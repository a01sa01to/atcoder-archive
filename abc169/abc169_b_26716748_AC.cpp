/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc169/submissions/26716748
 * Submitted at: 2021-10-21 18:59:45
 * Problem URL: https://atcoder.jp/contests/abc169/tasks/abc169_b
 * Result: AC
 * Execution Time: 57 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long a=1;
  vector<long long> b(n);
  const long long e=1e18;
  for(int i=0;i<n;i++){
    cin>>b[i];
    if(!b[i]){puts("0");return 0;}
  }
  for(int i=0;i<n;i++){
    if(b[i]<=e/a){a*=b[i];}
    else{puts("-1");return 0;}
  }
  cout<<a<<endl;
}