#ifndef stack_h
#define stack_h
#include<iostream>
using namespace std;
const int size=100;
int stack[size];
int top=-1;
bool isempty(){
	return top==-1;
}
bool isfull(){
	return top==size-1;
}
void push(int val){
	if(isfull()){
		cout<<"Stack is full"<<endl;
		return;
	}
	else{
		stack[++top]=val;
	}
}
int pop(){
	if(isempty()){
		cout<<"Stack is underflow"<<endl;
		return -1;
	}
	return stack[top--];
}
int peek(){
	if(isempty()){
		cout<<"No top"<<endl;
		return -1;
	}
	return stack[top];
}
void display(){
	if(isempty()){
		cout<<"Stack is underflow"<<endl;
		return;
	}
	for(int i=top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
	cout<<endl;
}
#endif

