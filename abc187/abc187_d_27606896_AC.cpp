/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc187/submissions/27606896
 * Submitted at: 2021-11-30 23:19:44
 * Problem URL: https://atcoder.jp/contests/abc187/tasks/abc187_d
 * Result: AC
 * Execution Time: 126 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long n,a,b;cin>>n;
  vector<long>v(n);
  long aov=0;
  for(int i=0;i<n;++i){long a,b;cin>>a>>b;aov+=a;v[i]=a*2+b;}
  sort(v.begin(),v.end(),greater<long>());
  for(int i=0;i<n;++i){
    if(aov<0){cout<<i<<endl;return 0;}
    aov-=v[i];
  }
  cout<<n<<endl;
}