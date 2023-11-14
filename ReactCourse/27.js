//fecth API 

const url = 'https://jsonplaceholder.typicode.com/comments';

// fetch(url)
//     .then((respuesta) => {
//      return respuesta.json();

//     })
//     .then((resultado) => {
//         console.log(resultado);
//     })
    

// otra manera mas corta de havcerlo seria 

const consultarAPI = () =>{
    fetch(url)
    .then((respuesta) => respuesta.json())
    .then(resultado =>{
        resultado.forEach(comentario => {
            console.log(comentario);
        })
    })
}

// las promesas son un objeto que representa la terminacion o el fracaso de una operacion asincrona