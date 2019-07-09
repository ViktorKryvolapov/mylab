#include "first.h"
A::A()
	:m_count(0)
{
	std::cout<<"ctor"<<std::endl;
}
A::~A()
{
	std::cout<<"dctor";
}
