const url = 'https://jsonplaceholder.typicode.com/comments';
const url2 = 'https://jsonplaceholder.typicode.com/photos';

// para hacer 2 fecthes al mismo tiempo 
const consultarAPI2= async()=>{
    //hacemos array destructuring y ademas un awauiit para que se ejecute al mismo tiempo
    const[respuesta,respuesta2]= await Promise.all([fetch(url),fetch(url2)]);
    const resultado=await respuesta.json();
    const resultado2=await respuesta2.json();

    console.log(resultado);
    console.log(resultado2);

    
}