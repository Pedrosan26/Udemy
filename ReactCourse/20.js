//selectores del DOM   

//para seleccionar uin h2 

const heading = document.querySelector('h2');
console.log(heading); //esto nos devuelve el elemento h2
console.log(heading.textContent); //esto nos devuelve el texto que contiene el elemento h2
console.log(heading.innerText); //esto nos devuelve el texto que contiene el elemento h2
console.log(heading.innerHTML); //esto nos devuelve el texto que contiene el elemento h2

//para seleccionar un enlace
const enlace = document.querySelector('.enlace');
console.log(enlace); //esto nos devuelve el elemento a

//pero si queremos llevar todos los enlaces
//estamos pidiendo la clase llamada nav y la a es porque es un enlace
const enlaces=document.querySelectorAll('.nav a');
console.log(enlaces); //esto nos devuelve un nodelist con todos los elementos a


//conclusion
//queryselector solo devuelve el primer elemento que encuentra
//queryselectorall devuelve todos los elementos que encuentra en un nodelist

