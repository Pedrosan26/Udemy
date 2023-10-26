//funciones -- function declaration

sumar();

//la palabra clave es function
function sumar(){
    console.log(10+10);
}

//en javascript puedes llamar la funcion antes de crearla
//esto se debe a que javascript lee el codigo dos veces

//creacion de funciones con parametros

function restar(numero1,numero2){
    console.log(numero1-numero2);
};

restar(10,5);

//se pueden tener parametreos por default

function multiplicar(numero1=10,numero2=2){
    console.log(numero1*numero2);
};

//si no se le pasa un parametro a la funcion, se le asigna el valor por default
//pero si existe otro parametro, se sobreescruibe el valor por default


function dividir(numero1=10,numero2=2){
    return numero1/numero2;
    
    //podemos hacer un retorn de lo que sea, un arreglo [numero1/numero2, "Hola Mundo",1.2],etc
    //tamine se pueden retornar en forma de ojeto return{resultado:numero1/numero2, mensaje:"Hola Mundo",numero:1.2}
}

//return te permite retornar un valor de la funcion
//se crea una variable y se le asigna el valor de la funcion que se retorna

const division = dividir(10,5);
//ahi estamo almacenando el valor de la funcion en la variable divicion
console.log(division);