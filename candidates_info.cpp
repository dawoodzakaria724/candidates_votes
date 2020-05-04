#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string* candidatesPtr;
	double* votesPtr;
	double* per_of_votes_Ptr;
	double total = 0;

	int n = 0;
	cout << "Enter the number of candidates to calculate: \n" << endl;
	cin >> n;

	candidatesPtr = new string[n];
	votesPtr = new double[n];
	per_of_votes_Ptr = new double[n];


	for (int i = 0; i < n; i++)
	{
		cout << "Enter the last name of your candidate: " << endl;
		cin >> candidatesPtr[i];

		cout << "Enter the number of votes of your candidate: " << endl;
		cin >> votesPtr[i];

		total += votesPtr[i];
	}

	for (int a = 0; a < n; a++)
	{
		per_of_votes_Ptr[a] = (votesPtr[a] / total) * 100.00;
	}

	cout << "\n" << fixed << showpoint << setw(20) << "Candidates:"
		<< setw(20) << "Votes:" << setw(20)
		<< "% of Total Votes:" << endl;

	for (int count = 0; count < n; count++)
	{
		cout << fixed << showpoint << setprecision(0)
			<< setw(20) << candidatesPtr[count]
			<< setw(20) << votesPtr[count]
			<< setw(20) << setprecision(2)
			<< per_of_votes_Ptr[count]
			<< "%" << endl;
	}

	cout << "\n" << setw(20) << "Total"
		<< setw(20) << setprecision(0)
		<< total << endl;

	return 0;
}