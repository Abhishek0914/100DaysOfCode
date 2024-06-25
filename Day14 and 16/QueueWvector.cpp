#include<iostream>
using namespace std;
class Queue{
	int Q[10000];
	int capacity;
	int frontIndex;
	int endIndex;
	
	public:
	Queue(int size){
		capacity = size;
		frontIndex=0;
		endIndex=0;
	}
	
	void push(int a){
		Q[endIndex]=a;
		endIndex++;
	}
	
	int front(){
		// make sure Q isn't empty
		return Q[frontIndex];
	}
	
	void pop(){
		frontIndex++;
	}
	
	int size(){
		return endIndex-frontIndex;
	}
	
	void print(){
		cout<<"Queue is: ";
		for(int i=frontIndex; i<endIndex; i++){
			cout<<Q[i]<<" ";
		}
		cout<<"\n";
	}
};


int main(){
	Queue Q= Queue(5);
	Q.push(3);
	Q.print();
	Q.push(4);
	Q.print();
	Q.push(5);
	Q.print();
	cout<<"Removing from queue,"<<endl;
	Q.pop();
	Q.print();
	cout<<"front: "<<Q.front()<<"\n";
	Q.pop();
	Q.print();
	cout<<"Adding again,"<<endl;
	Q.push(8);
	Q.print();
	cout<<"size: "<<Q.size()<<"\n";
	Q.pop();
	Q.print();
	cout<<"front: "<<Q.front()<<"\n";
}