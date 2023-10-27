//comparacion estricta 
// == (comparacion no estrica Revisa el valor)
// === (comparacion estricta revisa el Valor Y el tipo de dato)

const numero1 = 20;
const numero2 = "20";

if(numero1 === numero2){
    console.log("son iguales");
}else{
    console.log("No son iguales");
}

//comparacion no estricta

if(numero1 == numero2){
    console.log("son iguales");
}
//comparacion si son diferentes
if(numero1 != numero2){
    console.log("son diferentes");
}

//comparacion si son diferentes
if(numero1 !== numero2){
    console.log("son diferentes");
}

//comparacion si son mayores o menores
if(numero1 < numero2){
    console.log("numero1 es menor");
}

if(numero1 > numero2){
    console.log("numero1 es mayor");
}

//comparacion si son mayores o menores o iguales

if(numero1 <= numero2){
    console.log("numero1 es menor o igual");
}

if(numero1 >= numero2){
    console.log("numero1 es mayor o igual");
}

//comparacion si son mayores o menores o iguales

