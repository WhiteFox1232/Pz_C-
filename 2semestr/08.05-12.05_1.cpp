#include <iostream>

using namespace std;

class BaseTree {
public:
    virtual void draw() const = 0;
};

class Tree1 : public BaseTree {
public:
    void draw() const override {
        cout << "Drawing 1:" << endl;
        cout << " /\\ " << endl;
        cout << "//\\\\" << endl;
    }
};

class Tree2 : public BaseTree {
public:
    void draw() const override {
        cout << "Drawing 2:" << endl;
        cout << " /\\ " << endl;
        cout << "/**\\" << endl;
    }
};

class Tree3 : public BaseTree {
public:
    void draw() const override {
        cout << "Drawing 3:" << endl;
        cout << " /\\ " << endl;
        cout << "/++\\" << endl;
    }
};

int main() {
    BaseTree* treeTable[3];

    treeTable[0] = new Tree1();
    treeTable[1] = new Tree2();
    treeTable[2] = new Tree3();

    for (int i = 0; i < 3; i++) {
        treeTable[i]->draw();
        cout << endl;
    }

    // Clean up the memory
    for (int i = 0; i < 3; i++) {
        delete treeTable[i];
    }

    return 0;
}