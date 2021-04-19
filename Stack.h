#pragma once
#ifndef STACK_H
#define STACK_H
template<typename T>
class Stack
{
	enum abc
	{
		definecapacity = 2
	};
private:
	T* array;
	int capacity;
	int t;
public:
	explicit Stack(int size=definecapacity);
	int size() const;
	bool empty()const;
	void push(const T& elem);
	void pop()  throw(const char*);
	const T& top() const throw(const char*);
	void stackoverflow();
};
#endif // !STACK_H
template<typename T>
Stack<T>::Stack(int size) :capacity(size), t(-1), array(new T[capacity])
{}
template<typename T>
int Stack<T> ::size() const
{
    return this->t + 1;
}
template<typename T>
bool Stack<T>::empty() const
{
    return t == -1;
}
template<typename T>
void Stack<T> ::stackoverflow()
{
    this->capacity += 100;
    T* creatnewone = new T[this->capacity];
    for (size_t i = 0; i < this->t + 1; i++)
    {
        creatnewone[i] = array[i];
    }
    delete[]array;
    array = creatnewone;
}
template<typename T>
void Stack<T>::push(const T& elem)
{
    if (empty())
    {
        this->stackoverflow();
        array[++this->t] = elem;
    }
    else
        array[++this->t] = elem;

}
template<typename T>
const T& Stack<T> ::top()const throw(const char*)
{
    if (empty())
        throw"stack is empty";
    else
        return array[t];
}
template<typename T>
void Stack<T> ::pop() throw(const char*)
{
    if (empty())
        throw"stack is empty";
    else
        --this->t;
}

