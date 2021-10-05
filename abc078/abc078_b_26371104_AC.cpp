/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc078/submissions/26371104
 * Submitted at: 2021-10-05 22:30:25
 * Problem URL: https://atcoder.jp/contests/abc078/tasks/abc078_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int x,y,z;
  cin>>x>>y>>z;
  int ans=1;
  while(true){ans++;if(ans*y + (ans+1)*z > x){ans--;break;}}
  cout<<ans<<endl;
}