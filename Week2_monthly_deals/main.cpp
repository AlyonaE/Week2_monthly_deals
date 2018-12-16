#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
	set<string> result;
	for (const auto& item : m) {
		result.insert(item.second);
	}
	return result;
}

void ToLow(string& word) {
	for (auto& i : word) {
		i = tolower(i);
	}
}

bool CompStrings(string x1, string x2) {
	ToLow(x1);
	ToLow(x2);
	return x1 < x2;
}
 

int main() {
	int N;
	cin >> N;
	vector<string> v(N);
	for (auto& i : v) {
		cin >> i;
	}
	//comment for testing
	sort(begin(v), end(v), CompStrings);
	for (const auto& i : v) {
		cout << i << ' ';
	}
	cout << endl;

	int afsfd;
	cin >> afsfd;
	return 0;
}