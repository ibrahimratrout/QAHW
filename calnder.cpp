#include<iostream>
using namespace std;
int SC(char mj1[], char mj2[])
{
	int i = 0;
		int flag = 0;
	while (mj1[i] != '\0' && mj2[i] != '\0')
	{
		if (mj1[i] != mj2[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0 && mj1[i] == '\0' && mj2[i] == '\0')
		return 1;
	else
		return 0;
}
bool C(char mj1[]) {
	char M1[10] = "January";
	char M2[10] = "February";
	char M3[10] = "March";
	char M4[10] = "April";
	char M5[10] = "May";
	char M6[10] = "June";
	char M7[10] = "July";
	char M8[10] = "August";
	char M9[10] = "September";
	char M10[10] = "October";
	char M11[11] = "November";
	char M12[12] = "December";
	int da;
	int yr=1;
		if (SC(mj1,M1)) {
			da = 31;
			return da;	
		}
		else 
			if (SC(mj1,2)) {
				if (year % 4 == 0) {
					da = 29;
					return da;
				}
				else {
					da = 28;
					return da;
				}

		}
		else
			if(SC(mj1, M3)) {
			da = 31;
			return da;

		}
		else
				if(SC(mj1, M4)) {
			da = 30;
			return da;

		}
		else
				if(SC(mj1, M5)) {
			da = 31;
			return da;

		}
		else
					if(SC(mj1, M6)) {
			da = 30;
			return da;

		}
		else
						if(SC(mj1, M7)) {
			da = 31;
			return da;

		}
		else
							if(SC(mj1, M8)) {
			da = 31;
			return da;

		}if (SC(mj1, M9)) {
			da = 30;
			return da;

		}
		else
			if(SC(mj1, M10)) {
			da = 31;
			return da;

		}
		else
				if(SC(mj1, M11)) {
			da = 30;
			return da;

		}
		else
					if (SC(mj1, M12)) {
						da = 31;
						return da;
					}
		return 0;
	}
int sCom(char da1[], char da2[])
{
	int i = 0;
	int flag = 0;
	while (da1[i] != '\0' && da2[i] != '\0')
	{
		if (da1[i] != da2[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0 && da1[i] == '\0' && da2[i] == '\0')
		return 1;
	else
		return 0;
}
bool daycmpare(char da1[]) {
	char days1[10] = "Sunday";
	char days2[10] = "Monday";
	char days3[10] = "Tuesday";
	char days4[10] = "Wednesday";
	char days5[10] = "Thursday";
	char days6[10] = "Friday";
	char days7[10] = "Saturday";

	int n_days;
	if (sCompare(da1, days1))
		n_days = 1;
	else
		if (sCompare(da1, days2)) {
			n_days = 2;
			
		}
		else
			if (sCompare(da1, days3))
				n_days = 3;
			else
				if (sCompare(da1, days4))
					n_days = 4;
				else
					if (sCompare(da1, days5))
						n_days = 5;
					else
						if (sCompare(da1, days6))
							n_days = 6;
						else
							if (sCompare(da1, days7))
								n_days = 7;
								else
									return false;
	return n_days;
}


int main() {

		int year;
		char mj1[15], da1[15];
		cout << "Enter the name of a month > ";
		cin >> mj1;
		cout << "enter the year for february > ";
		cin >> year;
		cout << "Enter the name of the day on which this mint starts > ";
		cin >> da1;
		double n_days, days;
		n_days = daycmpare(da1);
		days = compare(mj1);
		int month[7][7] = { 0};

		int d = 1;
		for (int i = 0; i < 7 && d <= days; i++)

		{
			for (int j = 0; j < 7 && d <= days; j++)
			{
				if (i == 0 && j == 0&&x) {
					j = n_days - 1;
					x = false;
				}
				else
					month[i][j] = d++;
			}
		}

		for (int i = 0; i < 7; i++)
		{
			int j;
			for (j = 0; j < 7; j++)

				if (month[i][j] == 0)
					cout << " " << " " << " ";
				else
					cout << "" << month[i][j] << " " << " ";
			cout << endl;

		}

	
	return 0;
}