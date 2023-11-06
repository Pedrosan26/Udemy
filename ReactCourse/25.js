//Submit
const formulario = document.querySelector('#formulario');
formulario.addEventListener('submit', e =>{
    e.preventDefault(); // esto es util para los fetch

    //extraemos los valores de las clases de nombre y password
    const nombre= document.querySelector('.nombre').value;
    const password=document.querySelector('.password').value;

    const alertaPrevia = document.querySelector('.Alerta');
    if(alertaPrevia){
        alertaPrevia.remove();
    }

    const alerta = document.createElement('DIV');
    alerta.classList.add('Alerta')

    //comprobamos que los campos esten completos y llenados
    if(nombre===''|| password=== ''){
       alerta.textContent('Todos los campos son obligatorios');
       alerta.classList.add('Error');
    }else{
        alerta.textContent('Enviando Formulario')
        alerta.classList.add('Exito');
    }

    console.log(alerta);
})

