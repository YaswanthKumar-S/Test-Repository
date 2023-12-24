import React from 'react'

const Login = () => {
  return (
    <div>
    <div className='card-body'>
    <label htmlFor='form1' className='form-label mb-4'>Email address</label>
    <input type='email' className='form-control mb-4' id='form1' />

    <label htmlFor='form2' className='form-label mb-4'>Password</label>
    <input type='password' className='form-control mb-4' id='form2' />

    <div className="d-flex justify-content-between mx-4 mb-4">
    <div className="form-check">
    <input type="checkbox" className="form-check-input" id="flexCheckDefault" />
    <label className="form-check-label" htmlFor="flexCheckDefault">Remember me</label>
    </div>
    <a href="!#">Forgot password?</a>
    </div>
    <button className="btn btn-primary mb-4 w-100">Sign in</button>
    </div>
    </div>
  )
};
export default Login;
