//objetos 

// const nombre="Tablet"'
// const precio=3000;
// const disponible=true;

//un objeto agrupa todo en una sola variable
const producto={
    nombre: "Monitor de 20 pulgadas",
    precio: 3000,
    disponible: true
} // esta es una manera mas eficiente de agrupar variables

console.log(producto); // regresa todo el objeto
console.table(producto); // regresa el objeto en forma de tabla

console.log(producto.nombre); // regresa el valor de la variable nombre
console.log(producto.precio); // regresa el valor de la variable precio
console.log(producto.disponible); // regresa el valor de la variable disponible

//destructuring de objetos
//esto es una forma de extraer los valores de un objeto
const {nombre,precio,disponible}= producto; // extrae el valor de la variable nombre del objeto producto

//Object literal enhancement
const autenticado=true;
const usuario="Juan";

// const nuevoObjeto={
//     autenticado: autenticado,
//     usuario: usuario
// } // esta es la forma antigua de crear un objeto

//igualmente si los objetos se llaman igual 
//podemos hacer lo siguiente
const nuevoObjeto={
    autenticado,
    usuario
} // esta es la forma nueva de crear un objeto