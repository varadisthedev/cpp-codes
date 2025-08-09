#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& v, int target) {
    int low = 0, high = v.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == target)
            return mid;
        else if (target < v[mid])
            high = mid - 1;
        else{
              low = mid + 1;
        }
          
        cout<< mid<< low<< high<<endl;
    }

    return -1;
}

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    int target = 5;
    int index = binarySearch(v, target);

    cout << "Index of " << target << " is: " << index << endl;
}
