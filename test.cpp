#include <iostream>

class test
{
	private:
		int x;

	public:
		test(int value);
		test();
		test(const test &copy);
		test &operator=(const test &copy);
		~test();
		void setVal(int value);
		int getVal();
};

test::test(int value)
{
	std::cout << "Constructor with value called." << std::endl;
	this->x = value;
}
test::test()
{
	std::cout << "Default Constructor called." << std::endl;
	this->x = 0;
}

test::test(const test &copy)
{
	std::cout << "Copy Constructor called." << std::endl;
	this->x = copy.x;
}

test &test::operator=(const test &other)
{
	std::cout << "Copy Assignment operator called." << std::endl;
	if (this != &other)
		this->x = other.x;
	return (*this);
}

test::~test()
{
	std::cout << "Destructor Called" << std::endl;
}

void test::setVal(int value)
{
	this->x = value;
}

int test::getVal()
{
	return (this->x);
}


int main (void)
{
	test first;
	test second(42);
	test third = second;

	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Val for first is  : " << first.getVal() << std::endl;
	std::cout << "Val for second is : " << second.getVal() << std::endl;
	std::cout << "Val for third is  : " << third.getVal() << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	first = second;
	third.setVal(31);
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Val for first is  : " << first.getVal() << std::endl;
	std::cout << "Val for second is : " << second.getVal() << std::endl;
	std::cout << "Val for third is  : " << third.getVal() << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

	return (0);
}
