// OpenClosed.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;

//1. pointer : 주소 , void*
// 
//function pointer 



class Animal { // 추상 클래스 -> 객체화 할 수 없음 , Pointer, 참조변수로 만 사용함 
    int arr[10];
public:
    //일반 함수 선언  
    virtual void speak() = 0; // 순수가상함수 

    // 가상함수 
    void speak2() {

    }

};


void hey(Animal& animal) {
    animal.speak();
}

class Cat : public Animal {
public:
    virtual void speak() {
        //        Animal::speak();
        cout << "야옹~~~" << endl;
    }

    virtual void speak2() {
        Animal::speak2();
        cout << "야옹~~~" << endl;
    }
};

class Dog : public Animal {
public:
    virtual void speak() override {
        cout << "멍멍멍~~~" << endl;
    }
};

//struct A {
//    int arr1[10000];
//    float arr2[10000];
//    double arr3[10000];
//public:
//    A() {
//    }
//};
//
////A add(const A* a, const A* b) {
////    return *a;
////}
//
////A add(const A& a, const A& b) {
////    cout << " = " << (void*)&a;
////    return a;
////}
//
//A add(const A& a, const A& b) {
//    return a;
//}
//
//A sub(const A& a, const A& b) {
//    return a;
//}
//
//typedef unsigned int UINT;
//
////typedef oldType newType;
//typedef int a;
//
//typedef struct {
//    int age;
//    char name[20];
//} PERSON, * LPPERSON;
//
//
////A(*FP_A)(const A&, const A&);
//
////typedef A(*FP_A)(const A&, const A&);
////FP_A a;
////(FP_A)
//using FP_A = A(*)(const A&, const A&);
//
//int main(int argc, char** args) {
//    A a;
//    A b;
//    A c;
//    A d;
//
//    //A(*p)(const A&, const A&);
//    //A* p(const A&, const A&);
//
//    FP_A pA;
//    pA = add;
//    pA = sub;
//    int type = 1;
//    switch (type) {
//    case 1:
//        pA = add;
//        break;
//    case 2:
//        pA = sub;
//        break;
//    }
//
////    A sum1 = add(nullptr, NULL);
//    A sum1 = add(a, b);
//    A sum2 = add(c, d);
//
//    //switch (type) {
//    //case 1:
//    //    sum1 = add(a, b);
//    //    break;
//    //case 2:
//    //    sum1 = sub(a, b);
//    //    break;
//    //}
//    sum1 = pA(a, b);
//
//
//
//
//
//    char ch = 'A';
//    int* p1 = &a;
//    *p1 = 20;
//    p1++;
//    void* p2 = &a;//int*, void*  
//    //p2++;
//    *(static_cast<int*>(p2)) = 30;
//
//
//
//    Dog bingo;
//    Cat kitty;
//
//    hey(bingo);
//    hey(kitty);
//
//    return 0;
//}


int main() {
    //Animal obj;
    Animal* pObj1 = new Dog();
    Animal* pObj2 = new Cat();

    pObj1->speak2();

    Dog bingo;
    Cat kitty;

    bingo.speak();
    kitty.speak();
    cout << "sizeof(Animal) = " << sizeof(Animal) << endl;
}