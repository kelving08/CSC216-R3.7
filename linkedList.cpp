#include "linkedList.h"

//Class constructor. It sets the head to null
template <typename T>
LinkedList<T>::LinkedList()
    : head(NULL) {}
    
//Class destructor
template <typename T>
LinkedList<T>::~LinkedList()
{while (!empty()) removeFront();}

//Function to check if the list is empty
template <typename T>
bool LinkedList<T>::empty() const {
    return head == NULL;
}

//Function that returns the first element of the list
template <typename T>
const T& LinkedList<T>::front() const {
    return head -> elem;
}

//Function to add an element at the front of the list. The new element will 
//become the head of the list
template <typename T>
void LinkedList<T>::addFront(const T& e) {
    Node<T>* new_node = new Node<T>;
    new_node -> elem = e;
    new_node -> next = head;
    head = new_node;
}

//Function to remove the first element of the list
template <typename T>
void LinkedList<T>::removeFront() {
    Node<T>* old = head;
    head = old -> next;
    delete old;
}

//Function that returns the second to last element of the list
template <typename T>
const T& LinkedList<T>::penultimate() const {

    Node<T>* temp = head;

    if (temp == NULL || temp->next == NULL)
        return -1;

    while(temp != NULL) {
        if(temp->next->next == NULL){
            return temp->elem;
        } else{
            temp = temp->next;
        }
    }
}
