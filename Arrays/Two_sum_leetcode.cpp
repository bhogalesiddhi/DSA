#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(int arr[], int size, int target) {
    vector<int> ans;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;  // Return the result as soon as a pair is found
            }
        }
    }
    return ans;  // Return an empty vector if no pair is found
}

int main() {
    int arr[5];
    int n = 5;
   
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
 
    int sum = 0;
    cout << "Enter the sum: ";
    cin >> sum;
 
    vector<int> result = twoSum(arr, n, sum);

    // Print the result
    if (result.size() == 2) {
        cout << "Indices of the two elements: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two elements found with the given sum." << endl;
    }

    return 0;
}
