/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter the number of rows (must be at least 2): " << endl;
    cin >> row;
    cout << "Enter the number of columns: " << endl;
    cin >> column;
    
    if (row < 2) {
        cout << "Error: Matrix must have at least 2 rows for comparison." << endl;
        return 1;
    }
    
    int arr[row][column];
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Matrix entered: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "Comparison between first and second row: " << endl;
    for (int j = 0; j < column; j++) {
        if (arr[0][j] > arr[1][j]) {
            cout << "Column " << j+1 << ": First row (" << arr[0][j] 
                 << ") is greater than second row (" << arr[1][j] << ")" << endl;
        }
        else if (arr[0][j] < arr[1][j]) {
            cout << "Column " << j+1 << ": First row (" << arr[0][j] 
                 << ") is less than second row (" << arr[1][j] << ")" << endl;
        }
        else {
            cout << "Column " << j+1 << ": Both rows have equal value (" 
                 << arr[0][j] << ")" << endl;
        }
    }
}

/* Output:
Enter the number of rows (must be at least 2): 
3
Enter the number of columns: 
4
Enter the matrix elements: 
5 3 8 2 1 7 8 4 9 2 6 1
Matrix entered: 
5	3	8	2	
1	7	8	4	
9	2	6	1	
Comparison between first and second row: 
Column 1: First row (5) is greater than second row (1)
Column 2: First row (3) is less than second row (7)
Column 3: Both rows have equal value (8)
Column 4: First row (2) is less than second row (4)
*/
