/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc130/submissions/26419705
 * Submitted at: 2021-10-09 00:28:09
 * Problem URL: https://atcoder.jp/contests/abc130/tasks/abc130_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
main(){int n,x,a=1,b,m=0;cin>>n>>x;
while(n--){cin>>b;m+=b;if(m<=x)a++;}
cout<<a<<endl;}