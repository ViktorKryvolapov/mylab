#include <iostream>

class A 
{
public:
	A();
	~A();
	void show();
	int getGount(){return m_count;}
private:
	int m_count;
};
