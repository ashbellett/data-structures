#include "../include/linked-list.hh"

int main(void) {
    List<int>list;
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    list.print();
}
