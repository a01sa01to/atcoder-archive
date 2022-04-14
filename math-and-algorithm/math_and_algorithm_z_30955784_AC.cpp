/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30955784
 * Submitted at: 2022-04-14 11:37:07
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_z
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

/*
$k$ 種類から $k+1$ 種類にするのにかかる回数の期待値が知りたい。<br>
すでにゲットしたコインをまたゲットする確率は $p = k/N$<br>
<ul>
<li>1回で次に行く確率: $1-p$</li>
<li>2回で次に: $p(1-p)$</li>
<li>...</li>
<li>r回以上: $p^{r-1} (1-p)$</li>
</ul>

よって、回数の期待値は
$$\displaystyle \lim_{r\to\infty} \sum_{i=1}^r i p^{i-1} (1-p) =  \lim_{r\to\infty} \frac{(1+r p^{r+1})-(r+1)p^r}{1-p} =\frac{1}{1-p} = \frac{N}{N-k} $$

これのSumをとればOK
*/

int main() {
  int n;
  cin >> n;
  double ans = 0;
  rep(i, n) {
    ans += double(n) / (n - i);
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}