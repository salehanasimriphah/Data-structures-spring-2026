#include<iostream>
#include<stack>
using namespace std;

const int MAX = 100;
//structure
struct Student {
    int id;
    string name;
    float marks;
};

Student arr[MAX];
int n = 0;

//stack
int stackArr[MAX];
int top = -1;

void push(int index) {
    if (top == MAX - 1) return;
    stackArr[++top] = index;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow"<<endl;
        return;
    }

    int index = stackArr[top--];
    cout<<"Removed Student: "
         <<arr[index].id<<" "<<arr[index].name<<endl;
}

void displayStack(){
    if(top == -1){
        cout << "Stack Empty"<<endl;
        return;
    }

    cout<<"Recent Students (Stack)"<<endl;
    for(int i=top; i>=0;i--){
        cout<<arr[stackArr[i]].id<< " " 
             <<arr[stackArr[i]].name<<endl;
    }
}

//student functions
void addStudent(){
    cout<<"Enter ID: ";
    cin>>arr[n].id;

    cout<<"Enter Name: ";
    cin>>arr[n].name;

    cout<<"Enter Marks: ";
    cin>>arr[n].marks;

    push(n);
    n++;
}
void displayStudents(){
    if (n == 0){
        cout << "No records found"<<endl;
        return;
    }
    cout << "\nStudent List:"<<endl;
    for (int i = 0; i < n; i++){
        cout<<"id="<<arr[i].id<<" "<<endl;
        cout<<"name="<<arr[i].name<<" "<<endl;
        cout<<"marks="<<arr[i].marks<<endl;
    }
}
//searching
void linearSearch() {
    int key;
    cout<<"Enter ID: ";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i].id==key){
            cout<<"Found: "<<arr[i].name<<endl;
            return;
        }
    }
    cout<<"Not Found"<<endl;
}
//binary search
void binarySearch(){
    int key;
    cout<<"Enter ID: ";
    cin>>key;

    int l=0, r=n - 1;

    while (l<=r){
        int mid=(l + r)/2;

        if (arr[mid].id==key){
            cout<<"Found: "<<arr[mid].name<<endl;
            return;
        }
        else if(arr[mid].id<key)
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<"Not Found"<<endl;
}
//quick sort
void swapStudent(Student &a, Student &b){
    Student temp=a;
    a=b;
    b=temp;
}
void bubbleSort(){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j].id > arr[j + 1].id){
                swapStudent(arr[j], arr[j + 1]);
            }
        }
    }
}
//main
int main() {
    int choice;

    do {
        cout << "........ STUDENT RECORD SYSTEM ......."<<endl;
        cout << "1. Add Student"<<endl;
        cout << "2. Display Students"<<endl;
        cout << "3. Linear Search"<<endl;
        cout << "4. Bubble Sort (by ID)"<<endl;
        cout << "5. Binary Search"<<endl;
        cout << "6. Pop Stack"<<endl;
        cout << "7. Display Stack"<<endl;
        cout << " Exiting"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: linearSearch(); break;
           case 4:
               bubbleSort();
               cout << "Sorted using Bubble Sort\n";
               break;
            case 5: binarySearch(); break;
            case 6: pop(); break;
            case 7: displayStack(); break;
        }

    } while (choice != 0);

    return 0;
}