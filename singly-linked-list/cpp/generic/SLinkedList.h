#include "SNode.h"

template <typename E>
class SLinkedList {
public:
  SLinkedList();
  ~SLinkedList();
  bool empty() const;
  const E& front() const;
  void addFront(const E& e);
  void removeFront();
private:
  SNode<E>* head;
}