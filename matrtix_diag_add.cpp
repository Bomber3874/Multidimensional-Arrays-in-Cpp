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
    
    // Check if matrix is square (rows == columns)
    if (row != column) {
        cout << "Error: Matrix must be square (rows == columns) for diagonal addition." << endl;
        return 1; 
    }
    
    int arr[row][column];
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }
    
    int primary_diag = 0, secondary_diag = 0;
    for (int i = 0; i < row; i++) {
        primary_diag += arr[i][i];               
        secondary_diag += arr[i][column-1-i];   
    }
    
    cout << "Matrix entered: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "Sum of primary diagonal: " << primary_diag << endl;
    cout << "Sum of secondary diagonal: " << secondary_diag << endl;
    cout << "Total sum of both diagonals: " << primary_diag + secondary_diag << endl;
    
    return 0;
}


/* Output 
Enter the number of rows: 
3
Enter the number of columns: 
3
Enter the matrix elements: 
1
2
3
4
5
6
7
8
9
Matrix entered: 
1	2	3	
4	5	6	
7	8	9	
Sum of primary diagonal: 15
Sum of secondary diagonal: 15
Total sum of both diagonals: 30
*/
