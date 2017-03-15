#include <iostream>
#include "derived.hpp"

using namespace std;

int main() {
	Derived<5> derived;
	cout << derived.getNum() << '\n';
	return 0;
}