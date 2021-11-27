/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/27505991
 * Submitted at: 2021-11-27 13:05:00
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_b
 * Result: WA
 * Execution Time: 77 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector c(n,vector<int>(n));
  vector<int> a(n),b(n);
  {
    tuple<int,int,int> minim={1e9,-1,-1};
  	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
  	  cin>>c[i][j];
      if(get<1>(minim)>c[i][j])minim={c[i][j],i,j};
  	}
  }
}