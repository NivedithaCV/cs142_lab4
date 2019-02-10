#include<iostream>
using namespace std;

class StackArr 		//defining Stack
{	public:
	int top;
	int Arr[50];
	StackArr()	//constructor
{
	top=-1;
}

void push(int value)
{
top++;			//increasing the index
Arr[top]=value;		//giving value in the top
}

void pop()
{
top--;		//decreasing the index
if (top==-1)		//if the index is anything other than naturalno
{
cout<<"STACK IS EMPTY.CANNOT POP"<<endl;
}
}

bool isEmpty()
{
if(top==-1)	//if index is anything otherthan natural no
return true;
else
return false;
}


int size()
{
return (top);	//value of last index
}

void topDisplay()
{cout<<"top element is:"<<Arr[top]<<endl;
}

void Display()
{
for(int i=1;i<(top+1);i++)
cout<<Arr[i]<<"->";		//displaying till top
cout<<"NULL"<<endl;}
};
int main()		//exeution starts
{StackArr s1;		
for(int i=0;i<6;i++)	//call for the functions
s1.push(i);
s1.Display();
s1.topDisplay();
cout<<"size of the stack:"<<s1.size()<<endl;
for (int i=0;i<6;i++){
s1.pop();
s1.Display();}
cout<<s1.isEmpty()<<endl;
return 0;	//termination
}

  
