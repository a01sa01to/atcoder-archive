/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/11079837
 * Submitted at: 2020-03-22 18:36:49
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_b
 * Result: WA
 * Execution Time: 68 ms
 */

#include <iostream>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  for(int i=1; i<n; i++){
    int p = a[i-1];
    int t = a[i];
    
    if(p<t){
      cout << "up " << p-t;
    }
    if(p==t) cout << "stay";
    if(p>t){
      cout << "down " << t-p;
    }
    cout << "\n";
  }
  
  return 0;
}