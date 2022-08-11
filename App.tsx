import {useState} from 'react';
import './App.css';
import Grid from '@mui/material/Grid';
import Link from '@mui/material/Link';
import Divider from '@mui/material/Divider';
import TextField from '@mui/material/TextField';
import Button from '@mui/material/Button';
import PropsType from './model/types';

function App() {
// const [email, setEmail] = useState(null);   //set email value
// const [password, setPassword] = useState(null);
// const [emailError, setEmailError]= useState(null);
// const [passwordError, setPasswordError]= useState(null);

const user:PropsType = {email: "s", password:"",emailError:'please enter valid email',passwordError:'please enter valid password'};
user.email = "";
user.password = "";


function isValidEmail(emailss: string) {              //Email Validation

  return /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(emailss);
}

function isValidPassword(password:string) {          //Password Validation
  return /^(?=.*\d)(?=.*[a-z])(?=.*[A-Z]).{8,32}$/.test(password);
}

 const handleChangeEmail=(event:React.ChangeEvent<HTMLInputElement>)=>{
  if((event.target.value) ==='' ||  !isValidEmail(event.target.value)){
      <p>{user.emailError}</p>
  }
  else{
    user.email=(event.target.value);
  }
}
console.log(user.email)

const handleChangePassword=(event:React.ChangeEvent<HTMLInputElement>)=>{
  if((event.target.value) ==='' ||  !isValidPassword(event.target.value)){
    <p>{user.passwordError}</p>
  }
  else{
    user.password=(event.target.value);     
  }
}
function displayAlert()
{
  alert(user.email + user.password);
}
  return(
    <div className="App">
      <form className='formContainer'>
      <div id="header">
        <h3 className='headerstyle'>User Login</h3><Divider />
      </div>
      <div>   
          <TextField required  margin="dense" type ="text" id="email" label="Email" size="small" autoFocus placeholder='Enter an E-mail' onChange = {handleChangeEmail}/>
            <br/>
          <TextField type="password"  margin="dense" label="Password"  size="small" id ="pass" name="name" placeholder='Password'  onChange={handleChangePassword}  required/><br/>
         
      </div>
      <div>

        <Button  variant="contained" color="success" onClick={displayAlert}> Login</Button>
        <Button  id="clear"variant="contained" color="primary" type="reset" >Reset</Button><br/>
     
        <Grid item>
        <Link href="#" lineHeight={3}>Forgot Password?</Link>
        </Grid>
      </div>
      </form>
    </div>
  );
}
export default App;


