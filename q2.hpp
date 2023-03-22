#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Implement all your functions here
void getInput(int &n1, int &n2, int &n3);
int  findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

void getInput(int &n1, int &n2, int &n3){
    cout << "Enter 3 integers: " << "\n";
    cin >> n1 >> n2 >> n3;
}

int  findMin(int n1, int n2, int n3){
    int min = 0;
    if(n1 < n2 && n1 < n3){
        min = n1;
    }
    if(n2 < n1 && n2 < n3){
        min = n2;
    }
    if(n3 < n1 && n3 < n2){
        min = n3;
    }
    return min;
}

void printResult(int n1, int n2, int n3, int min){
    cout << "Original values: " << n1 << " " << n2 << " " << n3 << "\n";
    cout << "Min: " << min;

}
// ******************************