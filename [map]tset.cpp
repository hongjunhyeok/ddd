#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	// map
	// <string, int> => <key, value>
	map< string, int > m;


	// insert(key,value)
	m.insert(make_pair("a", 1));
	m.insert(make_pair("b", 2));
	m.insert(make_pair("c", 3));
	m.insert(make_pair("d", 4));
	m.insert(make_pair("e", 5));
	m["f"] = 6; // also possible


				// erase(key)
	m.erase("d");
	m.erase("e");
	m.erase(m.find("f")); // also possible


						  // empty(), size()
	if (!m.empty()) cout << "m size : " << m.size() << '\n';


	// find(key)
	cout << "a : " << m.find("a")->first << '\n';
	cout << "b : " << m.find("b")->first << '\n';


	// count(key)
	cout << "a count : " << m.count("a") << '\n';
	cout << "b count : " << m.count("b") << '\n';


	// begin(), end()
	cout << "traverse" << '\n';
	for (auto i : m) {
		cout << "key : " << i.first << " " << "value : " << i.second << '\n';
	}

	return 0;

}