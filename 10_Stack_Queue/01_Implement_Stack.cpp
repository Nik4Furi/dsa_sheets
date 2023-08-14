#include <iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int size;

    Stack(int s){
        this->size = s;
        arr = new int[size];        
    }

    //Function to insert an element in stack
    void insertInStack(int data){
        arr[size] = data;
        size = size+1;
    }

    //Function to print stack
    void print(){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] <<endl;
        }
        
    }

}

int main(){

    Stack st(5);
    
    //Insert in stack
    st.insertInStack(4);
    st.insertInStack(5);
    st.insertInStack(2);

    //Print the stack
    st.print();

    return 0;
}