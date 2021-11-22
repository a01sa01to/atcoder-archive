/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc007/submissions/27439303
 * Submitted at: 2021-11-22 10:22:34
 * Problem URL: https://atcoder.jp/contests/arc007/tasks/arc007_2
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  vector<int> a(n);iota(a.begin(),a.end(),1);
  int p=0;
  for(int i=0;i<m;i++){
    int b;cin>>b;
    for(int j=0;j<n;j++)if(a[j]==b){swap(a[j],p);break;}
  }
  for(int i=0;i<n;i++)cout<<a[i]<<endl;
}