import java.lang.*;
import java.util.*;

class LinkedListJava
{
	public static void main(String agr[])
	{
		SinglyLL obj = new obj();
		obj.InsertFirst(11);
		obj.InsertFirst(21);
		obj.InsertFirst(51);
		obj.InsertFirst(101);
		obj.InsertAtPos(55, 3);
	}
}

class node
{
	public int data;
	public node next;
}
class SinglyLL
{
	public node Head;
	public int Count;

	public SinglyLL()
	{
		Head = null;
		Count =0;
	}
	public void InsertFirst(int no)
	{
		node newn = new node();
		newn.data = no;
		newn.next = null;

		if(Head == null)
		{
			Head = newn;
		}
		else
		{
			newn.next = Head;
			Head = newn;
		}
		Count++;	
	}

	public void InsertLast(int no)
	{
		node newn = new node();
		newn.data = no;
		
		if(Head == null)
		{
			node temp = Head;
			while(temp.next!=null)
			{
				temp = temp.next;
			}
			temp.next = newn;
		}
		Count++;	
	}

public void DeleteLast()
{
	if(Count ==0)
	{
		return;
	}
	else if(Count == 1)
	{
		Head= null;
	}
	else
	{
		node temp =Head;
		Head = Head.data;
		while(temp.next.next!=null)
		{
			temp = temp.next;
		}
		temp.next = null;
	}
	Count--;
}

public void DeleteFirst()
{
	if(Count == 0)
	{
		return;
	}
	else if(Count == 1)
	{
		Head= null;
	}
	else
	{
		Head = Head.data;
	}
	Count--;
}

public void InsertAtPos(int no, int pos)
{
	if((pos<1)||pos>(Count+1))
	{
		return;
	}
	if(pos ==1)
	{
		InsertFirst(no);
	}
	if(pos ==(Count+1))
	{
		InsertLast(no);
	}
	else
	{
		node newn = new node();
		newn.data = no;
		newn.next =null;

		node temp = Head;
		for(int i=0; i<pos-1;i++)
		{
			temp = temp.next;			
		}
		newn.next = temp.next;
		temp.next = newn;
		Count++;
	}
}

public void DeleteAtPos(int pos)
{
	if((pos<1)||(pos>Count))
	{
		return;
	}
	if(pos ==1)
	{
		DeleteFirst();
	}
	if(pos ==(Count+1))
	{
		DeleteLast();
	}
	else
	{
		node temp = Head;
		for(int i=0; i<pos-1;i++)
		{
			temp = temp.next;
		}
		Count--;
	}
}
	public void Display()
	{
		node temp = Head;
		System.out.println("Element of Linked List are:");
		while(temp!=null)
		{
			System.out.print(temp.data);
		}
	}
}

