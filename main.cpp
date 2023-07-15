#include<iostream>

using namespace std;

int main() {
	string a;
	cin >> a;

	string b;
	cin >> b;

	if (a.length() != b.length()) {
		cout << "NO";
		return 0;
	}

	int count = 0;
	char x, y;
	for (int i = 0; i < a.length(); i++) { 
		if (a[i] != b[i]) {
			if (count == 0) {
				count++;
				x = a[i];
				y = b[i];
			}
			else if (count == 1) {
				if (y == a[i] && x == b[i]) {
					count++;
				} 
				else {
					cout << "NO";
					return 0;
				}
			}
			else {
				cout << "NO";
				return 0;
			}
		}
	}

	if (count == 2) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
