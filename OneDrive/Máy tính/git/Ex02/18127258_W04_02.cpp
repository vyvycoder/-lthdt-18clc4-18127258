#include "Date.h"

int main()
{
	Date d1; 				// Current date: 8/6/2019
	Date d2(2012); 			// 1/1/2012;
	Date d3(2012, 8);		// 01/08/2012
	Date d4(2012, 10, 17); 	// 17/10/2012
	Date d5(d2);
	Date d6;
	d6 = d3;	//01/08/2012

	d6 = d3.Tomorrow();	//02/08/2012
	d5 = d2.Yesterday();	//31/12/2011
	cout << d5 << endl;

	cout << (d6 == d4) << endl;	//0
	cout << (d6 != d4) << endl; //1
	cout << (d6 >= d4) << endl;	//0
	cout << (d6 <= d4) << endl;	//1
	cout << (d6 > d4) << endl;	//0
	cout << (d6 < d4) << endl;	//1

	d3 = d2 + 1;	//2/1/2012
	d2 = d3 - 3;	//30/12/2011
	cout << d2 << endl;
	d4++;
	++d2;	//1/1/2012
	d5--;	//30/12/2012
	--d6;	//1/8/2012

	cout << d3 << endl;	//2/1/2012
	bool key=false;
	while (!key)
	try{
		cin >> d4;
		key = true;
	}
	catch (const char* s) {
		cout << "INVALID DATE ENTERED, PLEASE ENTER ANOTHER DATE!" << endl;
		key = false;
	}

	cout << (int)d3 << endl;			// from the first day of current year
	cout << (int)d4 << endl;
	cout << (long)d4 << endl; 		// from 1/1/1

	Date d7;
	d7 += 7;	// 15/6/2019
	d2 -= 6;	//	26/12/2011
}

