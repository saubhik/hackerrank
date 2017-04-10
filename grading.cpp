#include <iostream>
using namespace std;

int main() {
	int n, grade, newGrade;
	cin >> n;
	
	while (n--) {
		cin >> grade;
		if (grade >= 38) {
			newGrade = 5 * (grade / 5 + 1);
			if (newGrade - grade < 3)
				grade = 5 * (grade / 5 + 1);
		}
		cout << grade << endl;
	}
}
