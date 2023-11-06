//manipular HTMl con JS

const heading= document.querySelector('h2'); 
// la variable const regresa un objeto

heading.textContent="Nuevo Heading"; //esto cambia el texto del h2

const inputNombre= document.querySelector('#nombre');
inputNombre.value="Juan"; //esto cambia el valor del input
console.log(inputNombre.value); //esto nos devuelve el valor del input

// es decir podemos modificar los objetos con metodos ya existentes, pero es importante
//crear el bjeto con document.queryselector para poder modificarlo

const enlaces =document.querySelectorAll('.enlace a');
enlaces.forEach(enlace=> enlace.textContent='Nuevo Enlace' );
//esto cambia el texto de todos los enlaces

//cuando usamos queryselector All, y queremos modificar un elemento, ocupamos hacer un for each, esto porque como son varios elementos
//no podemos modificarlos directamente, por eso usamos el for each

