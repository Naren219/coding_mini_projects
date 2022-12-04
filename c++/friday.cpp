#include <iostream>
#include <cstdlib>

using namespace std;

int f(int argc, char **argv)
{
	int N = atoi(argv[1]);
	cout << "Years: " << N << endl;
	int st_year = 1900;
	int days[7] = {0, 0, 0, 0, 0, 0, 0};
	int months[12] = { 1, -2, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1 };
	int start_day = 13;
	// dec 31, 1995
	for (int i = 0; i < N; i++) {
		if ((st_year+i) % 4 == 0) {
			if ((st_year+i) % 100 == 0) {
				if ((st_year+i) % 400 == 0) {
					months[1] = -1;
				} 
			} else {
				months[1] = -1;
			}
		}

		int add = 0; 
		for (int m : months) {
			days[add]++;
			add = ((m+30+add) % 7);
			// cout << m+30 << " " << star_day << " + " << add << " ";
			// if (add+star_day > 7) {
			// 	star_day = add+star_day-7;
			// 	days[star_day]++;
			// } else {
			// 	star_day+=add;
			// 	days[star_day]++;
			// }
			// cout << star_day << endl;
		}
	
	}
	for (int d : days) {
			cout << d << " ";
		}
	return 0;
}

int mtab[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main(int argc, char **argv) {
	int n = atoi(argv[1]);
    int ndow[7] = {0, 0, 0, 0, 0, 0, 0};
    
    int dow = 0; /* day of week: January 13, 1900 was a Saturday = 0 */
    for(int y = 1900; y < 1900 + n; y++) {
        for(int m = 0; m < 12; m++) {
            ndow[dow]++;
            int leap = m == 1 && y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
            dow = (dow + mtab[m] + leap) % 7;
        }
    }
    for(int i = 0; i < 6; i++) {
        cout << ndow[i] << " ";
    }
    // cout << ndow[6] << endl;
    return 0;
}

/*

sat 13
 
create month values
create day values
difference of years
each loop check through these criterea for leap year
- / by 3
- / by 100
	- / by 400
check if date is 13
 y - incrememt
 n - pass

 mon, tue, wed, thur, fri, sat, sun

 cout << endl;

	int n = 7;
	for(int i=0 ; i<2 ; i++) {
		int temp = days[0];
	    days[0] = days[n-1];
	    days[n-1] = temp;

	    for(int i=1 ; i<=n-1 ; i++)
	    {
	        int temp2 = days[i];
	        days[i] = days[n-1];
	        days[n-1] = temp2;
	    }
    }

	for (int d : days) {
		cout << d << " ";
	}
*/