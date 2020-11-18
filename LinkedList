#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;

}*start;

node create_node(int val){

	struct node *n;
	n = new node;
	if(n==NULL){
		cout << "not allocated"<<endl;
		return 0;
	}
	else{
		n->data = val;
	    n->next =  NULL;
	    return n;
	}
}
/////////////
void insert_begin(){
	struct node *n,*p;
	int v;
	cin >> v;

	n = create_node(v);
	if(start == NULL){
		start = n;
		start->next = NULL;
	}
	else{
		p = start;
		start = n;
		n = p;
		start->next = p; 
	}
}
//////////////////////
void insert_last(){
	struct node *n , *p;
	int v;
	cin >> v;
	n =  create_node(v);
	s = start;
	while(s->next == NULL){
		s = s->next;
	}
	n->next = NULL;
	s->next = n;
}
void display(){
	struct node *n,*s;
	if(start ==NULL){
		cout <<"list is empty"<<endl;
	}
	s = start;
	while(s->next !=NULL){
		cout << s->data<<"->";
		s = s->next;
	}
}
void int_max(struct node *h)
{
	int max = INT_MIN;

	while(h!=NULL){
		if(h->data > max)
			max = h->data;
		h = h->next;
	}
	return max;

}







//int main(){

//}
