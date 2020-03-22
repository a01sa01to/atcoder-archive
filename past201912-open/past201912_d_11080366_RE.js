/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/11080366
 * Submitted at: 2020-03-22 18:58:07
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_d
 * Result: RE
 * Execution Time: 50 ms
 */

function Main(input) {
	input = input.split("\n");
  	const n = input[0];
  	const a = input.splice(0,1);
  	let y,x;
  	for(let i=1; i<=n; i++){
      const idx = arr.indexOf(i);
      if(a[idx]){
      	a.splice(idx, 1);
      }
      else{
        y = i
      }
    }
  	x = a[0];
  	if(x){
      console.log("Correct");
    }
  	else{
      console.log(`${y} ${x}`);
    }
      
}
//*この行以降は編集しないでください（標準入出力から一度に読み込み、Mainを呼び出します）
Main(require("fs").readFileSync("/dev/stdin", "utf8"));