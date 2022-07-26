#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
   int n = 4;
    cin >> n;
    int i = 1;
    while (i <= n){
        int sp = 1;
        while (sp <= n - i){
            cout << ' ';
            sp = sp  + 1;
            }
        int star=1; 
        while(star <= ((2*i)-1)){
            cout<<'*';
            star++;
        }
        cout<<endl;
        i++;
        
        // int stars = 1;
        // while (stars <= i){
        //     cout << '*';
        //     stars = stars + 2;
        // }
        // cout << endl;
        // i++;
    }
}


/*Code : Star Pattern
Send Feedback
Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******

 */