/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jsc2019-qual/submissions/26958120
 * Submitted at: 2021-10-31 21:49:55
 * Problem URL: https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_a
 * Result: AC
 * Execution Time: 3 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c=0;
  cin>>a>>b;
  for(int m=1;m<=a;m++)for(int d=1;d<=b;d++){
    if(d%10>1&&d/10>1&&(d%10)*(d/10)==m)c++;
  }
  cout<<c<<endl;
}