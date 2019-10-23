#include <iostream>
#include <cstdlib>
#include "priority_queue.h"

using namespace std;

template <typename T>
void pushQueue(templatePriorityQueue<T>* Que, int data){
	cout << "[+] Integer "<< data <<" pushed in the Priority Queue." << endl;
	Que->push(data);
}

template<typename T>
T popQueue(templatePriorityQueue<T>* Que){
	cout << "[+] Integer "<< Que->top() << " will be poped from the Priority Queue." << endl;
	return Que->pop();
}

int main(int argc, char* argv[]){
	templatePriorityQueue<int> priQueue;
	int custom_number = 0;

	//empty check
	if(priQueue.empty()){
		cout << "[!] Priority Queue is empty - initalized" << endl;
	}

	// push
	pushQueue(&priQueue,23);
	pushQueue(&priQueue,598);
	pushQueue(&priQueue,302);

	if (argc > 1) {
		custom_number = atoi(argv[1]);
		if (custom_number > -500 && custom_number < 2000) {
			pushQueue(&priQueue,custom_number);
		} else {
			pushQueue(&priQueue,-1);
		}
	} else {
		pushQueue(&priQueue,-1);
	}

	//empty & size
	if (priQueue.empty()) {
		cout << "[-] Priority Queue is empty. - Push method did not work!" << endl;
		return -1;
	} else {
		cout << "[+] Priority Queue has data. - Queue Size : " << priQueue.size() <<endl;
	}

	// pop twice
	popQueue(&priQueue);
	popQueue(&priQueue);

	cout << "[+] Now, Top element of Priority Queue is " << priQueue.top() << endl;
	
	return 0;
}
