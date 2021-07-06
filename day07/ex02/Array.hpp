# pragma once
# include <iostream>
# include <exception>

template <class T>
class Array
{
    private:
        T *arr;
        size_t size;
    public:
        Array();
        Array(unsigned int size);
        Array(Array<T> const &src);
        ~Array();
        Array<T> &operator=(Array<T> const &src);
        T   &operator[](size_t index);
    class IndexOutOfRangeException : public std::exception
    {
        public :
            char const  *what() const throw()
            {
                return "The index is out of the range";
            }
    };
};

template <class T>
Array<T>::Array()
{
    this->size = 0;
    this->arr = new T[size]();
}

template <class T>
Array<T>::Array(Array<T> const &src)
{
    this->size = 0;
    this->arr = nullptr;
    *this = src;
}

template <class T>
Array<T>::Array(unsigned int size)
{
    this->size = size;
    this->arr = new T[size]();
}

template <class T>
Array<T>   &Array<T>::operator=(Array<T> const &src)
{
    if (this->arr)
        delete [] this->arr;
    this->arr = new T[src.size]();
    for (size_t i = 0; i < src.size; i++)
    {
        arr[i] = src.arr[i];
    }
    return *this;
}

template <class T>
T   &Array<T>::operator[](size_t index)
{
    if (index >= this->size)
        throw Array<T>::IndexOutOfRangeException();
    return arr[index];
}

template <class T>
Array<T>::~Array()
{
    delete arr;
}
