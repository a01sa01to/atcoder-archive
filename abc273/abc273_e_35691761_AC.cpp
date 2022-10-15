/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35691761
 * Submitted at: 2022-10-15 22:32:25
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_e
 * Result: AC
 * Execution Time: 435 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct L {
  int data;
  L* prev;
};

int main() {
  int q;
  scanf("%d", &q);
  struct L start = { -1, NULL };
  struct L* head = NULL;
  map<int, struct L*> mp;
  while (q--) {
    char s[10];
    int x;
    scanf("%s", s);
    if (s[0] == 'D') {
      if (head != NULL) head = head->prev;
    }
    else {
      scanf("%d", &x);
      if (s[0] == 'A') {
        struct L* l = (struct L*) malloc(sizeof(L));
        l->data = x;
        l->prev = head;
        head = l;
      }
      else if (s[0] == 'S') {
        mp[x] = head;
      }
      else {
        head = mp[x];
      }
    }
    printf("%d ", head == NULL ? -1 : head->data);
  }
  printf("\n");
}
