/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc014/submissions/26327374
 * Submitted at: 2021-10-03 10:16:47
 * Problem URL: https://atcoder.jp/contests/abc014/tasks/abc014_2
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
using namespace std;main(){int n,x,a=0,i=0,t;cin>>n>>x;for(;i<n;i++){cin>>t;if(x&1<<i)a+=t;}cout<<a<<endl;}