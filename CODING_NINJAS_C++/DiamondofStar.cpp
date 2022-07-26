#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
	cin >> n;
	int num = (n / 2) + 1;
	int count = num - 1;
	for (int i = 1; i <= num; i++)//upper part
	{
		for (int j = 1; j <= count; j++)
		{
			cout << " ";
		}

		count--;

		for (int k = 1; k <= (2 * i) - 1; k++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	count = 1;

	for (int i = 1; i <= (num - 1); i++)//bottom part
	{
		for (int j = 1; j <= count; j++)
		{
			cout << " ";
		}

		count++;

		for (int k = 1; k <= (2 * (num - i)) - 1; k++)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}




/*
Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
  */

 