#include <BST312.h>
#include <iostream>
#include <fstream>
using namespace std;

 int main() {
    ifstream myfile;
    myfile.open("C://Users//Tyler//CLionProjects//BinarySearchTree//BST//test.txt");
    BST_312<string> *BST = new BST_312<string>(); //initialize an instance of BST
    vector<string> test;    //vector to hold the string we will test the BST with
    string word;
    int i = 0;
    while(i<11){               //get items from file
        myfile >> word;         //input into string
        test.push_back(word);   //push string into testing vector
        i++;
    }
    for(i=0;i<test.size();i++){ //insert items into BST
        word = test[i];
        BST->insertItem(word);
    }

    //test
    int numNodes = BST->countNodes();
    vector<string> InOT = BST->inOrderTraversal();
    vector<string> PreOT = BST->preOrderTraversal();
    vector<string> PostOT = BST->postOrderTraversal();

    string isInTree1 = "series";
    bool test1 = BST->isItemInTree(isInTree1);
    if(test1)
        cout <<"true"<<endl;
    else
        cout<<"false"<<endl;

    bool isEmpty = BST->isEmpty();
    bool isFull = BST->isFull();

    BST_312<string> *copyTree = new BST_312<string>;

}
