/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/11079973
 * Submitted at: 2020-03-22 18:41:50
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_c
 * Result: WA
 * Execution Time: 1 ms
 */

#include <iostream>
using namespace std;

int main(){
  int n[6];
  for(int i=0; i<6; i++) cin >> n[i];
  int a[6];
  
  for(int j=0; j<6; j++){
    int m;
    for(int i=0; i<6; i++){
      m = ((m < n[i])?n[i]:m);
    }
    a[j] = m;
  }
  cout << a[2];
  
  
  
  return 0;
}