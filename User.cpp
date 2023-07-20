include <iostream>
include <string>

class User
{
private:
	static int max_id = 0;
	std::string name;
	int age;

public:
	User(std::string name, int age):
		name{name},
		age{age}
	{}

	void show()
	{
		std::cout << this->name << '\n';
	}
}