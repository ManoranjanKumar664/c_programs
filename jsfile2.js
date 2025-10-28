/*let mano=new Array();
console.log(mano.length);
console.log(mano);

let mano2=new Array("ram", "sita","geeta","pritam");
console.log(mano2.length);
console.log(mano2);
mano2.push("maan");
mano2.pop();
mano2.unshift("rupa");
mano2.shift();
console.log(mano2[0]);
console.log(mano2);

for(let i=0;i<mano2.length;i++)
{
    console.log(mano2[i]);
}

//mano2.length=0;
mano2=[];
console.log(mano2);
//console.log(mano2);
//let mano3=[];
//console.log(mano3); */

let values=new Array(2, 3, 4, 5, 7);
console.log(values);
values[0]=49;
console.log(values);

values.splice(2,2);
console.log(values);

let text="this is a random text";
let wordarray=text.split(" ");
console.log(wordarray);
let sentence=values.join(" ");
console.log(sentence);

let con1=values.concat(wordarray);
//console.log(con1);

con1.forEach(f);
function f(x)
{
    console.log(x);
}