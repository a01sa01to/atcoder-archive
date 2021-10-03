/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc021/submissions/26329073
 * Submitted at: 2021-10-03 11:44:38
 * Problem URL: https://atcoder.jp/contests/abc021/tasks/abc021_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
main(){set<int> s;int n,a,b,c,d;cin>>n>>a>>b>>c;s.insert(a);s.insert(b);
while(c--){cin>>d;if(s.count(d)){puts("NO");return 0;}s.insert(d);}puts("YES");}