// OpenClosed.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include <string>

using namespace std;

//1. pointer : �ּ� , void*
// 
//function pointer 



class Animal { // �߻� Ŭ���� -> ��üȭ �� �� ���� , Pointer, ���������� �� ����� 
    int arr[10];
public:
    //�Ϲ� �Լ� ����  
    virtual void speak() = 0; // ���������Լ� 

    // �����Լ� 
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
        cout << "�߿�~~~" << endl;
    }

    virtual void speak2() {
        Animal::speak2();
        cout << "�߿�~~~" << endl;
    }
};

class Dog : public Animal {
public:
    virtual void speak() override {
        cout << "�۸۸�~~~" << endl;
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