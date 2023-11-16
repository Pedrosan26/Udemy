import './App.css'
import Header from './components/header'
import Formulario from './components/Formulario'
import ListadoPacientes from './components/ListadoPacientes'

function App() {

  return (
    // con <> </> podmeos regresar multiples tags sin necesidad de crear muchos divs
    // se regresa el elemento mas alto, poir lo que podemos usar <> </>
    // para empezar codigo en JS debe de estar dentro de  {}
  <>

    <div className='App'>
      <h1>Hola Mundo</h1>
    </div>
    <Header/>
    <Formulario/>
    <ListadoPacientes/>
  </>
  )
}

export default App
