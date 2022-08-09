//Customized DBMS
//Program 368

import java.lang.*;
import java.util.*;

class DBMSjava
{
	public static void main(String args[])
	{
		DBMS dobj = new DBMS();
		
		dobj.StartDBMS();		
	}	
}

//Database Table/Schema
class Student
{
	public int RID;
	public String Name;
	public int Salary;	
	private static int idGenerator;
	
	static
	{
		idGenerator = 0;
	}
	
	public Student(String str, int value)	//Constructor
	{
		this.RID = ++idGenerator;
		this.Name = str;
		this.Salary = value;
	}
	public void DisplayData()
	{
		System.out.println(this.RID+ "\t" +this.Name +"\t"+ this.Salary);
		
	}
}

class DBMS
{
	LinkedList<Student> lobj = new LinkedList<>();

	public DBMS()
	{
		lobj = new LinkedList<>();
	}
	
	//Insert into Student Amruta 10000
	public void StartDBMS()
	{
		Scanner scanObj = new Scanner(System.in);
		System.out.println("Marvellous Customized DBMS started successfully..");
		String Query = "";
		while(true)
		{
			System.out.println("Marvellous DBMS Console> ");
			Query = scanObj.nextLine();
			String tokens[] = Query.split(" ");
			int QuerySize = tokens.length;
			if(QuerySize == 1)
			{
				if("help".equals(tokens[0]))
				{
					System.out.println("This Application is used to demonstrate the Customized DBMS ");
					System.out.println("Exit: Terminate DBMS");
					System.out.println("Display All Data: Select * from student");
				}
				else if("exit".equals(tokens[0]))
				{
					System.out.println("Thanks for using Marvellous DBMS..");
					break;
				}
			}
			else if(QuerySize == 2)
			{
				
			}
			else if(QuerySize == 4)	//Select * Query of SQL
			{
				if("select".equals(tokens[0]))
				{
					if("*".equals(tokens[1]))
					{
					 DisplayAll();
					}
				}
			}
			//Insert into Student Amruta 10000
			else if(QuerySize == 5)
			{
				if("insert".equals(tokens[0]))
				{
					InsertData(tokens[3],Integer.parseInt(tokens[4]));
				}
			}
		}				
	}
	
	public void InsertData(String str, int value)
	{
		Student sobj = new Student(str, value);
		lobj.add(sobj);
	}
	public void DisplayAll()
	{
		for(Student sref : lobj)
		{
		 sref.DisplayData();
		}
	}
	
	public void DisplaySpecific(String str)		//Display By NAme
	{
		for(Student sref : lobj)
		{
			if(str.equals(sref.Name))
			{
				sref.DisplayData();
			}
		}
	}
	public void DisplaySpecific(int rid)		//Display By RID
	{
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				sref.DisplayData();
				break;
			}
		}
	}
	
	public void DeleteSpecific(String str)		//Delete By RID
	{
		int index = 0;
		
		for(Student sref : lobj)
		{
			if(str.equals(sref.Name))
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	
	public void DeleteSpecific(int rid)		//Delete By RID
	{
		int index = 0;
		
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	public void AggregateMax()
	{
		int iMax = 0;
		Student temp = null;
				
		for(Student sref : lobj)
		{
			if(sref.Salary>iMax)
			{
				iMax = sref.Salary;
				temp = sref;	
			}
		}
		System.out.println("Information of Student having Maximum Salary: ");
		temp.DisplayData();
	}
	
	public void AggregateMin()
	{
		int iMin = (lobj.getFirst()).Salary;
		Student temp = lobj.getFirst();
				
		for(Student sref : lobj)
		{
			if(sref.Salary < iMin)
			{
				iMin = sref.Salary;
				temp = sref;
			}
		}
		System.out.println("Information of Student having Minimun Salary: ");
		temp.DisplayData();
	}
	
	public void AggregateSum()
	{
		long iSum = 0;		
		for(Student sref : lobj)
		{
			iSum = iSum + sref.Salary;
		}
		System.out.println("Summation of Salaries is" +iSum);
	}
	
	public void AggregateAvg()
	{
		long iSum = 0;		
		for(Student sref : lobj)
		{
			iSum = iSum + sref.Salary;
		}
		System.out.println("Average of Salaries is" +iSum/(lobj.size()));
	}
	
}
