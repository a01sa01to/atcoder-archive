/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc149/submissions/26690670
 * Submitted at: 2021-10-19 23:28:22
 * Problem URL: https://atcoder.jp/contests/abc149/tasks/abc149_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
main(){
long long a,b,c;cin>>a>>b>>c;a-=c;b+=min(a,0LL);
printf("%ld %ld\n",max(a,0LL),max(b,0LL));
}