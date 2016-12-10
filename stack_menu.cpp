#include <iostream>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
	int * s;
	int top;
	int maxelem;
};

void menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	
}

int main() {
  Stack * s = new Stack(100);
  int i;
  int j;
  int v;
  int l = 1;
  
  do{
system("cls");	
  menu();
  
  cin >> i;
  switch(i)
  {
  	case 1: 
  	{
  	cout << "Select any numbers to push: " << endl;
  	cin >> v;
  	s -> push(v);
  	system("pause");
  	break;
  	}
  	case 2:
  	{
	s -> pop();
	system("pause");
	break;
	}
	case 3:
	{
	s -> display();	
	system("pause");
	break;
	}
	case 4:
	{
	exit(1);
	}
  		
  }
}while(l=1);
  
  return 1;
  
}
