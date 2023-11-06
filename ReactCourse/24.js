//Submit
const formulario = document.querySelector('#formulario');
formulario.addEventListener('submit', e =>{
    e.preventDefault(); // esto es util para los fetch

    //extraemos los valores de las clases de nombre y password
    const nombre= document.querySelector('.nombre').value;
    const password=document.querySelector('.password').value;
    
    //comprobamos que los campos esten completos y llenados
    if(nombre===''|| password=== ''){
        console.log('Todos los campos son obligatorios');
    }else{
        console.log('Enviando Formulario')
    }
})

