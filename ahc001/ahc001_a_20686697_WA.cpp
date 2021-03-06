/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc001/submissions/20686697
 * Submitted at: 2021-03-06 19:44:07
 * Problem URL: https://atcoder.jp/contests/ahc001/tasks/ahc001_a
 * Result: WA
 * Execution Time: 24 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define loop(n) for(ull i=0;i<n;i++)

int indexOf(vector<vector<ull>> v, ull data, ull idx){
  auto itr = find_if(v.begin(),v.end(),[&idx, &data](vector<ull> row){ return row[idx]==data; });
  return itr == v.end() ? -1 : distance(v.begin(),itr);
}

int main(){
  ull n;
  cin >> n;
  vector<vector<ull>> v = {};
  vector<ull> vx = {};
  vector<ull> vy = {};
  loop(n){
    ull x,y,r;
    cin >> x >> y >> r;
    v.push_back({x,y,x+1,y+1});
    vx.push_back(x);
    vy.push_back(y);
  }
  sort(vx.begin(),vx.end());
  sort(vy.begin(),vy.end());
  vector<vector<ull>> v_copy = {};
  copy(v.begin(),v.end(),back_inserter(v_copy));
  loop(n-1){
    if(i==0){
      v[indexOf(v_copy,vx[i],0)][0] = 0;
      v[indexOf(v_copy,vy[i],1)][1] = 0;
    }
    else if(i==n-2){
      v[indexOf(v_copy,vx[i+1],0)][2] = 9999;
      v[indexOf(v_copy,vy[i+1],1)][3] = 9999;
    }
    ull middleX = round((vx[i]+vx[i+1])/2);
    v[indexOf(v_copy,vx[i],0)][2] = middleX;
    v[indexOf(v_copy,vx[i+1],0)][0] = middleX;
    ull middleY = round((vy[i]+vy[i+1])/2);
    v[indexOf(v_copy,vy[i],1)][3] = middleY;
    v[indexOf(v_copy,vy[i+1],1)][1] = middleY;
  }
  loop(n){
    cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << " " << v[i][3] << endl;
  }
  return 0;
}