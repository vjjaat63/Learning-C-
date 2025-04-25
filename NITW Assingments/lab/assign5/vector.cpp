#include <iostream>
using namespace std;

template <class T>

class vector
{
  T *arr;
  int size;
  int capacity;

public:
  vector()
  {
    arr = NULL;
    size = capacity = 0;
  }

  vector(int n)
  {
    arr = new T[n];
    size = 0;
    capacity = n;
  }

  ~vector()
  {
    delete[] arr;
  }

  void push_back(T x)
  {
    if (size == capacity)
    {
      capacity = (capacity == 0) ? 1 : 2 * capacity;

      T *arr2 = new T[capacity];
      for (int i = 0; i < size; i++)
        arr2[i] = arr[i];

      delete arr;
      arr = arr2;
    }
    arr[size++] = x;
  }

  T pop_back()
  {
    if (size == 0)
    {
      cout << "Array is empty !" << endl;
      return -1;
    }

    T value = arr[--size];
    return value;
  }

  bool empty()
  {
    return size == 0;
  }

  int this_size()
  {
    return size;
  }

  int this_capacity()
  {
    return capacity;
  }

  void erase(int pos)
  {
    if (pos > size - 1 || pos < 0)
    {
      cout << "Enter a valid index/position" << endl;
      return;
    }
    else
      for (int i = pos; i < size - 1; i++)
      {
        arr[i] = arr[i + 1];
      }
    size--;
  }

  T *begin()
  {
    return arr;
  }

  T *end()
  {
    return arr + size;
  }

  void insert(int index, T value)
  {
    if (index > size || index < 0)
    {
      cout << "Enter a valid index/position" << endl;
      return;
    }
    if (size == capacity)
    {
      capacity = (capacity == 0) ? 1 : 2 * capacity;
      T *newArr = new T[capacity];

      for (int i = 0; i < size; ++i)
        newArr[i] = arr[i];

      delete[] arr;
      arr = newArr;
    }

    for (int i = size; i > index; i--)
      arr[i] = arr[i - 1];

    arr[index] = value;
    size++;
  }

  const T operator[](int pos)
  {
    if (pos >= size || pos < 0)
      return -1;

    return arr[pos];
  }

  const T at(int pos)
  {
    if (pos >= size || pos < 0)
      return -1;

    return arr[pos];
  }

  void remove()
  {
    delete[] arr;
    size = 0;
    arr = NULL;
  }

  void sort()
  {
    for (int i = 0; i < size - 1; i++)
    {
      for (int j = 0; j < size - 1; j++)
      {
        if (arr[j] > arr[j + 1])
          swap(arr[j], arr[j + 1]);
      }
    }
  }

  void print()
  {
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
};

int main()
{
  vector<char> v;
  v.push_back('d'); // pushing
  v.push_back('s');
  v.push_back('b');
  v.push_back('h');
  v.push_back('j');
  cout << "The current vector is : ";
  v.print();
  v.pop_back(); // poping
  cout << "After pop_back once : ";
  v.print();

  cout << "Is vector empty " << v.empty() << endl;
  cout << "Capacity of the vector is : " << v.this_capacity() << endl;
  cout << "Size of the vector is : " << v.this_size() << endl;
  cout << "Address of the first element of the vector is : " << v.begin() << endl;
  cout << "Address of the last element of the vector is : " << v.end() << endl;
  cout << "Element at a certain position using at : " << v.at(3) << endl;
  v.insert(3, 'p'); // inserting 0 at index 3
  v.print();
  v.sort();
  cout << "Vector after sorting  : ";
  v.print();

  return 0;
}
