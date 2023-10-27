//condicion ternaria

const autenticado=true;

autenticado ? console.log("Se autentico") :  console.log("No se autentico") ;

//doble ternario 

const saldo=1000;
const pagar=500;
const tarjeta=true;

/// se pueden agregar mas condiciones con el ternario agregando un ? 
saldo>pagar ? console.log("Si se puede pagar") : tarjeta ? console.log("Si se puede pagar con tarjeta") : console.log("No se puede pagar");