#include "first.h"
A::A()
	m_name("default")
{
	std::cout<<"ctor"<<std::endl;
}
A::~A()
{
	std::cout<<"dctor";
}
void A::show()
{
	cout << "hello world\n";
}
