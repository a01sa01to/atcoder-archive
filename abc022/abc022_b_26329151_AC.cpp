/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc022/submissions/26329151
 * Submitted at: 2021-10-03 11:48:37
 * Problem URL: https://atcoder.jp/contests/abc022/tasks/abc022_b
 * Result: AC
 * Execution Time: 34 ms
 */

#include <bits/stdc++.h>
using namespace std;
main() {
vector<bool> v(1e5+1);
int n,c=0;cin>>n;
while(n--){int a;cin>>a;if(v[a])c++;else v[a]=1;}
cout<<c<<endl;
}