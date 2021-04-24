/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/21999873
 * Submitted at: 2021-04-24 21:05:08
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)

int main(){
  int n;
  cin >> n;
  int minim=0,maxim=1000;
  loop(i,n){
    int a;
    cin >> a;
    minim = max(minim,a);
  }
  loop(i,n){
    int b;
    cin >> b;
    maxim = min(maxim,b);
  }
  cout << (minim<=maxim?(maxim-minim+1):0) << endl;
  return 0;
}