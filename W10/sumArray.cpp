#include <iostream>

using namespace std;

double sumArray(double *arr, int size){
    if(size == 0){
        return 0;
    }
    // return arr[0] + sumArray(arr + 1, size - 1);
    return arr[size - 1] + sumArray(arr, size - 1);

}


int main(){
    double arr[] = {1.0, 2.0, 3.1, 4.0, 5.0};
    cout << "Sum of the array: "  << sumArray(arr, 5) << endl;
    return 0;
}