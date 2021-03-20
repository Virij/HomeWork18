#include <iostream>
#include <vector>

class Stack
{
	std::vector<int> massive;
	
public:
	void push(int newValue)
	{
		massive.push_back(newValue);
	}
	void pop()
	{
		massive.pop_back();
	}
	void show()
	{
		std::cout << "massive = { ";
		for (int n : massive)
		{
			std::cout << n << ", ";
		}
		std::cout << "}; \n";
	}
};

void main()
{
	// Создаем пустой стек
	Stack stack;
	std::cout << "Init: ";
	// Смотрим содержимое стека
	stack.show();

	// Добавляем несколько элементов в стек
	stack.push(3);
	stack.push(5);
	stack.push(8);

	std::cout << "Filled: ";
	// Смотрим содержимое стека
	stack.show();
	// Убираем из стека последний добавленный элемент
	stack.pop();
	std::cout << "After pop(): ";
	// Смотрим содержимое стека
	stack.show();
	// Убираем из стека последний добавленный элемент
	stack.pop();
	std::cout << "after pop(): ";
	// Смотрим содержимое стека
	stack.show();

}