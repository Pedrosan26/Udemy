//iteradores en Javascript

const tecnologias = ['React', 'Vue', 'Angular', 'NodeJS'];

// FOR EACH - recorre el arreglo y ejecuta una funcion por cada elemento
tecnologias.forEach(function(tecnologia) {
    console.log(tecnologia); // imprime cada elemento del arreglo
});

//para el  for each ocupas llamar el metodo y una funcion anonima

// MAP - crea un nuevo arreglo con los resultados de la funcion
tecnologias.map(function(tecnologia) {
    return tecnologia; // retorna el arreglo completo
});

//map se utiliza mas en react 

//map te permite crear un arreglo nuevo con los resultados de la funcion
//mientras que for each solo te permite recorrer el arreglo y ejecutar una funcion por cada elemento