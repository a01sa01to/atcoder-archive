/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc201/submissions/22620834
 * Submitted at: 2021-05-15 21:44:55
 * Problem URL: https://atcoder.jp/contests/abc201/tasks/abc201_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int count = 0;
  for(int i=0;i<10000;i++){
    bool chk = true;
    vector<int> input(10,0);
    for(int j=0;j<4;j++){
      int digit = (int)floor(i/pow(10,j))%10;
      input[digit]++;
    }
    for(int j=0;j<10;j++){
      if(input[j]>0 && s[j]=='x'){ chk=false; }
      else if(input[j]==0 && s[j]=='o'){ chk=false; }
    }
    if(chk){ count++; }
  }
  cout << count << endl;
  return 0;
}