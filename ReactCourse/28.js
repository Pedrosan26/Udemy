// Fetch API - ASYNC AWAIT

const url = 'https://jsonplaceholder.typicode.com/comments';


const consultarAPI = async() =>{
    const respuesta=await fetch(url)
    const resultado= await respuesta.json()
    resultado.forEach(comentario =>{
        console.log(comentario);
    })
}

// el async await lo que hace es esperar a que se ejecute la funcion para que se ejecute la siguiente linea de codigo