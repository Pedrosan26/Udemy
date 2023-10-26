const tecnologias=['React','Angular','Vue']

//recordar que map es un iterador que recorre el arreglo y retorna un nuevo arreglo
// para la funcion flecha se puede omitir el return y las llaves
const nuevoArray=tecnologias.map(tech => {
    if(tech==='React'){
        return 'ReactJS'
    }else{
        return tech
    }
})

//con fiter ocupamos una funcion, pero podemos simplificarlo con una arrow function donde solo usamos el parametro, y como el rewturn es una sola linea podemos botrarlo

const nuevoArray2=tecnologias.filter(tech => tech!=='Angular')

