/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/m-solutions2020/submissions/26978162
 * Submitted at: 2021-11-01 23:01:14
 * Problem URL: https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  for(int i=0;i<1<<d;i++){
    int re=a,gr=b,bl=c;
    for(int j=0;j<d;j++){
      if(i&1<<j) gr*=2;
      else bl*=2;
    }
    if(re<gr&&gr<bl){puts("Yes");return 0;}
  }
  puts("No");
}