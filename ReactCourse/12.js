//function expression


//fuynction declaration
// function sumar(numero1,numero2){
//     console.log(numero1+numero2);
// };

//function expression

// al momento de delcarar una function expression su diferencia es
// que la function va despues de crear una varible
//otra diferenciuia es que no se puede llamar antes de crearla
const sumar= function(numero1,numero2){
    return numero1+numero2;
}

// no se puede llamar antes porque en la fase de creacion no se registran las variables
// y en la fase de ejecucion si se registran las variables por lo que no se puede llamar antes
const resultado=sumar(10,20);   
console.log(resultado);

//porque quisieramos usar expression sobre la declaration normal
// porquecon la manera en que hacemops la expression
// pode4mos crear Arrow Functions

