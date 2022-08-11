// helloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Shape {

};

class Rect : public Shape {

};
/*
1. static code
2. dynamic code

종속
*/

//int add(int a, int b) {
//    if (a < 0 || b < b) return -1;
//    return a + b;
//}
//
//float add(float a, float b) {
//    if (a < 0 || b < b) return -1;
//    return a + b;
//}
//
//double add(double a, double b) {
//    if (a < 0 || b < b) return -1;
//    return a + b;
//}

template<typename T>
T add(T a, T b) {
    if (a < 0 || b < b) return -1;
    return a + b;
}

//struct Array {
//    int* _array;
//    int _size;
//
//    Array(int size) : _array(new int[size]), _size(size) {
//
//    }
//
//    ~Array() {
//        if (_array) {
//            delete[] _array;
//        }
//    }
//
//    void setAt(int idx, int value) {
//        if (0 > idx || idx >= _size) return;
//        _array[idx] = value;
//    }
//
//    int getAt(int idx) {
//        if (0 > idx || idx >= _size) return;
//        return _array[idx];
//    }
//};
//
//struct ArrayFloat {
//    float* _array;
//    int _size;
//
//    ArrayFloat(int size) : _array(new float[size]), _size(size) {
//
//    }
//
//    ~ArrayFloat() {
//        if (_array) {
//            delete[] _array;
//        }
//    }
//
//    void setAt(int idx, float value) {
//        if (0 > idx || idx >= _size) return;
//        _array[idx] = value;
//    }
//
//    float getAt(int idx) {
//        if (0 > idx || idx >= _size) return;
//        return _array[idx];
//    }
//};

template<typename T>
struct Array {
    T* _array;
    int _size;

    Array(int size) : _array(new T[size]), _size(size) {

    }

    ~Array() {
        if (_array) {
            delete[] _array;
        }
    }

    void setAt(int idx, T value) {
        if (0 > idx || idx >= _size) return;
        _array[idx] = value;
    }

    T getAt(int idx) {
        if (0 > idx || idx >= _size) return;
        return _array[idx];
    }
};

#include <array>
#include <vector>
/*
배열 : 색인 배열  array[0], 첨자
             고정 색인 배열 : array
             가변 색인 배열 : vector
       연관 배열 map

*/


int main()
{
    Array<int> array1(10);
    Array<float> array2(20);

    array1.setAt(0, 10);
    std::cout << "array1[0] = " << array1.getAt(0) << std::endl;

    std::vector<int> arr;

    //arr[0] = 10;
    //arr[1] = 20;
    //arr[2] = 30;
    //arr[3] = 40;
    //arr[4] = 50;
    //arr[5] = 50;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.size(); //6 

    int arr2[] = { 1,2,3,4 };
    //for (int i = 0; i < 4; i++) {
    //    std::cout << i << " = " << arr2[i+10] << std::endl;
    //}
    //for (int& value : arr2) {
    //    std::cout << " = " << value << std::endl;
    //}
    for (const auto& value : arr2) {
        std::cout << " = " << value << std::endl;
    }

    int a = 'A';
    char ch = static_cast<char>(a);

    int sum = 0;

    //    sum = 10 + 20;
    //    sum = 20 + 30;
    sum = add(10, 20); //->  컴파일 타임 : int add(int a, int b) 
    sum = add(100, 200); //->  
    float fSum = add(20.3f, 30.4f); //컴파일 타임 : float add(float a, float b) 
    fSum = add(200.3f, 300.4f); //

    std::cout << "ch = " << ch << std::endl;

    std::cout << "Hello World!\n";
}
