#include <iostream>

typedef struct ObjectNode {
    int kind;
    int position;
    int velocity;
    int state;
    struct ObjectNode* next;
    struct ObjectNode* prev;
} ObjectNode;

class Object {
private:
    ObjectNode* head;
    ObjectNode* tail;
public:
    int length;
    Object() {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    int getLen() {
        return length;
    }
};

int main(void) {
    Object object;
    std::cout << object.getLen() << '\n';
    return 0;
}
