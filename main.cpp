#include "Person.h"
#include <stack>
#include <vector>
using namespace std;

stack <Person> persons, apersons;

int main() {
	Person person1("abc", "cba", 99);
	Person person2("qwe", "ewq", 12);
	Person person3("asd", "dsa", 55);
	persons.push(person1);
	persons.push(person2);
	persons.push(person3);
	persons.emplace("Szymon", "Wasacz", 55);
	int i = persons.size();
	apersons.push(person3);
	persons.swap(apersons);
	vector<Person> array;
	while (!apersons.empty()) {
		cout << apersons.top();
		array.push_back(apersons.top());
		apersons.pop();
	}
	
	persons.empty();
	system("pause");
	return 0;
}