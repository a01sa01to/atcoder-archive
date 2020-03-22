/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/11080153
 * Submitted at: 2020-03-22 18:48:40
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_c
 * Result: AC
 * Execution Time: 1 ms
 */

#include <iostream>
using namespace std;
 
int main(){
  int n[6];
  for(int i=0; i<6; i++) cin >> n[i];
  int a[6];
  
  for(int j=0; j<6; j++){
    int m=0, idx=-1;
    for(int i=0; i<6; i++){
      idx = ((m < n[i])?i:idx);
      m = ((m < n[i])?n[i]:m);
    }
    a[j] = m;
    n[idx] = 0;
  }
  cout << a[2];
  
  
  
  return 0;
}