/*
simple stack implementation(manual) using class
*/ 

#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
	int arr[5];
	int top;
public:
	Stack(){ //inititally values of stack is zero(empty)
		top = -1;
		for (int i = 1; i < 5; ++i)
		{
			arr[i]=0;
		}
	}
	void push(int value){ //push the new value
		if (isfull()){
			cout << "stack is full!";
		}
		else{
			top++;
			arr[top] = value;
		}
	}
	
	int pop(){ //pop the top(peak) value and print it
		if (isempty()){
			cout << "stack is empty";
			return 0;
		}
		else{
			int tempvalue = arr[top];
			arr[top] = 0;
			top--;
			return tempvalue;
		}

	}
	bool isfull(){ //check if stack is full or not
		if (top==5){
			return true;
		}
		else{
			return false;
		}
	}
	bool isempty(){ //checks if stack is empty or not
		if (top==-1){
			return true;
		}
		else{
			return false;
		}
	}
	int peak(){ //return the top/peak value in stack
		int ans = arr[top];
		return ans;
	}

};

int main(){
	//implementation successfull lets check everything is good!
	Stack sakthi;
	for (int i = 1; i < 6; ++i)
	{
		sakthi.push(i);
	}
	sakthi.pop();
	//cout << sakthi.pop()<<endl;
	//cout << sakthi.pop()<<endl;
	//cout << sakthi.pop()<<endl;
	//cout << sakthi.pop()<<endl;
	cout << sakthi.peak()<<endl;

	// cout << sakthi.pop()<<endl;
	// cout << sakthi.pop()<<endl;

	//cout << sakthi.pop();
}
//everything working fine :)
