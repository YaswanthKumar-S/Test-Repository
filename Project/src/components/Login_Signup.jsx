import React, { useState } from 'react'
import '../assets/css/Login_Signup.css';
import email_icon from '../assets/images/email.png'
import user_icon from '../assets/images/user.png'
import password_icon from '../assets/images/password.png'
import phone_icon from '../assets/images/phone-book.png'
import g_icon from'../assets/images/google(2).png'
import fb_icon from '../assets/images/facebook(1).png'
import t_icon from '../assets/images/twitter(1).png'
const LoginSignup = () => {
    const [action,setAction]=useState("Login");
    const eye = document.getElementById("eye");
const password = document.getElementById("password");

eye.addEventListener("click", function () {
  const type = password.getAttribute("type") === "password" ? "text" : "password";
  password.setAttribute("type", type);
  this.classList.toggle("fa-eye");
  this.classList.toggle("fa-eye-slash");
  const pressed = this.getAttribute("aria-pressed") === "true" ? "false" : "true";
  this.setAttribute("aria-pressed", pressed);
});

  return (
    <>
       
      <div className="container">
    <div className="header">
        <div className="text">{action}</div>
        </div>
    <div className="inputs">
        {action==="Login"?<div></div>:
        <>
        <div className="input">
            <img src={user_icon} alt="" /> 
            <input type="text" placeholder="Name" required/>
        </div>
        
        <div className="input">
            <img src={phone_icon} alt="" />
            <input type="tel" placeholder='Phone Number' required/>
        </div>
        </>
            }
        <div className="input">
            <img src={email_icon} alt="" />
            <input type="email" placeholder="Email Id" required />
        </div>
        <div className="input">
            <img src={password_icon} alt="" />
            <input type="password" placeholder='Password' required/>
            <i id="eye" class="fa fa-eye" aria-label="Show password" aria-pressed="false" tabindex="0"></i>
        </div>
    </div>
    {action==="Sign Up"?<div className='signup'>   
    <p>Sign In By Using </p>
    <div className="images">
    <img src={g_icon} alt="" />
    <img src={fb_icon} alt="" />
    <img src={t_icon} alt="" />
    </div>
    </div>:
    <div className="forgotpassword">Forgot Password? <span> Click Here</span>
    <p >Sign In By Using </p>
    <div className="images">
    <img src={g_icon} alt="" />
    <img src={fb_icon} alt="" />
    <img src={t_icon} alt="" />
    </div>
    </div>
}
    <div className="sumbit-container">
        <div className={action==="Login"?"sumbit gray":"sumbit"} onClick={()=>{setAction("Sign Up")}}>Sign Up</div>
        <div className={action==="Sign Up"?"sumbit gray":"sumbit"} onClick={()=>{setAction("Login")}}>Login</div>
    </div>
   </div>
    </>
  )
}

export default LoginSignup
