export default function Counter(props){
	return(
	<div>
		<button id="decrement" onClick={props.buttonClickDecrement}>
			Decrement
		</button>		
		<button id="increment" onClick={props.buttonClickIncrement}>
			Increament
		</button>
	</div>
	);
}