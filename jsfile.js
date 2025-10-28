/*
let mano=49;
console.log(mano);

let mano2="manoranjan baskey";
console.log(mano2);

let a=59+49;
console.log(a);

let inputtag=document.getElementById("thisinput");
inputtag.addEventListener("change",fun1);

function fun1()
{
 console.log(this.value);
}

inputtag.addEventListener("keydown",fun2);
inputtag.addEventListener("keyup",fun3);

function fun3()
{
    console.log("key is up");
}

function fun2()
{
    console.log("key is down");
}

let contain=new Object();
console.log(contain);
contain.name="ram";
console.log(contain.name);

let m1=Math.floor(Math.random()*10);
console.log(m1);

contain.sum=function(){
    console.log("sum of a and b is c");
};

contain.sum();

function manoranjan(){
    console.log("this is the mono function");
}

contain.ranjan=manoranjan;
contain.ranjan();

let manor=["ram", "sita", "geeta"];
console.log(manor);

let store=new Array("tony", "captain","peter");
console.log(store); */

let array=new Array(1,49,399);
console.log(array);
console.log(array.length);
array.unshift(13);
array.unshift(44);
array.unshift(55);
console.log(array.length);