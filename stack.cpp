#include "stack.h"
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	cout<<"Peek element is"<<" "<<peek()<<endl;
	pop();
	display();
	return 0;
}
