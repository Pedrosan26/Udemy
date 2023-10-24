//objetos manipulacion

const producto = {
    nombre: "Monitor de 20 pulgadas",
    precio: 3000,
    disponible: true
} // esta es una manera mas eficiente de agrupar variables

producto.nombre = "Monitor de 30 pulgadas"; // reasignar valor de una variable

console.log(producto); // regresa todo el objeto

// un objeto si puede ser reasignado, pero no se puede reasignar el objeto completo

//para crear un objeto nuevo seria 
producto.imagen = "imagen.jpg"; // agrega una nueva variable al objeto

//para eliminar objetos seria
delete producto.disponible; // elimina la variable disponible del objeto

// si eliminamos un objeto que no existe, no sucede nada

//para hacer que el objeto no se pueda reasignar

Object.freeze(producto); // congela el objeto y no se puede reasignar
//segunda opcion
Object.seal(producto); // congela el objeto y no se puede reasignar, pero si se puede modificar
// es decir freeze no deja ninguna modificacion
//seal modificas propiedas existenmtes, pero no puedes anadir ni eliminar

//para saber si un objeto esta congelado
console.log(Object.isFrozen(producto)); // regresa un booleano si el objeto esta congelado o no

//para saber si un objeto esta sellado
console.log(Object.isSealed(producto)); // regresa un booleano si el objeto esta sellado o no
