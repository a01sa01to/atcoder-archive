/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/26664717
 * Submitted at: 2021-10-18 13:07:20
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long double ans=0,p;
  while(n--){cin>>p;ans+=1/p;}
  cout<<fixed<<setprecision(15)<<1/ans<<endl;
}