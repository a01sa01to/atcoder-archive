/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2021/submissions/27207294
 * Submitted at: 2021-11-13 18:27:14
 * Problem URL: https://atcoder.jp/contests/keyence2021/tasks/keyence2021_b
 * Result: AC
 * Execution Time: 1468 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  vector<int> ball(n),box(k,0);
  for(int i=0;i<n;i++)cin>>ball[i];
  sort(ball.begin(),ball.end());
  for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
      if(box[j]==ball[i]){box[j]++;break;}
    }
  }
  cout<<accumulate(box.begin(),box.end(),0)<<endl;
}