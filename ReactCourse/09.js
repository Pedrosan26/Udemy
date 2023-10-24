const tecnologias = ['react', 'angular', 'vue', 10, 1, 1.1, true];

//Destriucturing de arrays
// al momento de hacer un destructuring extraemos el indice, nno el noimbre de la variable

const[var1,var2,var3,var4,var5,var6,var7]=tecnologias; // destructuring de arrays

// si quisieramos extraer el ultimo valor , el crear 7 objetos seria mucho e inceseario, por lo que simpplemente podemos poner , que "Crean" objetos vacios, hasta llegar a la posicion que deseamos
//ejemplo const [, , , , , ,var7]=tecnologias; // destructuring de arrays
//console.log(var7) ;