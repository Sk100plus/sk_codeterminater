// C++ program to Implement a stack
// using singly nexted list
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node(int n)
	{
		this->data = n;
		this->next = NULL;
	}
};

class Stack {
	Node* top;

public:
	Stack() { top = NULL; }

	void push(int data)
	{
		Node* temp = new Node(data);
		if (!temp) {
			cout << "Stack is Overflow now";
            return;
		}
		temp->data = data;
		temp->next = top;
		top = temp;
	}
	bool isEmpty()
	{
		return top == NULL;
	}
	int peek()
	{
		if (!isEmpty())
			return top->data;
		else
			return -1;
	}
	Node* pop()
	{
		Node* temp=NULL;

		// Check for stack underflow
		if (top == NULL) {
		return temp;
		}
		else {
			temp = top;
			top = top->next;
            return temp;
			free(temp);
		}
	}
	void display()
	{
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow";
		return;
		}
		else {
			temp = top;
			while (temp != NULL) {
				cout << temp->data<<" ";
				temp = temp->next;
			}
		}
	}
};

int main()
{
	Stack s;
	s.push(11);
	s.push(22);
	s.push(33);
	s.push(44);
	s.display();
	cout << "\nTop element is " << s.peek() << endl;
Node* temp=s.pop();
	cout<<"Popped element is : "<<temp->data<<endl;
	// cout<<"Popped element is : "<<s.pop()<<endl;

	s.display();

	cout << "\nTop element is " << s.peek() << endl;

	return 0;
}
