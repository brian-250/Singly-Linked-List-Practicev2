#include <iostream>

#include "sll.h"

template <typename T>
SinglyLinkedList<T>::SinglyLinkedList() : head_(nullptr), tail_(nullptr), size_(0) {}

template <typename T>
int SinglyLinkedList<T>::size()
{
  return this->size_;
}

template <typename T>
void SinglyLinkedList<T>::pushBack(T data)
{
  // new_node pointer is initialized to
  // a dynamically allocated Node object
  Node<T> *new_node = new Node<T>(data);
  if ((head_ == nullptr) && (tail_ == nullptr))
  {
    head_ = new_node;
    tail_ = new_node;
    size_++;
  }
  else
  {
    tail_->next_ = new_node;
    tail_ = tail_->next_;
    size_++;
  }
}

template <typename T>
void SinglyLinkedList<T>::popBack()
{
  if ((head_ == nullptr) && (tail_ == nullptr))
  {
    std::cout << "SinglyLinkedList is empty!\n"
              << "You cannot popBack() anymore nodes\n";
  }
  else if (head_ == tail_)
  {
    delete head_;
    head_ = nullptr;
    tail_ = nullptr;
  }
  else
  {
    Node<T> *tmp = head_;
    while (tmp->next_ != tail_)
    {
      tmp = tmp->next_;
    }
    tail_ = tmp;
    tmp = tmp->next_;
    tail_->next_ = nullptr;
    delete tmp;
    tmp = nullptr;
    size_--;
  }
}

template <typename T>
void SinglyLinkedList<T>::printList()
{
  if ((head_ == nullptr) && (tail_ == nullptr))
  {
    std::cout << "SinglyLinkedList is empty!\n";
  }
  else
  {
    Node<T> *tmp = head_;
    while (tmp != nullptr)
    {
      std::cout << tmp->data_ << '\n';
      // Traverse the SinglyLinkedList
      tmp = tmp->next_;
    }
  }
}
