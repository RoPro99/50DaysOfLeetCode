#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int val;
	cin >> val;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != val) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;

}