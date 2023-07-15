include <iostream>
include <string>

class User
{
private:
	std::string name;
	int age;

public:
	User(std::string name, int age):
		name{name},
		age{age}
	{}
}