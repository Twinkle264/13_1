#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    do {
        if (n <= 0) cout << "Amount of numbers must be greater than 0" << endl;
        cout << "How many numbers do you want to enter? " << endl;
        cin >> n;
    } while (n <= 0);

    vector<int> vec (n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter a number " << i+1 << ": ";
        cin >> vec[i];
    }

    int r;
    cout << endl << "What number should we delete? " << endl;
    cin >> r;

    int count = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] != r) {
            vec[count] = vec[i];
            count++;
        }
    }

    vec.resize(count);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
