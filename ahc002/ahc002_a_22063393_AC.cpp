/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc002/submissions/22063393
 * Submitted at: 2021-04-25 19:31:19
 * Problem URL: https://atcoder.jp/contests/ahc002/tasks/ahc002_a
 * Result: AC
 * Execution Time: 15 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ullvect2d = vector<vector<ull>>;
#define loop(i,n) for(ull i=0;i<n;i++)

bool has(vector<ull> tap, ull x){
  auto itr = find(tap.begin(),tap.end(),x);
  size_t idx = distance(tap.begin(),itr);
  return idx != tap.size();
}
bool canUp(ullvect2d tile, vector<ull> tap, ull x, ull y){
  if(y==0){ return false; }
  return !has(tap,tile[y-1][x]);
}
bool canDown(ullvect2d tile, vector<ull> tap, ull x, ull y){
  if(y==49){ return false; }
  return !has(tap,tile[y+1][x]);
}
bool canLeft(ullvect2d tile, vector<ull> tap, ull x, ull y){
  if(x==0){ return false; }
  return !has(tap,tile[y][x-1]);
}
bool canRight(ullvect2d tile, vector<ull> tap, ull x, ull y){
  if(x==49){ return false; }
  return !has(tap,tile[y][x+1]);
}

int main(){
  ull x,y;
  cin >> y >> x;
  ullvect2d tile(50, vector<ull>(50));
  vector<ull> tap;
  loop(i,50){
    loop(j,50){
      cin >> tile[i][j];
    }
  }
  loop(i,50){
    loop(j,50){
      int a;
      cin >> a;
    }
  }
  while(true){
  // loop(i,10){
    tap.push_back(tile[y][x]);
    if(canUp(tile,tap,x,y)){ y--; cout << "U"; }
    else if(canDown(tile,tap,x,y)){ y++; cout << "D"; }
    else if(canLeft(tile,tap,x,y)){ x--; cout << "L"; }
    else if(canRight(tile,tap,x,y)){ x++; cout << "R"; }
    else{ break; }
  }
  cout << endl;
  return 0;
}