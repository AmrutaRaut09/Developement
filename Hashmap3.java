/*Check Maximum of Occurences of a letter or special symbol

java Hashmap.java
Enter String:
hello
l Occures2 times
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
		char Arr[] = str1.toCharArray();
		
		int Frequency = 0;
		HashMap<Character, Integer>hobj = new HashMap<>();
		for(char ch : Arr) 		//For each loop//for(i = 0;i<Arr.length;i++)
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
		Set<Character>setobj = hobj.keySet();	//keySet is saperate letters and symbols
		int iMax = 0;
		char c='\0';
		for(char value : setobj)
		{
			if(hobj.get(value)>iMax)
			{
			  iMax = hobj.get(value);
			  c = value;
			}
			
		}
		System.out.println(c + " Occures" +iMax+ " times");
		
	}
}
