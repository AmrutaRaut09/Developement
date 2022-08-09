/*Check Maximum of Occurences of a string or special symbol

OUTPUT:
>java Hashmap.java
Enter String:
India is Good India best
India Word Occures 2 times
*/

import java.lang.*;
import java.util.*;

class StringJava
{	
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String:");
		String str1 = sobj.nextLine();
		String Arr[] = str1.split(" ");
		
		int Frequency = 0;
		HashMap<String, Integer>hobj = new HashMap<>();
		for(String ch : Arr) 		//For each loop//for(i = 0;i<Arr.length;i++)
		{
			if(hobj.containsKey(ch))
			{
				Frequency = hobj.get(ch);
				hobj.put(ch,Frequency+1);
			}
			else
			{
				hobj.put(ch,1);
			}
		}
		Set<String>setobj = hobj.keySet();	//keySet is saperate letters and symbols
		int iMax = 0;
		String str;
		for(String value : setobj)
		{
			if(hobj.get(value)>iMax)
			{
			  iMax = hobj.get(value);
			  c = value;
			}
			
		}
		System.out.println(c + " Word Occures " +iMax+ " times");
		
	}
}
