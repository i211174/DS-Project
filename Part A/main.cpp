#include "./linkedList.h"
#include"./BPlusTree.h"
#include"./insertAndDelete.h"
#include"./search.h"
int main() {
    StudentList l1;
    int choose = 0;
    while (choose != 3) {
        cout << "1.Search\n2.Delete\n3.Exit\n";
        cin >> choose;
        switch (choose)
        {
        case 1:
            Search(l1);
            break;
        case 2:
            insertAndDelete(l1);
            break;
        case 3:
            break;
        default:
            break;
        }
    }
    BPLusTree<int> tree;
    return EXIT_SUCCESS;
}