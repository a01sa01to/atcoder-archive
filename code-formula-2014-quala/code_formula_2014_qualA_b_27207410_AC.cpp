/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-formula-2014-quala/submissions/27207410
 * Submitted at: 2021-11-13 18:34:01
 * Problem URL: https://atcoder.jp/contests/code-formula-2014-quala/tasks/code_formula_2014_qualA_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
char c(int x){if(x==0)return 'x';if(x==1)return '.';return'o';}
int main(){
  int a,b;cin>>a>>b;
  vector<int> pin(10,0);
  while(a--){int x;cin>>x;pin[x]=1;}
  while(b--){int x;cin>>x;pin[x]=2;}
  printf("%c %c %c %c\n %c %c %c\n  %c %c\n   %c\n",c(pin[7]),c(pin[8]),c(pin[9]),c(pin[0]),c(pin[4]),c(pin[5]),c(pin[6]),c(pin[2]),c(pin[3]),c(pin[1]));
}