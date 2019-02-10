//STACK USING QUEUE
#include<iostream>
using namespace std;
#include"QueueLL.cpp"

class StackQue
{	public:
 Node*top;		//end pointer
  Que q1,q2;
  StackQue(){
	top=q1.end;
	
  }

//Pushes on top
	void push(int value)
	{
	q1.Enqueue(value);
	//top=new-head;
	top=q1.end;}

void pop()	//to delete the top element
{
		 while(q1.end->next!=NULL){
	q2.Enqueue(q1.end->data);	//leaving last element while pushing
	q1.Dequeue();}
	q1.Dequeue();		//deleting last from the first stack

while(q1.front!=NULL)	//taking everything back
{	q1.Enqueue(q2.end->data);
 	q2.Dequeue();}

}
bool isEmpty(){
	if(top==NULL)return true;	//if end points to null then the stack is empty
	return false;
	}
int size(){	
	return q1.size();		//calling countitems from linkedlist

	}

	void topDisplay(){	
	cout<<"the end element is"<<top->data<<endl;	
	}
	void display()		//function from linkedlist
{
q1.display();
}
};


//execution starts
int main()
{
 StackQue s1;		//eclaring an object from stack class
 for(int i=0;i<5;i++)

 s1.push(i);		//by looping entering elements o the stack
 s1.display();
 
s1.topDisplay();	//displaying element in the top
s1.pop();
/*
for(int i=0;i<7;i++){
 if(i==4){
cout<<"NULL"<<endl;}
else if(i<4){
s1.pop();
s1.display();
cout<<s1.size()<<endl;}
else if(i>4)
{cout<<"cant pop from emty stack"<<endl;
break;}}
*/
cout<< s1.isEmpty()<<endl;
 
cout<<"size of the stack:"<<s1.size()<<endl;
return 0;				//program terminates
}
