#include "Person.h"
#include <stack>
using namespace std;

stack <Person> persons, apersons;

int main() {
	Person person1("abc", "cba", 99);
	Person person2("qwe", "ewq", 12);
	Person person3("asd", "dsa", 55);
	persons.push(person1);
	persons.push(person2);
	persons.push(person3);
	persons.emplace(person2,person3);
	int i = persons.size();
	persons.pop();
	persons.swap(apersons);
	persons.top();
	persons.empty();

}