//unir 2 objetos

const producto = {
    nombre: "Monitor de 20 pulgadas",
    precio: 3000,
    disponible: true
} // esta es una manera mas eficiente de agrupar variables

const cliente={
    nombre:"Juan",
    premium: true,
}

//debemos crear un nuevo objeto que no modifique a los originales

// const nuevoObjeto=Object.assign(producto,cliente); // une los 2 objetos en uno solo
// console.log(nuevoObjeto); es mala practica debidp a que sigue modificanod el objeto original de producto


const nuevoObjeto2={...producto,...cliente}; // une los 2 objetos en uno solo
console.log(nuevoObjeto2);
//estra manera es la mas recomendada para unir objetos ya que con los 3 ... creas una copia del objeto original y no lo modificas

// otra manera eficiente seria craer un objeto y dale como atributo lo sigfuiente
const nuevoObjeto3={
    producto:{...producto},
    cliente:{...cliente}
    // de esta manera no modificas los objetos originales Y ADEMAS no se pierden alguinas propiedades que tengan nombre igual
} // une los 2 objetos en uno solo