#include<iostream>
using namespace std;

class QueueArr
{
	public:
	int front;	//index of the first element
	int end;        //index of the last element
	int Arr[50];
	QueueArr()	//default constructor
{
	front=0;
	end=-1;
}

void enqueue(int value)
{
  end++;	//increasing index
  Arr[end]=value;
}

void dequeue()
{
front++;   //removing first element
}

bool isEmpty()
{
if(front==end&&Arr[end]==0)
return true;
else 
return false;
}
int size()
{
return (end-front);	//getting the difference of inedex
}

void Display()
{
for(int i=(front+1);i<(end+1);i++)

cout<<Arr[i]<<"->";	//displaying from front to end
cout<<"NULL"<<endl;
}
};

int main()	//execution starts
{int i,c;
QueueArr q1;			//object from class queue
for(i=0;i<5;i++){
q1.enqueue(i);}		//inserting value till 5
q1.Display();
cout<<q1.size()<<endl;

if(q1.isEmpty()==0)
{cout<<"stack is not empty"<<endl;}
else
{cout<<"stack is empty"<<endl;}
cout<<q1.size()<<endl;


for(i=0;i<7;i++){
 if(i==4){
cout<<"NULL"<<endl;}
else if(i<4){
q1.dequeue();
q1.Display();
cout<<q1.size()<<endl;}
else if(i>4)
{cout<<"cant dequeue from empty list"<<endl;
break;}}
 
return 0;		//execution stops
}
