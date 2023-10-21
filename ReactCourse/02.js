// tipos de datos en JS

//undefined
let cliente;
console.log(cliente);
console.log(typeof cliente);

//Boolean
cliente = true;
console.log(cliente);
console.log(typeof cliente);

//Number
const numero1=20;
const numero2=20.20;
const numero3= -30;

console.log(numero1); // regresa un numero entero
console.log(numero2); // regresa un numero decimal
console.log(numero3); // regresa un numero negativo


console.log(typeof numero1); 
console.log(typeof numero2);
console.log(typeof numero3);

//String
const nombre = "Juan";
let producto = 'Monitor de 20 pulgadas';
const numero= "30";

console.log(nombre);
console.log(typeof nombre);

//bigInt

const numeroGrande= BigInt(100000000000000000); // se le agrega la palabra BigInt para que JS lo reconozca como un numero grande
console.log(numeroGrande); // regresa un numero entero
console.log(typeof numeroGrande); // regresa un numero entero
const numero4=10; // regresa un numero entero

//Number es un tipo de dato que puede ser entero o decimal
console.log(numero4+Number(numeroGrande)); // Podemoos sumar un numero entero con un numero grande si le agregamos la palabra Number

//symbol 

//Lo que hace s
const primersymbol= Symbol(30);
const segundosymbol= Symbol(30);

//podemos ocmparar dos symbolos 
console.log(primersymbol === segundosymbol); // regresa false ya que cada symbolo es unico


//para obtener los valores de los simbolos
console.log(primersymbol.valueOf());
console.log(segundosymbol.valueOf());

//Null
let valor=null;
console.log(valor);
console.log(typeof valor); // regresa un objeto NULO