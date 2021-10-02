/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc009/submissions/26269187
 * Submitted at: 2021-10-02 18:49:00
 * Problem URL: https://atcoder.jp/contests/abc009/tasks/abc009_2
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;int main(){int n;cin>>n;set<int> s;for(int i=0;i<n;i++){int a;cin>>a;s.insert(a);}cout<<*(--(--s.end()))<<endl;}