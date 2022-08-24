template<typename T>

class Vector
{

    T *arr;
    int current_size;
    int max_size;

public:
    Vector(int max_size = 1)
    {
        current_size = 0;
        this->max_size = max_size;
        arr = new T [max_size];
    }

    void push_back(const T d){
        // Two Cases
        if(current_size == max_size){
            // If the array is full, create a new array with double capacity and delete the old one
            T * oldArr = arr;

            max_size *= 2;

            arr = new T [max_size];

            for(int i = 0; i < current_size; ++i){
                arr[i] = oldArr[i];
            }

            delete [] oldArr;
            
        }
        arr[current_size++] = d;
    }

    void pop_back(){
        if(current_size >= 0) current_size--;
    }

    const bool isEmpty() {
        return current_size == 0;
    }

    const T front(){
        return arr[0];
    }

    const T back() {
        return arr[current_size - 1];
    }

    const T at(const int i){
        return arr[i];
    }

    const int size() {
        return current_size;
    }

    const int capacity() {
        return max_size;
    }

    const int operator[](const int i){
        return arr[i];
    }
};
