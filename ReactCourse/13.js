//functions arrow-functions

// const sumar=function(numero1,numero2){
//     numero1+numero2;
// };

// la sintaxis de arrow function es 

const sumar= (numero1,numero2) => {
    return numero1+numero2;
};

const resultado = sumar(5+5);
console.log(resultado);

//esa es la sintaxis de una arrow function

// la ventaja esta en los returns 
//cuando solo tienes una linea de codigo se puede agregar sin las llaves :
// const sumar= (numero1,numero2) =>  numero1+numero2;

// cuando solo tienes un parametro se pueden omitir los parentesis
// const sumar= numero1 =>  numero1+5;

// cuando no tienes parametros se deben agregar los parentesis
// const sumar= () =>  5+5;
