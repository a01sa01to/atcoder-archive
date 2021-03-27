/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc197/submissions/21303986
 * Submitted at: 2021-03-27 21:23:39
 * Problem URL: https://atcoder.jp/contests/abc197/tasks/abc197_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define loop(n,i) for(int i=0;i<n;i++)

int main(){
  int h,w,x,y;
  int c = 0;
  vector<string> s;
  cin >> h >> w >> y >> x;
  loop(h,i){
    string a;
    cin >> a;
    s.push_back(a);
  }
  for(int i=x;i<w;i++){
    if(s[y-1][i] == '.'){ c++; }
    else{ break; }
  }
  for(int i=x-1;i>=0;i--){
    if(s[y-1][i] == '.'){ c++; }
    else{ break; }
  }
  for(int i=y;i<h;i++){
    if(s[i][x-1] == '.'){ c++; }
    else{ break; }
  }
  for(int i=y-1;i>=0;i--){
    if(s[i][x-1] == '.'){ c++; }
    else{ break; }
  }
  cout << --c << endl;
  return 0;
}