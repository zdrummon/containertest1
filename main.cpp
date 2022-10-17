#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> arr = {9,0,0,-3,1000,50,13};
        
    int arrSize = arr.size();
    int valHolder;
    bool sorted = false;

    while (sorted == false) {
        
        sorted = true;
        
        for (int i = 0; i < arrSize - 1; i++) {
            
            if (arr[i] > arr[i + 1]) {

                sorted = false;

                valHolder = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = valHolder;
            }
        }
    } 

    cout << "median value is " << arr[arrSize / 2] << endl;
    cin.get();

    return 0;
}