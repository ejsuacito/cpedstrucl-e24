#include <iostream>
using namespace std;

class Linkedlist{
	struct Node{
		int data;
		Node *next;
	};
	
	public:
		Linkedlist(){
			head = NULL;
		}
		void insert();
		void pop()
		{
			if (head==NULL)
			cout << "Stack is empty! " << endl;
			else{
			Node *node = head;
			int ret = node -> data;
			
			head = head -> next;
			delete node;
	
			}
		}
		void display();
	private:
		Node *head;
};
void Linkedlist::insert( )
{
	Node *node;
	int value;
	cout << "Insert a value: " << endl;
	cin >> value;
	node = new Node;
	node -> data = value;
	node -> next = head;
	
	head = node;
	cout << "New Value added! " << endl;
};


void Linkedlist::display()
{
	Node *node = head;
	
	while(node){
	cout<<node->data << " " << endl;
	node = node->next;
	}
};


int main(){
	Linkedlist s;
	int choice;

	while(1){
	system("cls");
	cout << "MENU" << endl;
	cout << "[1] - Insert " << endl;
	cout << "[2] - Pop " << endl;
	cout << "[3] - Exit " << endl;
	cout << "[4] - Display " << endl;
	cin >> choice;
	cout << "------------------" << endl;
	switch(choice){
		case 1:
			{
				s.insert();
				system("pause");
				break;
			}
		case 2:
			{
				
			 	s.pop();
				system("pause");
				break;
			}
		case 3:
			{
				exit(1);
				break;
			}
		case 4:
			{
				s.display();
				system("pause");
				break;
			}
		default:
			{
				cout << "Invalid Input " << endl;
				break;
				return (1);
			}
	}
}
	return 0;
}
