#pragma once
#include <string>

template<typename T>
struct Node {
	T data;
	Node *Next;
	Node *Prev;
};

template<typename T>
class List {
private:
	Node<T> *head;
	Node<T> *tail;
	int Size;
public:
	List();
	~List();

	void push_back(T data); // done

	int GetSize() { return Size; } // done

	void clear(); // done

	void push_front(T data); // done

	void insert(T data, int index); // done

	void pop_front(); // done

	void removeAt(int index);

	void pop_back(); // done

	void show(); // done

	T showElementByIndex(int index); // done



};

template<typename T>
List<T>::List() {
	Size = 0;
	head = tail = NULL;
}

template<typename T>
List<T>::~List() {
	clear();
}

template<typename T>
void List<T>::push_back(T data) {

	Node<T> *temp = new Node<T>;

	temp->Next = NULL;
	temp->data = data;
	temp->Prev = tail;

	if (tail != NULL) {
		tail->Next = temp;
	}
	if (Size == 0) {
		head = tail = temp;
	}
	else {
		tail = temp;
	}
	Size++;
}

template<typename T>
void List<T>::push_front(T data) {
	Node<T> *temp = new Node<T>;
	temp->Prev = NULL;
	temp->data = data;
	temp->Next = head;

	if (head != NULL) {
		head->Prev = temp;
	}
	if (Size == 0) {
		head = tail = temp;
	}
	else {
		head = temp;
	}
	Size++;
}

template<typename T>
void List<T>::show() {
	if (Size != 0) {
		Node<T> *temp = head;
		while (temp->Next != NULL) {
			cout << temp->data << " ";
			temp = temp->Next;
		}
		cout << temp->data << endl;
	}

}

template<typename T>
void List<T>::insert(T data, int index) {

	if (index == 0) {
		push_front(data);
	}

	if (index == Size) {
		push_back(data);
	}

	else {
		Node<T> *Ins = head;
		int i = 0;
		while (i < index) {
			Ins = Ins->Next;
			i++;
		}
		Node<T> *befIns = Ins->Prev;
		Node<T> *temp = new Node<T>;

		temp->data = data;
		temp->Next = Ins;
		temp->Prev = befIns;
		Ins->Prev = temp;
		befIns->Next = temp;


	}
	Size++;
}
template <typename T>
void List<T>::removeAt(int index) {
	if (index == 0) {
		pop_front();
	}
	if (index == Size) {
		pop_back();
	}
	else {
		Node<T> *previous = head;
		for (int i = 0; i < index - 1; i++) {
			previous = previous->Next;
		}
		Node<T> *toDelete = previous->Next;
		Node<T> *nextToDelete = toDelete->Next;
		previous->Next = toDelete->Next;
		nextToDelete->Prev = toDelete->Prev;

		delete toDelete;

		Size--;
	}
}

template <typename T>
void List<T>::clear() {
	while (Size) {
		pop_front();
	}
	cout << "List was cleared" << endl;
}

template <typename T>
void List<T>::pop_back() {
	removeAt(Size - 1);
}

template <typename T>
void List<T>::pop_front() {
	Node<T> *temp = head;
	head = head->Next;
	delete temp;
	Size--;
}

template <typename T>
T List<T>::showElementByIndex(int index) {
	//cout << "Let`s find from left" << endl;
	if (index <= Size - index) {
		Node<T> *temp = head;

		int counter = 0;

		while (temp != NULL) {
			if (counter == index) {
				return temp->data;
			}
			temp = temp->Next;
			counter++;
		}
	}

	else {
		//cout << "Let`s find from right" << endl;
		Node<T> *temp = tail;
		int counter = 0;
		while (temp != NULL) {
			if (counter == index) {
				return temp->data;
			}
			temp = temp->Prev;
			counter++;
		}
	}

}
