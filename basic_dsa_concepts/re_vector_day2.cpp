#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    if(!v.empty()){
        cout<<"printing the vector: ";
        for( auto c: v){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"vector v is empty.";
    }

}
int main(){

    // --- STL INSERT ---
    // Inserts elements before the specified iterator position.
    // Crucial: insert() invalidates iterators from the insertion point onwards.
    // Best practice: Reassign iterators after insertion if you need to continue using them.
    vector<int>v;
    v = {1, 2, 3, 4, 5}; // Reset for insert example
    display(v);         // Prints: 1 2 3 4 5

    // 1. Insert single element: v.insert(position_iterator, value)
    v.insert(v.begin() + 2, 99); // Insert 99 before index 2 (between 2 and 3)
    display(v);                  // Prints: 1 2 99 3 4 5

    // 2. Insert multiple copies of an element: v.insert(position_iterator, count, value)
    v.insert(v.begin(), 3, 0); // Insert three 0s at the beginning
    display(v);                // Prints: 0 0 0 1 2 99 3 4 5

    // 3. Insert range from another container: v.insert(position_iterator, first_iterator, last_iterator)
    vector<int> other_v = {77, 88};
    v.insert(v.end(), other_v.begin(), other_v.end()); // Insert elements from other_v at the end
    display(v);                                       // Prints: 0 0 0 1 2 99 3 4 5 77 88

    // --- STL ERASE ---
    // Removes elements from the vector.
    // Crucial: erase() invalidates iterators from the erased point onwards.
    // Returns an iterator to the element *after* the erased element(s). This is useful for loops.

    v = {10, 20, 30, 40, 50, 60, 70}; // Reset for erase example
    display(v);                       // Prints: 10 20 30 40 50 60 70

    // 1. Erase single element: v.erase(position_iterator)
    v.erase(v.begin() + 1); // Erase element at index 1 (value 20)
    display(v);             // Prints: 10 30 40 50 60 70

    // 2. Erase a range of elements: v.erase(first_iterator, last_iterator)
    // Erases elements in the range [first_iterator, last_iterator) (exclusive of last)
    v.erase(v.begin() + 2, v.begin() + 5); // Erase from index 2 (value 40) up to (but not including) index 5 (value 60)
                                           // So, 40, 50, 60 are erased.
    display(v);                            // Prints: 10 30 70

    // --- STL ASSIGN ---
    // Replaces all elements in the vector with new elements.
    // Crucial: assign() is more efficient than clear() + insert() for replacing all elements.

    v = {100, 200, 300}; // Original vector
    display(v);          // Prints: 100 200 300

    // 1. Assign with count and value: v.assign(count, value)
    v.assign(5, 7); // Assigns 5 copies of the value 7
    display(v);     // Prints: 7 7 7 7 7

    // 2. Assign with a range: v.assign(first_iterator, last_iterator)
    vector<int> source_vec = {11, 22, 33, 44};
    v.assign(source_vec.begin(), source_vec.end()); // Assigns elements from source_vec
    display(v);                                     // Prints: 11 22 33 44

    // 3. Assign with an initializer list (C++11 onwards): v.assign({val1, val2, ...})
    v.assign({1, 2, 3, 4, 5, 6}); // Assigns elements from the initializer list
    display(v);
    return 0;
}