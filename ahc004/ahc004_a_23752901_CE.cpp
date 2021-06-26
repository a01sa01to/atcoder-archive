/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc004/submissions/23752901
 * Submitted at: 2021-06-26 19:49:37
 * Problem URL: https://atcoder.jp/contests/ahc004/tasks/ahc004_a
 * Result: CE
 * Execution Time: None ms
 */

(function(_____){
	// 1行目がinput[0], 2行目がinput[1], …に入る
	const input = _____.split("\n");
  const [n,m] = input[0].split(" ").map(_=>Number(_));
  let a=[], b=input.slice(1);
  b = b.sort((x,y)=>y.length - x.length)
  
  let prev = "";
  for(let i=0;i<b.length;i++){
    if(prev.length + b[i].length > n){
      const l = n-prev.length;
      const itr = b.filter(_=>_.length===l)[0]
      if(itr){
        prev += itr;
        b = b.filter(_=>_!==itr)
      }
      else{ prev += ".".repeat(l); }
      a.push(prev);
      prev = "";
    }
    prev += b[i];
  }
  console.log(a.slice(0,20).join("\n"));
})(require("fs").readFileSync("/dev/stdin", "utf8"))