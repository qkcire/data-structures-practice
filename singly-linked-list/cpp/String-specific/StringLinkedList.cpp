#include "StringLinkedList.h"

//constructor
StringLinkedList::StringLinkedList()
  : head(NULL) { }

//destructor
StringLinkedList::~StringLinkedList() {
  while (!empty())
    removeFront();
}

//determine if list is empty
bool StringLinkedList::empty() const {
  return head == NULL;
}

//return front element
const std::string& StringLinkedList::front() const {
  return head->elem;
}

//add an element to the front
void StringLinkedList::addFront(const std::string& e) {
  StringNode* v = new StringNode;
  v->elem = e;
  v->next = head;
  head = v;
}

//remove element from front
void StringLinkedList::removeFront() {
  StringNode* old = head;
  head = old->next;
  delete old;
}