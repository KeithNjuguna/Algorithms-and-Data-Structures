#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
using namespace std;

// Structure (Struct)
struct Student {
    string name;
    int age;
    float grade;
};

int main() {
    // 1. Array
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 2. Struct
    Student s1 = {"Alice", 20, 85.5};
    cout << "Student: " << s1.name << ", Age: " << s1.age << ", Grade: " << s1.grade << endl;

    // 3. Vector (dynamic array)
    vector<string> fruits = {"Apple", "Banana", "Cherry"};
    fruits.push_back("Orange");
    cout << "Fruits in vector: ";
    for (string fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;

    // 4. Stack (LIFO)
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top of stack: " << st.top() << endl;
    st.pop();
    cout << "Top after pop: " << st.top() << endl;

    // 5. Queue (FIFO)
    queue<string> q;
    q.push("John");
    q.push("Jane");
    q.push("Doe");
    cout << "Front of queue: " << q.front() << endl;
    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    // 6. Map (Key-value pairs)
    map<string, int> ageMap;
    ageMap["Tom"] = 25;
    ageMap["Jerry"] = 22;
    ageMap["Spike"] = 30;
    cout << "Ages in map:" << endl;
    for (auto pair : ageMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
