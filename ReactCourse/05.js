//objects -- destructuring con 2 objetos

const producto = {
    nombre: "Monitor de 20 pulgadas",
    precio: 3000,
    disponible: true
} // esta es una manera mas eficiente de agrupar variables

const cliente={
    nombre:"Juan",
    premium: true,
}

const{nombre,precio,disponible}=producto; // destructuring de objetos
const{nombre:nombreCliente,premium}=cliente; // destructuring de objetos
// No puede existir una variable con el mismo nombre en el mismo scope


console.log(nombre,precio,disponible);
console.log(nombreCliente,premium);
