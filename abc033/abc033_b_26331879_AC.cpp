/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc033/submissions/26331879
 * Submitted at: 2021-10-03 14:44:27
 * Problem URL: https://atcoder.jp/contests/abc033/tasks/abc033_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
struct P{int x;string y;};
main(){
  int n;cin>>n;P p,q;cin>>p.y>>p.x;int s=p.x;
  while(--n){cin>>q.y>>q.x;s+=q.x;if(p.x < q.x)swap(p,q);}
  cout<<(s/2<p.x?p.y:"atcoder")<<endl;
}