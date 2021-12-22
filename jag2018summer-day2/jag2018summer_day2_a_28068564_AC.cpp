/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jag2018summer-day2/submissions/28068564
 * Submitted at: 2021-12-23 00:12:24
 * Problem URL: https://atcoder.jp/contests/jag2018summer-day2/tasks/jag2018summer_day2_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long x,y,z;cin>>x>>y>>z;
  long ans=z;
  while(true){
    if(ans%17==x&&ans%107==y){
      cout<<ans<<endl;
      return 0;
    }
    ans+=1e9+7;
  }
}