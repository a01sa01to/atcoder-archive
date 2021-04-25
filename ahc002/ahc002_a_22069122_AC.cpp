/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc002/submissions/22069122
 * Submitted at: 2021-04-25 21:28:52
 * Problem URL: https://atcoder.jp/contests/ahc002/tasks/ahc002_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ullvect2d = vector<vector<ull>>;
using pairsull = pair<string,ull>;
#define loop(i,n) for(ull i=0;i<n;i++)

ull x,y;
ullvect2d tile(50, vector<ull>(50));
ullvect2d score(50, vector<ull>(50));
vector<ull> tap;

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
  else if(canUp()){ moveUp(); }
  else if(canLeft()){ moveLeft(); }
}
void move2(){  // 左下
  if(canDown()){ moveDown(); }
  else if(canLeft()){ moveLeft(); }
  else if(canUp()){ moveUp(); }
  else if(canRight()){ moveRight(); }
}
void move3(){  // 右上
  if(canUp()){ moveUp(); }
  else if(canRight()){ moveRight(); }
  else if(canDown()){ moveDown(); }
  else if(canLeft()){ moveLeft(); }
}
void move4(){  // 左上
  if(canUp()){ moveUp(); }
  else if(canLeft()){ moveLeft(); }
  else if(canDown()){ moveDown(); }
  else if(canRight()){ moveRight(); }
}
void move5(){  // 上
  if(canUp()){ moveUp(); }
  else if(canDown()){ moveDown(); }
  else if(canRight()){ moveRight(); }
  else if(canLeft()){ moveLeft(); }
}
void move6(){  // 左
  if(canLeft()){ moveLeft(); }
  else if(canRight()){ moveRight(); }
  else if(canUp()){ moveUp(); }
  else if(canDown()){ moveDown(); }
}
void move7(){  // 下
  if(canDown()){ moveDown(); }
  else if(canUp()){ moveUp(); }
  else if(canRight()){ moveRight(); }
  else if(canLeft()){ moveLeft(); }
}
void move8(){  // 右
  if(canRight()){ moveRight(); }
  else if(canLeft()){ moveLeft(); }
  else if(canUp()){ moveUp(); }
  else if(canDown()){ moveDown(); }
}
void bestmove(){
  vector<pairsull> a;
  if(canUp()){ a.push_back(make_pair("U",score[y-1][x])); }
  if(canDown()){ a.push_back(make_pair("D",score[y+1][x])); }
  if(canLeft()){ a.push_back(make_pair("L",score[y][x-1])); }
  if(canRight()){ a.push_back(make_pair("R",score[y][x+1])); }
  sort(a.begin(),a.end(),[](const pairsull &b,const pairsull &c){return b.second > c.second;});
  pairsull bestMove = a[0];
  if(bestMove.first == "U"){ moveUp(); }
  else if(bestMove.first == "D"){ moveDown(); }
  else if(bestMove.first == "L"){ moveLeft(); }
  else if(bestMove.first == "R"){ moveRight(); }
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
      if(x<20 && y<20){ move1(); }
      else if(x<30 && y<20){ move7(); }
      else if(x<50 && y<20){ move2(); }
      else if(x<20 && y<30){ move8(); }
      else if(x<30 && y<30){ bestmove(); }
      else if(x<50 && y<30){ move6(); }
      else if(x<20 && y<50){ move3(); }
      else if(x<30 && y<50){ move5(); }
      else if(x<50 && y<50){ move4(); }
    }
    else{ break; }
  }
  cout << endl;
  return 0;
}