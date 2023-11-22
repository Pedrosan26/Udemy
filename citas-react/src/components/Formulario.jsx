import React from 'react'
import { useState,useEffect } from 'react'

const Formulario = () => {
  return (
    <div className='md:w-1/2 lg:w-2/5'>
        <h2 className='font-black text-3xl text-center'>Seguimiento pacientes</h2>
        <p className='text-lg mt-5 text-center mb-10'>
          anade pacientes y {' '}
          <span className='text-indigo-600 font-bold text-lg'> Administralos</span>
        </p>

        <form className='bg-white shadow-md rounded-lg py-10 px-5 mb-10'>
            <div className='mb-5'>
                <label htmlFor='mascota' className='block text-gray-700 uppercase font-bold' >Nombre Mascotas</label>
                <input
                id='mascota' 
                type="text" 
                placeholder=' Nombre de la Mascota'
                className='border-2 w-full p-2 mt-2 placeholder-gray-400 rounded-md'
                />
            </div>



            <div className='mb-5' >
                <label htmlFor='propietario' className='block text-gray-700 uppercase font-bold' >Nombre Propietario</label>
                <input
                id='propietario' 
                type="text" 
                placeholder=' Nombre del propietario'
                className='border-2 w-full p-2 mt-2 placeholder-gray-400 rounded-md'
                />
            </div>



            <div className='mb-5' >
                <label htmlFor='email' className='block text-gray-700 uppercase font-bold' >email</label>
                <input
                id='email' 
                type="email" 
                placeholder=' email del propietario'
                className='border-2 w-full p-2 mt-2 placeholder-gray-400 rounded-md'
                />
            </div>


            <div className='mb-5' >
                <label htmlFor='alta' className='block text-gray-700 uppercase font-bold' >alta</label>
                <input
                id='alta' 
                type="date" 
                
                className='border-2 w-full p-2 mt-2 placeholder-gray-400 rounded-md'
                />
            </div>

            <div className='mb-5' >
                <label htmlFor='Sintomas' className='block text-gray-700 uppercase font-bold' >Sintomas</label>
                <textarea
                  id='Sintomas'
                  className='border-2 w-full p-2 mt-2 placeholder-gray-400 rounded-md'
                  placeholder='Describe los sintomas'
                />
            </div>

            <input type="submit" 
            className='bg-indigo-600 w-full p-3 text-white uppercase font-bold hover:bg-indigo-700 transition-all'
            value='Agregar paciente'
            />

        </form>


    </div>
  )
}

export default Formulario