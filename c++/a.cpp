#include <iostream>

using namespace std;

int main() {
	int n = 3;
	int sum = 0;
    for (int i = 1; i < n; i++)
	{
		if (n % i == 0) {
		    if ((n/i) == i) {
		        sum+=i;
		    } else {
			    sum=i + (n/i);
		    }
		}
	}	

}

/*
loop nums up to n
`divide i by n to find other factor
3


*/

