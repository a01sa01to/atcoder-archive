/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc002/submissions/22073637
 * Submitted at: 2021-04-25 22:39:10
 * Problem URL: https://atcoder.jp/contests/ahc002/tasks/ahc002_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = long long;
using ullvect2d = vector<vector<ull>>;
using pairsull = pair<string,ull>;
#define loop(i,n) for(ull i=0;i<n;i++)
#define close(x,m,n) (x>=m && x<=n)

ull x,y;
ullvect2d tile(50, vector<ull>(50));
ullvect2d score(50, vector<ull>(50));
vector<ull> tap;
ull dir1=1,dir2=1;

bool has(ull x){
  auto itr = find(tap.begin(),tap.end(),x);
  size_t idx = distance(tap.begin(),itr);
  return idx != tap.size();
}
bool canUp(){
  if(y==0){ return false; }
  return !has(tile[y-1][x]);
}
bool canDown(){
  if(y==49){ return false; }
  return !has(tile[y+1][x]);
}
bool canLeft(){
  if(x==0){ return false; }
  return !has(tile[y][x-1]);
}
bool canRight(){
  if(x==49){ return false; }
  return !has(tile[y][x+1]);
}
bool canMove(){ return canUp() || canDown() || canLeft() || canRight(); }
void moveUp(){ y--; cout << "U"; }
void moveDown(){ y++; cout << "D"; }
void moveLeft(){ x--; cout << "L"; }
void moveRight(){ x++; cout << "R"; }
void move1(){  // 右下
  if(canDown()){ moveDown(); }
  else if(canRight()){ moveRight(); }
  else if(canLeft()){ moveLeft(); }
  else if(canUp()){ moveUp(); }
}
void move2(){  // 左下
  if(canDown()){ moveDown(); }
  else if(canLeft()){ moveLeft(); }
  else if(canRight()){ moveRight(); }
  else if(canUp()){ moveUp(); }
}
void move3(){  // 右上
  if(canUp()){ moveUp(); }
  else if(canRight()){ moveRight(); }
  else if(canLeft()){ moveLeft(); }
  else if(canDown()){ moveDown(); }
}
void move4(){  // 左上
  if(canUp()){ moveUp(); }
  else if(canLeft()){ moveLeft(); }
  else if(canRight()){ moveRight(); }
  else if(canDown()){ moveDown(); }
}
int main(){
  cin >> y >> x;
  loop(i,50){
    loop(j,50){
      cin >> tile[i][j];
    }
  }
  loop(i,50){
    loop(j,50){
      cin >> score[i][j];
    }
  }
  while(true){
    tap.push_back(tile[y][x]);
    if(canMove()){
      if(dir1 && dir2){ move1(); }
      else if(dir1){ move2(); }
      else if(dir2){ move3(); }
      else{ move4(); }
      dir2 ^= 1;
      if(y<=3 || y>=46){
        dir1 ^= 1;
      }
    }
    else{ break; }
  }
  cout << endl;
  return 0;
}