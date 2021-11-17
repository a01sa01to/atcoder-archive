/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc003/submissions/27299066
 * Submitted at: 2021-11-17 13:07:38
 * Problem URL: https://atcoder.jp/contests/arc003/tasks/arc003_1
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  long double ans=0;
  for(int i=0;i<n;i++){char c;cin>>c;ans+=max(4-(c-'A'),0);}
  cout<<fixed<<setprecision(15)<<ans/n<<endl;
}