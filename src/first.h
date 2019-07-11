#include <iostream>
#include <string>

class A 
{
public:
	A();
	~A();
	void show();
	const string & getName()const {return m_name;}
private:
	std::string m_name;
};
