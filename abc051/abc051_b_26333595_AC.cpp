/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc051/submissions/26333595
 * Submitted at: 2021-10-03 16:15:39
 * Problem URL: https://atcoder.jp/contests/abc051/tasks/abc051_b
 * Result: AC
 * Execution Time: 14 ms
 */

#include<iostream>
main(){
  int k,s,ans=0;std::cin>>k>>s;
  for(int x=0;x<=k;x++)for(int y=0;y<=k;y++)if(0<=s-x-y&&s-x-y<=k)ans++;
  std::cout<<ans<<"\n";
}