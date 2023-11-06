//Eventos del Dom

const heading =document.querySelector('.heading');

heading.addEventListener('click',() => console.log("Diste click ens heading"));

//el primer parametro es el evento que queremos escuchar
//el segundo parametro es la funcion que se ejecuta cuando se cumple el evento

const enlaces=document.querySelectorAll('.enlaces a');

enlaces.forEach(enlace => {
    enlace.addEventListener('click',()=> {
        console.log("Diste click en enlace");
    })
})