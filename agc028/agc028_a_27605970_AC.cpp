/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc028/submissions/27605970
 * Submitted at: 2021-11-30 22:33:00
 * Problem URL: https://atcoder.jp/contests/agc028/tasks/agc028_a
 * Result: AC
 * Execution Time: 14 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long n,m;string s,t;cin>>n>>m>>s>>t;
  long l=lcm(n,m),a=l/n,b=l/m;
  {
    long i=0,j=0;
    while(i<n&&j<m){
      if(s[i]!=t[j]){puts("-1");return 0;}
      i+=b;j+=a;
    }
  }
  cout<<l<<endl;
}