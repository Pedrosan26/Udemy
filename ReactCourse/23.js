// Eventos del DOm INputs

const inputNOmbre = document.querySelector('.nombre');

inputNOmbre.addEventListener('input',e =>{
    console.log(e.target.value);
})

//hacemos un callback donde hacemos un aevent listener al input para una password
const inputPassword = document.addEventListener('input', password)


// funcion para manipular el string 
const password = (e) =>{
    console.log(e.target.value);
    setTimeout(()=>{
        inputPassword.type('password');
    },5000)
}