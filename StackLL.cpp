//STACK USING LINKEDLIST
//library
#include<iostream>
#include"LL.cpp"
using namespace std;

//defining stack
class StackLL
{
  public:	
  Node*top;		//end pointer
  Linkedlist l1;
  StackLL(){
	top=l1.head;
  }
 //Pushes on top
	void push(int value)
	{
	l1.insertAt(1,value);
	//top=new-head;
	top=l1.head;}

 //pops the top
	void pop(){
	l1.deleteAt(1);
	//top=new_head;
	top=l1.head;
 	}


	bool isEmpty(){
	if(top==NULL)return true;	//if end points to null then the stack is empty
	return false;
	}

	int size(){	
	return l1.countItems();		//calling countitems from linkedlist

	}

	void topDisplay(){	
	cout<<"the end element is"<<top->data<<endl;	
	}
	void display()		//function from linkedlist
{
l1.display();
}
};


//execution starts
int main()
{
 StackLL s1;		//eclaring an object from stack class
 for(int i=0;i<5;i++)

 s1.push(i);		//by looping entering elements o the stack
 s1.display();
 cout<<"the top element is:";
s1.topDisplay();	//displaying element in the top
for(int j=0;j<6;j++){
if(s1.isEmpty()==1)		//call for functions
{
 cout<<"poping out from an empty stack"<<endl;
break;}else{
 s1.pop();
if(j<5)
s1.display();
else if(j=5)
cout<<"NULL";}

}

cout<< s1.isEmpty()<<endl;
 
cout<<"size of the stack:"<<s1.size()<<endl;
return 0;				//program terminates
}

