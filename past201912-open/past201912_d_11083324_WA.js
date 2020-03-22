/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/11083324
 * Submitted at: 2020-03-22 20:54:14
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_d
 * Result: WA
 * Execution Time: 2109 ms
 */

function Main(input) {
	input = input.split("\n");
  	const n = input[0];
  	input.splice(0,1)
  	const a = input.map(_=>Number(_));
  	var y,x;
  	for(var i=1; i<=n; i++){
      if(a.indexOf(i) > -1){
      	a.splice(a.indexOf(i), 1);
      }
      else{
        y = i
      }
    }
  	x = a[0];
  	if(!x){
      console.log("Correct");
    }
  	else{
      console.log(`${y} ${x}`);
    }
      
}
//*この行以降は編集しないでください（標準入出力から一度に読み込み、Mainを呼び出します）
Main(require("fs").readFileSync("/dev/stdin", "utf8"));