#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> stk;

 
void push() {
    int n;
    cout << "Enter the number of inputs: ";
    cin >> n;
    
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            string a;
            cout << "Enter the input (integer or character): ";
            cin >> a;
            stk.push_back(a);   
        }
    } else {
        cout << "Please enter a positive value " << endl;
    }
}

 
string peek() {
    if (stk.empty()) {
        return "Underflow";
    } else {
        return stk.back();
    }
}

 
string Pop() {
    if (stk.empty()) {
        return "Stack empty";
    } else {
        string topElement = stk.back();
        stk.pop_back();  
        return topElement;
    }
}

int main() {
    push();
    cout << "After Adding: ";
    for (const auto& element : stk) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Topmost element: " << peek() << endl;
    
    cout << "Popped element: " << Pop() << endl;

    cout << "Stack after pop: ";
    for (const auto& element : stk) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}