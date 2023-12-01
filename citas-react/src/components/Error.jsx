

const Error = ({mensaje}) => {
  return (
    <div className='bg-red-800 text-white text-center uppercase mb-3 rounded'>
          <p>{mensaje}</p>
        </div>
  )
}

export default Error

// otra sintaxus seria utilizar children en lugar de mensaje

// const Error = ({children}) => {
//   return (
//     <div className='bg-red-800 text-white text-center uppercase mb-3 rounded'>
//           <p>{children}</p>
//         </div>
//   )
// }

// export default Error

/*

y en el app.jsx

{error && (
    <Error> <p> Todos los campos son obligatorios </p> </Error>
  )}

*/ 