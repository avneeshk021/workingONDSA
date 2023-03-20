// let fs = require("fs");
// let data = fs.readFileSync(0, 'utf-8');
// let idx = 0;
// data = data.split('\n');

// function readLine() {
//   idx++;
//   return data[idx - 1];
// }

// let n = readLine();
// let arr = []
// for (let i = 0; i < n.length; i++) {
//     arr.push(n[i]);          // arr=[3,2,1,3] ,, arr[0]=3
// }
// for(let j=0;j<arr.length;j--){
//     let brr = [];
//     brr.push(arr[j]);
// }
// console.log(arr);
// const num = 124323;
// const reverse = (num) => parseInt(String(num)
// .split("")
// .reverse()
// .join(""), 10);
// console.log(reverse(num));
// function func() {
    
//     var arr = [1,2,3];
//     console.log(arr);
     
    
//     var new_arr = arr.reverse();
//     console.log(new_arr);
// }
// func();

// var findLucky = function(arr)
//  {
//     arr.sort((a,b) => b-a)

//     let map = {}

//     for(let i=0; i<arr.length; i++)
//     {
//         if(!map[arr[i]]){
//             map[arr[i]] = 1
//         } else {
//             map[arr[i]]++
//         }
//     }
//     for(let i=0; i<arr.length; i++){
//         if(arr[i] === map[arr[i]]){
//             return arr[i]
//         }
//     }
//     return -1
// };

// let n = readLine();
let arr = [4,2,2,3,4];
let count = 1;
// for(let i=0;i<n;i++){
//     arr.push(n[i]);
// }
for(let i=1; i<=arr.length;i++){
   if(arr[i]==arr[i-1])
   count++;
else {
if(arr[i-1]==count)
return count;
count=-1;
}


}

