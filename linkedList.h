#include <cstdlib>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
class Node;

//Class to create a singly linked list
template <typename T>
class LinkedList{
    public:
        LinkedList();
        ~LinkedList();
        bool empty() const;
        const T& front() const;
        const T& penultimate() const;
        void addFront(const T& e);
        void removeFront();
    private:
        Node<T>* head;
};

//Create a new Node object
template <typename T>
class Node{
    private:
        T elem;
        Node<T>* next;
        friend class LinkedList<T>;
};

#endif
