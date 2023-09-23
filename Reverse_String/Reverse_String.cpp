#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	cout << "Enter Your name " << endl;
	cin >> a;
	reverse(a.begin(), a.end());
	cout << a << endl;
	return 0;
}