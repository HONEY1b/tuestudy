//1081
#include<iostream>
using namespace std;

int main()
{
	int n1, n2, total = 0, n, nk;

	cin >> n1 >> n2;
	n = n1; nk = n1;
	while(n >= n1 && n <= n2){
		while(n > 0){
			total = total + (n % 10);
			n /= 10;
		}
		nk++;
		n = nk;
	}
	cout << total << endl;
}
