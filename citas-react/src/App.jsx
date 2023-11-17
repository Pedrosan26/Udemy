import './App.css'
import Header from './components/header'
import Formulario from './components/Formulario'
import ListadoPacientes from './components/ListadoPacientes'

function App() {

  return (
    // con <> </> podmeos regresar multiples tags sin necesidad de crear muchos divs
    // se regresa el elemento mas alto, poir lo que podemos usar <> </>
    // para empezar codigo en JS debe de estar dentro de  {}

  <div className='container mx-auto mt-20'>
    <Header/>
    <div className='mt-12 md:flex'>
      <Formulario/>
      <ListadoPacientes/>
    </div>
    
  </div>
  )
}

export default App
