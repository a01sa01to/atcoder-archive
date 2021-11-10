/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc124/submissions/27168577
 * Submitted at: 2021-11-10 23:50:49
 * Problem URL: https://atcoder.jp/contests/arc124/tasks/arc124_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef modint998244353 mint;
int main(){
  int n,k;cin>>n>>k;
  vector<int> a(n,0);
  vector<bool> det(n,false);
  for(int _=0;_<k;_++){
    char c;int u;cin>>c>>u;u--;
    det[u]=true;
    for(int i=0;i<n;i++){
      if(c=='L'&&u<=i)a[i]++;
      if(c=='R'&&i<=u)a[i]++;
    }
  }
  mint ans=1;
  for(int i=0;i<n;i++)if(!det[i])ans*=max(a[i],1);
  cout<<ans.val()<<endl;
}