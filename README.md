# Multidimensional-Arrays-in-Cpp

# Aim

To understand and implement various operations on 2D arrays (matrices) in C++, including:

    Matrix Addition

    Matrix Multiplication

    Matrix Transpose

    Diagonal Addition (Sum of Diagonals)

    Row Comparison

# Software Used

    Compiler: GNU GCC (g++)

    IDE: Visual Studio Code

    Operating System: Windows/Linux

# Theory

#1. Introduction to 2D Arrays (Matrices)

A 2D array (matrix) is a structured collection of elements arranged in rows and columns, where each element is accessed using two indices (matrix[i][j]).
Key Properties of Matrices:

    Fixed Dimensions: The number of rows and columns must be defined.

    Homogeneous Elements: All elements must be of the same data type (int, float, etc.).

    Memory Layout: Stored in row-major order (contiguous memory).

# 2. Matrix Operations Implemented

(a) Matrix Addition

    Condition: Both matrices must have the same dimensions (rows × columns).

    Method:

        Add corresponding elements of two matrices (C[i][j] = A[i][j] + B[i][j]).

(b) Matrix Multiplication

    Condition: The number of columns in the first matrix (A) must equal the rows in the second matrix (B).

    Method:

        Compute the dot product of rows of A with columns of B (C[i][j] = Σ(A[i][k] * B[k][j])).

(c) Matrix Transpose

    Definition: The transpose of a matrix A is obtained by swapping rows and columns (A^T[j][i] = A[i][j]).

    Method:

        Swap elements such that rows become columns and vice versa.

(d) Diagonal Addition (Sum of Diagonals)

    Condition: The matrix must be square (rows == columns).

    Method:

        Primary Diagonal (Top-left to Bottom-right): sum += matrix[i][i]

        Secondary Diagonal (Top-right to Bottom-left): sum += matrix[i][n-1-i]

(e) Row Comparison

    Condition: The matrix must have at least 2 rows.

    Method:

        Compare each element of the first row with the corresponding element in the second row.

        Output whether elements are greater, lesser, or equal.

# Algorithms & Implementation

1. Matrix Addition (matrix_add.cpp)

Steps:

    Input dimensions (row, column) for both matrices.

    Input elements for Matrix A and Matrix B.

    Add corresponding elements and store in Matrix C.

    Display all matrices.

Key Code:

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

2. Matrix Multiplication (matrix_multi.cpp)

Steps:

    Input dimensions for Matrix A (row1 × column1) and Matrix B (row2 × column2).

    Check if column1 == row2 (valid for multiplication).

    Compute product using nested loops (dot product).

    Display the resultant matrix.

Key Code:

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                arr3[i][j] = 0;
                for (int k = 0; k < row2; k++) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

3. Matrix Transpose (matrix_transpose.cpp)

Steps:

    Input dimensions (row, column).

    Input matrix elements.

    Swap matrix[i][j] with transpose[j][i].

    Display original and transposed matrices.

Key Code:

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                transpose[j][i] = arr[i][j];
            }
        }

4. Diagonal Addition (matrix_diag_add.cpp)

Steps:

    Input dimensions (must be square).

    Check if row == column (else, error).

    Sum primary and secondary diagonals.

    Display results.

Key Code:

        if (row != column) {
            cout << "Error: Matrix must be square for diagonal addition." << endl;
            return 1;
        }
        
        int primary_diag = 0, secondary_diag = 0;
        for (int i = 0; i < row; i++) {
            primary_diag += arr[i][i];
            secondary_diag += arr[i][column-1-i];
        }

5. Row Comparison (matrix_row_compare.cpp)

Steps:

    Input dimensions (must have at least 2 rows).

    Input matrix elements.

    Compare Row 0 and Row 1 element-wise.

    Print comparison results.

Key Code:

        for (int j = 0; j < column; j++) {
            if (arr[0][j] > arr[1][j]) {
                cout << "Column " << j+1 << ": First row is greater." << endl;
            }
            else if (arr[0][j] < arr[1][j]) {
                cout << "Column " << j+1 << ": First row is smaller." << endl;
            }
            else {
                cout << "Column " << j+1 << ": Both rows are equal." << endl;
            }
        }

# Conclusion

This experiment successfully demonstrated key matrix operations in C++:

    Addition, Multiplication, Transpose, Diagonal Sum, and Row Comparison.

    Conditions for valid operations (e.g., square matrices for diagonals, matching dimensions for addition/multiplication).

    Efficient traversal using nested loops for matrix manipulation.

