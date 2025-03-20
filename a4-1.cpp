#include <iostream>
#include <vector>
using namespace std;

int diagSumEven(const vector<vector<int>>&, size_t);
int diagSumOdd(const vector<vector<int>>&, size_t);

int main(){

    size_t size = 0;

    cout << "Enter size of matrix" << endl;
    cin >> size;

    // vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; //even matrix
    // vector<vector<int>> matrix = {{1,2,3},{5,6,7},{9,10,11}}; //odd matrix
    vector<vector<int>> matrix(size, vector<int>(size, 0));

    cout << "Enter matrix elements" << endl;
    for (size_t i = 0; i < size; i++){
      for (size_t j = 0; j < size; j++){
        cin >> matrix[i][j];
      }
    }

    for (auto row : matrix){
      for (auto elements : row){
        cout << elements << " ";
      }
      cout << endl;
    }

    if (size%2==0) {
        cout<<diagSumEven(matrix, size);
    }
    else if (size%2!=0) {
        cout<<diagSumOdd(matrix, size);
    }
}

int diagSumEven(const vector<vector<int>>& matrix, size_t size) {
    int sum = 0;

    //calculate left diag
    for (size_t i = 0; i < size; i++)   {
            sum += matrix[i][i];
        }
    //calculate right diag
    for (size_t i = 0; i < size; i++) {
         size_t j = size - 1 - i;
            sum += matrix[i][j];
    }
    return sum;
}

int diagSumOdd(const vector<vector<int>>& matrix, size_t size) {
    int sum = 0;

    //calculate left diag
    for (size_t i = 0; i < size; i++)   {
        sum += matrix[i][i];
    }
    //calculate right diag
    for (size_t i = 0; i < size; i++) {
        size_t j = size - 1 - i;
        sum += matrix[i][j];
    }
    int center_value = matrix[size/2][size/2];
    return sum - center_value;
}


