//QUEUE USING TWO STACKS
//library
#include<iostream> 
using namespace std;
#include"StackLL.cpp"	//coping file

class QueStack	
{
public:
Node*front;	//pointing to first
Node*end;	//last pointer
StackLL s1,s2;
QueStack(){	//constructor
end=s1.top;	//default value
front=s1.top;
}

void enqueue(int value)		//entering at top
{
s1.push(value);		//push function
end=s1.top;
if(front==NULL)
{front=s1.top;}
}

void dequeue()		//deleting from bottom
{
  while(s1.top->next!=NULL){
	s2.push(s1.top->data);	//leaving last element while pushing
	s1.pop();}
	s1.pop();		//deleting last from the first stack

while(s2.top!=NULL)	//taking everything back
{	s1.push(s2.top->data);
 	s2.pop();}

}
bool isEmpty(){
	return s1.isEmpty();	//stack function
}

int size(){
return s1.size();	//stack function
}

void display(){
s1.display();}
};


int main()	//execution starts
{int i,c;
QueStack q1;			//object from class queue
for(i=0;i<5;i++){
q1.enqueue(i);}		//inserting value till 5
q1.display();
cout<<q1.size()<<endl;

if(q1.isEmpty()==0)
{cout<<"stack is not empty"<<endl;}
else
{cout<<"stack is empty"<<endl;}



for(i=0;i<7;i++){
 if(i==4){
cout<<"NULL"<<endl;}
else if(i<4){
q1.dequeue();
q1.display();
cout<<q1.size()<<endl;}
else if(i>4)
{cout<<"cant dequeue from empty list"<<endl;
break;}}

return 0;		//execution stops
}
