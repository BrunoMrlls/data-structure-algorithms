#include<iostream>

using namespace std;

class Stack {
    private:
        int top;
        int arr[5];
    public:
        Stack() {
            top = -1;
            for (int &i : arr) {
                i = 0;
            }
        }

        bool isEmpty() {
            return top == -1;
        }

        bool isFull() {
            return top == 4;
        }

        void push(int val) {
            if (isFull()) {
                cout <<"stack overFlow" << endl;
                return;
            }
            top++;
            arr[top] = val;
        }

        int pop() {
            if (isEmpty()) {
                cout << "stack underflow" << endl;
                return 0;
            }
            int pop = arr[top];
            arr[pop] = 0;
            top--;
            return pop;
        }

        int count() {
            return top + 1;
        }

        int peek(int pos) {
            if (isEmpty()) {
                cout << "stack underflow" << endl;
                return 0;
            }
            return arr[pos];
        }

        void change(int pos, int val) {
            arr[pos] = val;
            cout << "arr has been changed at location " << pos << endl;
        }

        void display() {
            for (int i = 4; i >= 0; i--) {
                cout << " pos: " << i << " value: " << arr[i] << endl;
            }
        }
};

int main () {
    Stack st;

    cout << "stack is " << (st.isEmpty() ? "" : "not ") << "empty" << endl;

    st.push(111);
    st.push(222);
    st.push(444);
    st.push(555);

    st.display();

    cout << "stack is " << (st.isEmpty() ? "" : "not ") << "empty" << endl;
    cout << "stack is " << (st.isFull() ? "" : "not ") << "full" << endl;
    cout << "value (" << st.pop() << ") has been removed." << endl;

    return 0;
}