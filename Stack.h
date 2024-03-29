#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음

template <class T> class Stack : public LinkedList<T> {
public:
	bool Delete(T& element);
};

template <class T> bool Stack<T>::Delete(T& element) {
    if (LinkedList<T>::current_size == 0) 
        return false;

	Node<T>* current = this->first;
	this->first = current->link;
	element = current->data;
	delete current;
	this->current_size--;
	return true;

    return true;
}
