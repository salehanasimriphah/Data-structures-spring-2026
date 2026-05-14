#include<iostream>
using namespace std;

class Heap {

    int arr[100];
    int size;

public:

    Heap() {
        size = 0;
    }
    
    void insertMax(int value) {

        int index = size;

        arr[index] = value;

        size++;

        while(index > 0) {

            int parent = (index - 1) / 2;

            if(arr[parent] < arr[index]) {

                swap(arr[parent], arr[index]);

                index = parent;
            }
            else {
                break;
            }
        }
    }

   
    void insertMin(int value) {

        int index = size;

        arr[index] = value;

        size++;

        while(index > 0) {

            int parent = (index - 1) / 2;

            if(arr[parent] > arr[index]) {

                swap(arr[parent], arr[index]);

                index = parent;
            }
            else {
                break;
            }
        }
    }

    // DISPLAY
    void display() {

        cout << "Heap Elements: "<<endl;

        for(int i = 0; i < size; i++) {

            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    int choice;
    int subChoice;
    int value;
    int n;

    int Array[] = {5,6,12,19,32,60,53,46};
    int arraySize = sizeof(Array) / sizeof(Array[0]);

    do {

        cout << "MAIN MENU"<<endl;
        cout << "1. Max Heap"<<endl;
        cout << "2. Min Heap"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {

            Heap h;

            for(int i = 0; i < arraySize; i++) {

                h.insertMax(Array[i]);
            }

            do {

                cout << "MAX HEAP MENU "<<endl;
                cout << "1. Display Heap"<<endl;
                cout << "2. Add Elements"<<endl;
                cout << "3. Back"<<endl;
                cout << "Enter Choice: ";
                cin >> subChoice;

                switch(subChoice) {

                case 1:

                    h.display();
                    break;

                case 2:

                    cout << "How many numbers you want to add? ";
                    cin >> n;

                    for(int i = 0; i < n; i++) {

                        cout << "Enter Number: ";
                        cin >> value;

                        h.insertMax(value);
                    }

                    cout << "Updated Max Heap:"<<endl;

                    h.display();

                    break;
                }

            } while(subChoice != 3);

            break;
        }

        case 2: {

            Heap h;

            for(int i = 0; i < 5; i++) {

                h.insertMin(Array[i]);
            }

            do {

                cout << "MIN HEAP MENU "<<endl;
                cout << "1. Display Heap"<<endl;
                cout << "2. Add Elements"<<endl;
                cout << "3. Back"<<endl;
                cout << "Enter Choice: ";
                cin >> subChoice;

                switch(subChoice) {

                case 1:

                    h.display();
                    break;

                case 2:

                    cout << "How many numbers you want to add? ";
                    cin >> n;

                    for(int i = 0; i < n; i++) {

                        cout << "Enter Number: ";
                        cin >> value;

                        h.insertMin(value);
                    }

                    cout << "Updated Min Heap:"<<endl;

                    h.display();

                    break;
                }

            } while(subChoice != 3);

            break;
        }
        }

    } while(choice != 3);

    cout << "Program Ended"<<endl;

    return 0;
}