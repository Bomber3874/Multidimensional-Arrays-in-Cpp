/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main() {

    int row1,column1,row2,column2;

    cout<<"Enter the number of rows for first matrix: "<<endl;
    cin>>row1;
    cout<<"Enter the number of columns for first matrix: "<<endl;
    cin>>column1;
    cout<<"Enter the number of rows for second matrix: "<<endl;
    cin>>row2;
    cout<<"Enter the number of columns for second matrix: "<<endl;
    cin>>column2;

    if (column1==row2){

    int arr1[row1][column1],arr2[row2][column2],arr3[row1][column2];

    cout<<"Matrix 1: "<<endl;

    for (int i=0;i<row1;i++){
        for (int j=0;j<column1;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Matrix 2: "<<endl;

    for (int i=0;i<row2;i++){
        for (int j=0;j<column2;j++){
            cin>>arr2[i][j];
        }
    }
    
    for (int i=0;i<row1;i++){
        for (int j=0;j<column2;j++){
            arr3[i][j]=0;
            for (int k=0;k<row2;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    cout<<"Matrix 1: "<<endl;

    for (int i=0;i<row1;i++){
        for (int j=0;j<column1;j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Matrix 2: "<<endl;

    for (int i=0;i<row2;i++){
        for (int j=0;j<column2;j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Multiplication: "<<endl;

    for (int i=0;i<row1;i++){
        for (int j=0;j<column2;j++){
            cout<<arr3[i][j]<<"\t";
        }
        cout<<endl;
    }
    }

    else{
        cout<<"Wrong dimensions"<<endl;
    }
}


/*Output
Enter the number of rows for first matrix: 
2
Enter the number of columns for first matrix: 
3
Enter the number of rows for second matrix: 
3
Enter the number of columns for second matrix: 
2
Matrix 1: 
1
2
3
4
5
6
Matrix 2: 
1
2
3
4
5
6
Matrix 1: 
1	2	3	
4	5	6	
Matrix 2: 
1	2	
3	4	
5	6	
Multiplication: 
22	28	
49	64	
*/
