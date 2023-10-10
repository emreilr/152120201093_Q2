#include <iostream>
#include <ctime>

using namespace std;

const int MAX_ROWS = 100;  
const int MAX_COLS = 100;  

void createAndDisplayArray(int rows, int cols) {
    if (rows > MAX_ROWS || cols > MAX_COLS) {
        cerr << "Exceeded maximum array size." << endl;
        return;
    }

    // Create a 2D array
    int array[MAX_ROWS][MAX_COLS];

    // Assign random values to the array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = rand() % 100; 
        }
    }

    // Display the array
    cout << "Generated Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Measure the elapsed time
    clock_t start = clock();

    createAndDisplayArray(rows, cols);

    // Calculate and display the elapsed time
    clock_t end = clock();
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed_time << " seconds" << endl;

    return 0;
}
