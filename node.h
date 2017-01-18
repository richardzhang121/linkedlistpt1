#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>

using namespace std;

class Student;

class Node{
    //sets variables
    private:
    Student* student;
    Node* node;
    int value;
    public:
    Node(); //constructor
    ~Node(); //destructor
    void setNext(Node* newnode); //set the next pointer to the corresponding node pointer
    Student* getStudent(); //get student pointer
    Node* getNext(); //get next Node pointer
    void setValue(int newValue); //sets value
    int getValue(); //gets value
};

#endif
