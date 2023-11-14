import './App.css'
import Header from './components/header'

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

  </>
  )
}

export default App
