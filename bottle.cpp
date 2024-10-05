#include <iostream>
#include <vector>
#include <string>

using namespace std;

void calc(int bottles) {
     
    int cartonSizes[] = {48, 24, 12, 6};  
    string cartonNames[] = {"xl", "large", "medium", "small"};    

    vector<string> result;  

    
    for (int i = 0; i < 4; i++) {
        int numCartons = bottles / cartonSizes[i];   

         
        if (numCartons > 0) {
            result.push_back(to_string(numCartons) + " " + cartonNames[i]);
            bottles %= cartonSizes[i];     
        }
    }

     
    if (bottles > 0) {
        result.push_back(to_string(bottles));    
    }

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";  
        }
    }
    cout << endl;
}

int main() {
    int bottles;
    cout << "Enter the number of bottles to be shipped: ";
    cin >> bottles;

    calc(bottles);

    return 0;
}