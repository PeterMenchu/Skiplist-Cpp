//
// Created by Peter
// Menchu on 7/5/21.
//

#ifndef SKIPLIST_CPP_SKIPLIST_H
#define SKIPLIST_CPP_SKIPLIST_H


class Skiplist {
    private:
        typedef struct node {
            node *next;
            node *prev;
            int intVal;
            double decVal;
            string stringVal;
        }* nodePtr;
        // pointers to head and tail of the list
        nodePtr head, tail;
        // for navigating list
        nodePtr current;
        // void for patchwork during deletion
        nodePtr temp;
    public:
        Skiplist();
        void printList();
        void addNode(int data);
        void deleteNode(int data);

};


#endif //SKIPLIST_CPP_SKIPLIST_H
