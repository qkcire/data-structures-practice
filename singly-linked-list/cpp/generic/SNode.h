#pragma once
#include <string>

template <typename E>
class SNode {
private:
  E elem:
  SNode<E>* next;
  friend class SLinkedList<E>;
};

// real-quick change