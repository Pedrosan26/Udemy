import React from 'react'
import Pacientes from './pacientes'

const ListadoPacientes = () => {
  return (
    <div className='w-1/2 lg:w-3/5 h-screen overflow-y-scroll'>
        <h2 className='text-center text-3xl font-black'>Listado Pacientes</h2>
        <p className='text-xl mt-5 mb-10 text-center'>
          Administra tus {" "}
          <span className=' text-indigo-600 font-black '> Pacientes y citas</span>
        </p>
        <Pacientes/>

    </div>
  )
}

export default ListadoPacientes