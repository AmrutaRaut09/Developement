/*Check Occurences of a letter or special symbol
OUTPUT:

Enter String:
Marvellous@123
{@=1, a=1, e=1, l=2, M=1, o=1, 1=1, r=1, 2=1,
 s=1, 3=1, u=1, v=1}
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
				hobj.put(ch, Frequency + 1);
			}
			else
			{
				hobj.put(ch,1);
			}
		}
		System.out.println(hobj);
	}
}
