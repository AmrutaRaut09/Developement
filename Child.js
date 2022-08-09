import React from 'react'
class Child extends React.Component{
	
	onTrigger = (event) => {
		this.props.parentCallback(event.target.myname.value);
		event.preventDefault();
	}

	render(){
		return(
		<div>
			<form onSubmit = {this.onTrigger}>
				<input type = "text"
				name = "myname" placeholder = "Enter Name"/>
				<br/>
				<input type = "submit" value = "Submit"/>
				<br/>
			</form>
		</div>
		)
	}
}
export default Child
