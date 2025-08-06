/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

int main() {
    int row,column;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    cout<<"Enter the number of columns: "<<endl;
    cin>>column;
    int arr1[row][column],arr2[row][column],arr3[row][column];
    cout<<"Array 1: "<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Array 2: "<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin>>arr2[i][j];
        }
    }
    
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<"Array 1: "<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Array 2: "<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Addition: "<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<arr3[i][j]<<"\t";
        }
        cout<<endl;
    }
}


/*Output
Enter the number of rows: 
3
Enter the number of columns: 
3
Array 1: 
1
2
3
4
5
6
7
8
9
Array 2: 
9
8
7
6
5
4
3
2
1
Array 1: 
1	2	3	
4	5	6	
7	8	9	
Array 2: 
9	8	7	
6	5	4	
3	2	1	
Addition: 
10	10	10	
10	10	10	
10	10	10	
*/
