/* Question-2 
Write a program to print duplicate characters from a string?
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char A[80];
    cout << "Enter A: ";
    cin.getline(A, 80);
    cout << "Duplicate characters are : " ;
    for (int i = 0; i < strlen(A); i++)
    {
        for (int j = i + 1; j < strlen(A); j++)
        {
            if (A[i] == A[j])
            {
                cout << A[i]<<" " ;
                break;
            }
        }
    }
    return 0;
}
