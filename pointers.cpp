
#include <iostream>
#include <string.h>
#include<iomanip>
#include<stdio.h>
using namespace std;


void Combine(char *st1, char *st2);
void copy(char *st1, char *st2);
void Reverse(char *st1,char *st2);
int compare(char *st1,char *st2);
int main(){

int a;
char st1[50]; char st2[50];char st3[50];
cout << "Enter first message: ";
		gets(st1);
cout << "\nEnter second message: ";
		gets(st2);
		copy(st3,st2);
cout << "Copy: " << st3 << endl;
		Combine(st1,st2);
cout << "Combination: " << st1 << endl;
		Reverse(st1,st2);
cout << "Reverse: " << st2 << endl;
	a=compare(st1,st2);
cout << "Compare: ";
		
		if(a>1)
cout << "Equal" << endl;
		else
cout << "Not Equal" << endl;
}

void copy(char *st1, char *st2){
	while(*st1++=*st2++);
}

void Combine(char *st1, char *st2){
	while(*st1)
		*st1++;
	while(*st1++ = *st2++);
}

void Reverse(char *st1,char *st2){
	int n = -1;
		while(*st1)
		{
			*st1++;
			n++;
		}
		while(n >= 0)
		{
			*st1--;
			*st2 = *st1;
			*st2++;
			--n;
		}
		*st2 = '\0';	
}
int compare(char *st1, char *st2){
	int u=0;	
	do{
		if(*st1!=*st2)
		{
			u++;
		}
		st1++;
	}while(*st1!='\0');
	do{
		if(*st1!=*st2)
		{
			u++;
		}
		st2++;
	}while(*st2!='\0');
	return u;
}
