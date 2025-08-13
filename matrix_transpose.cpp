/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter the number of columns: " << endl;
    cin >> column;
    
    int arr[row][column], transpose[column][row];
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Calculating transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    
    cout << "Original Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
}

/* Output:
Enter the number of rows: 
2
Enter the number of columns: 
3
Enter the matrix elements: 
1 2 3 4 5 6
Original Matrix: 
1	2	3	
4	5	6	
Transposed Matrix: 
1	4	
2	5	
3	6	
*/
