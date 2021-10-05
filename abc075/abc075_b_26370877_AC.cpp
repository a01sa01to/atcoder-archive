/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc075/submissions/26370877
 * Submitted at: 2021-10-05 22:19:28
 * Problem URL: https://atcoder.jp/contests/abc075/tasks/abc075_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  cin>>h>>w;
  vector<string> v(h);
  for(int i=0;i<h;i++) cin>>v[i];
  for(int i=0;i<h;i++) for(int j=0;j<w;j++){
    if(v[i][j]=='#') continue;
    int m=0;
    if(i>0   && j>0   && v[i-1][j-1]=='#') m++;
    if(i>0   &&          v[i-1][j  ]=='#') m++;
    if(i>0   && j<w-1 && v[i-1][j+1]=='#') m++;
    if(         j>0   && v[i  ][j-1]=='#') m++;
    if(         j<w-1   && v[i  ][j+1]=='#') m++;
    if(i<h-1 && j>0   && v[i+1][j-1]=='#') m++;
    if(i<h-1          && v[i+1][j  ]=='#') m++;
    if(i<h-1 && j<w-1 && v[i+1][j+1]=='#') m++;
    v[i][j]='0'+m;
  }
  for(string s:v)cout<<s<<endl;
}