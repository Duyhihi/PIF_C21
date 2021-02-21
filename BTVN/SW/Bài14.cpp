#include <stdio.h>
#define MAX 100
struct stack{
	int val[MAX];
	int cap;
	int top=0;
};
bool isFull(stack s){
	if (s.cap<=s.top) return true;
	else return false;
}
bool isEmpty(stack s){
	if (s.top<=0) return true;
	else return false;
}
void push(stack &s, int value){
	if (isFull(s)==true) printf("stack da day\n");
	else { 
	s.val[s.top]= value;
	s.top++;
	}
}
void pop(stack &s){
	if (isEmpty(s)==true) printf("stack rong :(\n");
	else s.top--;

}
int top(stack s){
 return s.val[s.top-1];
}
int size(stack s){
	return s.top;
}

int main(){
stack st;
st.cap=5;
pop(st);
push(st,6);
push(st,7);
push(st,8);
push(st,9);
push(st,9);
push(st,10);
	for(int i = 0 ; i < st.cap;i++)
        printf("\nstack[%d] = %d", i,st.val[i]);
	for(int i = 0 ; i < st.cap;i++){pop(st);
		printf("\n gia tri top %d", st.val[st.top]);  	
        printf("\n size %d", st.top); }       
}
