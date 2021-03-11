#include "std_lib_facilities.h"

class Person
{
	public:

	//getting field
	int get_age() const {return age;}
    string get_first_name() const {return first_name;}
	string get_second_name() const { return second_name; }

	//setting field
	int set_age(int age) { this->age = age; }
	string set_first_name(string first_name) { this->first_name = first_name; }
	string set_second_name(string second_name) { this->second_name = second_name; }
	
	//constructor
	Person(string first_name = "", string second_name = "", int age = 0)
	{
		this->first_name = first_name; 
		this->second_name = second_name;
		this->age = age;
		if (age < 0 || age > 150)
		{
			error("Not in scale!");
		}
		for (char s : first_name+second_name)
		{
			if (!isalpha(s))
			{
				error("Not allowed character in name: ");
			}
		}
	}

	private:
		string first_name;
		string second_name;
		int age;

};

//reading operator for Person class
istream& operator>>(istream& is, Person& p)
{
	string first_name;
	string second_name;
	int age;
	
	is >> first_name >> second_name >> age;
	p = Person(first_name, second_name, age);

	return is;
}

//writing operator for Person class
ostream& operator<<(ostream& os, Person& p)
{
	return os << "first_name: " << p.get_first_name() << "\n" << "second_name: " << p.get_second_name() << "\n" << "age: " << p.get_age() << "\n";
}


int main()
{
	//Person Goofy("Goofy", 63);
	//cout << "name: " << Goofy.get_name() << "\n" << "age: " << Goofy.get_age() << "\n";
	vector<Person> v;
	Person p;

	cout << "Define first_name, second_name, age values separated with spaces!" << "\n";
	while (cin >> p)
	{
		v.push_back(p);
	}
	cout << "\n";
	for (Person p : v)
	{
		cout << p;
	}
}