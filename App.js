import {useState} from 'react';
import '../assets/css/App.css';
import axios from "axios";
import Grid from '@mui/material/Grid';
import Link from '@mui/material/Link';
import * as React from 'react';
import Divider from '@mui/material/Divider';
import TextField from '@mui/material/TextField';
import Button from '@mui/material/Button';

function App() {
const [dataEmail, setEmailState] = useState('');   //continuos data display state
const [dataPassword, setPasswordData] = useState('');
const [email, setEmail] = useState(null);   //set email value
const [password, setPassword] = useState(null);
const [EmailError, setEmailError] = useState(null);
const [PasswordError, setPasswordError] = useState(null);
const [LoginDisabled,setLoginDisabled] = useState('true','false');

function isValidEmail(email) {              //Email Validation

  return /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(email);
}

function isValidPassword(password) {          //Password Validation
  return /^(?=.*\d)(?=.*[a-z])(?=.*[A-Z]).{8,32}$/.test(password);
}

 const handleChangeEmail= event=>{
  setEmailError(null);
  if((event.target.value) =='' ||  !isValidEmail(event.target.value)){
    setLoginDisabled(true);
    setEmailState(event.target.value);     //Reflect Email text data    
    setEmailError('Email is Invalid');
  }
  else{
    if(password='')
    {
      setLoginDisabled(true);
    }
    else{
      setLoginDisabled(false);
    }
    setEmailState(event.target.value);     //Reflect Email text data
    setEmailError(null);
  }
  setEmail(event.target.value);         //Set Email value
}

const handleChangePassword= event=>{
  setPasswordError(null);
  if(!isValidPassword(event.target.value)){
    setLoginDisabled(true);
    setPasswordData(event.target.value);
    setPasswordError('Password is Invalid');
  }
  else{
    setLoginDisabled(false);
    setPassword(event.target.value);          //Set Password
    setPasswordData(event.target.value);   //Reflect Password text data
    setPasswordError(null);
  }
}

const postData= event=>{              //function for data post
  event.preventDefault();
  var body = {
    userName: email,
    password: password
}
console.log(body);
axios({                                     //Using Axios for post data function
    method: 'post',
    url: 'http://192.168.0.105:9000/login',
    data: body
})

.then(function (response) {         //Promise 
    console.log("In Then block",response);
})
.catch(function (error) {
    console.log(error);
});

}

  return(
    <div className="App">
      <form className='formContainer'>
      <div id="header">
        <h3 className='headerstyle'>User Login</h3><Divider />
      </div>
      <div>   
          <TextField required  margin="dense" helperText={EmailError} type ="text" id="email" label="Email" size="small" autoFocus placeholder='Enter an E-mail'onChange = {handleChangeEmail}/>
          {dataEmail && <p>{dataEmail}</p>} 
            <br/>
          <TextField type="password" helperText={PasswordError} margin="dense" label="Password"  size="small" id ="pass" name="name" placeholder='Password'  onChange={handleChangePassword}  required/><br/>
          {dataPassword && <p>{dataPassword}</p>} 
      </div>
      <div>

        <Button id="login" width="50%" variant="contained" color="success" disabled={LoginDisabled} onClick ={postData} > Login</Button>
        <Button  id="clear"variant="contained" color="primary" disabled={!(dataEmail || dataPassword)}  > Reset</Button><br/>
     
        <Grid item>
        <Link href="#" lineHeight={3}>Forgot Password?</Link>
        </Grid>
      </div>
      </form>
    </div>
  );

}
export default App;


