const tecnologias=['React','Angular','Vue']
const numeros=[1,2,3,4,5];

let nuevoArray;
//filter 
nuevoArray=tecnologias.filter(tech=>tech!=='Angular');

//para comprobar que un elemento si esta en el array
const resultado=tecnologias.includes('React');
console.log(resultado);

//te regresa un bool si existe un solo elemento que cumpla la condicion
const resultado2=numeros.some(numero=>numero>3);

//si queremos encontrrar el Valor de un numero entonces usamos find

const resultado3=numeros.find(numero => numero>3);
//se detiene hasya que encuentre UN elemento que cumpla la condicion

//existe otro, llamado every, si todos cumplen la condicion

const resultado4=numeros.every(numero => numero>2);
//regresa un bool si todos cumplen la condicion

//para cosas de e-commerce podemos usar el reduce
//el reduce sirve para ir acomulando los valores totales

const resultado5=numeros.reduce((total,numero)=>total+numero,0);

//filter crea un nuevo array en bvase a la condicion

const resultado6=numeros.filter(tech => tech===3);
//puedo poner que me haga un filter que me regrese todos los numeros menores a 4 o mayores a 2


// si quisiera hacer un for each con arrow function seria 

tecnologias.forEach(tech => console.log(tech));


//para el map 

const arrayMap=tecnologias.map(tech => tech);