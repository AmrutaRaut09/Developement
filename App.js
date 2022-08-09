import './App.css';
import { useState } from 'react';
import React from "react";
import Counter from './component/Counter';
  export default function App(){
    const [Count, setCount]=useState(0);
    const buttonClickIncrement =()=> {
      setCount((Count)=>Count+1);
      }
    const buttonClickDecrement=()=>{
      setCount((Count)=>Count-1);
    }
return(
  <div>
    {Count}
    <Counter buttonClickIncrement={buttonClickIncrement}
             buttonClickDecrement={buttonClickDecrement}/>
  </div>
  )
}
