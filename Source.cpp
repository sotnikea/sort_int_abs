#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool AbsFunc(int num1, int num2) {
	return abs(num1) < abs(num2);
}

int main(void) {
	int N;
	cin >> N;

	vector<int> arr;
	arr.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(), AbsFunc);

	for (const auto& i : arr) {
		cout << i << " ";
	}
	cout << endl;
}
