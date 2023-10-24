// modificacion y operaciones de arrays
const tecnologias = ['react', 'angular', 'vue', 10, 1, 1.1, true];

//anadir elementos al array
//tecnologias.push('nodejs'); // anade al final del array

//una manera mmas optipma seria igual copiar el array y agregar el valor 
const nuevoArreglo=[...tecnologias,"GraphQL"]; //  si queremos copiar el eelemtento al inicio del array, entopnces ponemos el elemento que queremos agregar y LUEGO copiamosel array 
console.log(nuevoArreglo);


//eliminar elementos
// la manera NO recomendada es tecnologias.pop(); // elimina el ultimo elemento del array pero como se modifica el array original no es recomendable
// tecnologias.shift(); // elimina el primer elemento del array
// tecnologias.splice(2,1  ); // elimina el elemento que se encuentra en la posicion 2 y elimina 1 elemento mas

// La manera de eliminar elementos sin modificar los objetos originales es
// creando una funcion que filtre los elementos que queremos eliminar

const nuevoArray= tecnologias.filter(function(tecnologia){
    return tecnologia !== "react";
});

//remplazar elementos 
// tecnologias[1]="reactjs"; // remplaza el elemento en la posicion 1 por el que le pasamos pero modifica el ortiginal

// la manera de remplazar elementos sin modificar el original es
const nuevoArray2=tecnologias.map(function(tecnologias){
    if(tecnologias==="react"){
        return "C++";
    }else{
        return tecnologias;
    }
})

console.table(tecnologias);
console.table(nuevoArreglo);
console.table(nuevoArray);
console.table(nuevoArray2);