#pragma once

#include "Sequences.h"

template <typename T> class LinkedListSequence : public Sequence<T> {
public:
  LinkedListSequence() : data() {}

  LinkedListSequence(T *items, int count) : data(items, count) {}

  LinkedListSequence(int count) : data(count) {}

  LinkedListSequence(const LinkedList<T> &list) { //конструктор по объекту
    LinkedList<T> *tmp = new LinkedList<T>(list);
    std::cout << "Constructor by object . . .\n";
    data = *tmp;
  }

  int GetLength() { return data.GetLength(); }

  T &GetFirst() { return data.GetFirst(); }

  T &GetLast() { return data.GetLast(); }

  T &Get(int index) { return data.Get(index); }

  void Append(T item) { data.Append(item); }

  void Prepend(T item) { data.Prepend(item); }

  void InsertAt(T item, int index) { data.InsertAt(item, index); }

  void removeAt(int index) { data.removeAt(index); }

  void Print() { data.print_from_begin(); }

  void QuickSort(bool (*cmp)(const T &, const T &)) override {
    IQuickSort<T> sort;
    sort.Sort(cmp, this);
  }

  void MergeSort(bool (*cmp)(const T &, const T &)) override {
    IMergeSort<T> sort;
    sort.Sort(cmp, this);
  }

  void ShellSort(bool (*cmp)(const T &, const T &)) override {
    IShellSort<T> sort;
    sort.Sort(cmp, this);
  }

private:
  LinkedList<T> data;
};
