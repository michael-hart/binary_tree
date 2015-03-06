#include <iostream>
using namespace std;

// Declare the data structure
struct CP {
	int id;			// id of the node
	int data;		// data of the node
	CP * left;		// pointer to the left subtree 
	CP * right;		// pointer to the right subtree
};

typedef CP * CPPtr;	


// Function prototypes 
int numberNodes(CPPtr &hdTree);
int numberOddDataNodes(CPPtr &hdTree);
CPPtr minimumDataNode(CPPtr &hdTree);
int sumDataNodes(CPPtr &hdTree);
int idDepth(CPPtr &hdTree, int id);
bool treeBalanced(CPPtr &hdTree);

// Generate an instance of the structure
void constructStructure(CPPtr &hdTree);

int main(int argc, char ** argv)
{

	// Declare a pointer to the head of the tree
	CPPtr hdTree  = NULL;
	
	// Construct a tree structure. 
	constructStructure(hdTree);

	// =================================
	// Your functions should go here
    
    cout << "Number of nodes is " << numberNodes(hdTree) << endl;
    cout << "Number of nodes with odd data points is " << numberOddDataNodes(hdTree) << endl;
//    cout << "Value of data field in minimum node is " << minimumDataNode(hdTree)->data << endl;
//    cout << "Sum of all values in binary tree is " << sumDataNodes(hdTree) << endl;
//    cout << "Depth of node with id " << 4 << " is " << idDepth(hdTree, 4) << endl;
//    cout << "Tree is balanced: " << treeBalanced(hdTree) << endl;
//    cout << "Program ends..." << endl;
        
    // =================================
    
    // Just to freeze the console window (not always necessary)
    // getchar();
     
    return 0;
}

// Returns an integer representing the number of nodes contained in the tree
int numberNodes(CPPtr &hdTree) {

	if (hdTree == NULL) {
		return 0;
	} else {
		return 1 + numberNodes(hdTree->left) + numberNodes(hdTree->right);
	}

}

// Recursive function traverses the binary tree given by hdTree and returns the number of nodes that contain an odd number in the
// data field
int numberOddDataNodes(CPPtr &hdTree) {

	if (hdTree == NULL) {
		return 0;
	} else {
		return (hdTree->data % 2) + numberOddDataNodes(hdTree->left) + numberOddDataNodes(hdTree->right);
	}

}

// Recursive function that traverses the binary tree given by hdTree and returns a pointer to the node with the data field containing
// the smallest value
CPPtr minimumDataNode(CPPtr &hdTree) {
	return NULL;
}

// Recursive function that traverses the binary tree given by hdTree and returns the sum of all the data fields contained by the tree
int sumDataNodes(CPPtr &hdTree) {
	return 0;
}

// Recursive function that traverses the binary tree given by hdTree and returns the depth of the node with the id given by id
// Returns -1 if the tree does not contain the given id
int idDepth(CPPtr &hdTree, int id) {
	return -1;
}

// Recursive function that traverses the binary tree given by hdTree and returns a boolean of whether the tree is balanced or not
bool treeBalanced(CPPtr &hdTree) {
	return false;
}

// The function generates an instance of the structure (the same as in the description of the assignement document). The SP pointer
// points to the head of the tree
void constructStructure(CPPtr &SP){
    // Declare a structure with 5 nodes
    
    
    CPPtr SP0 = NULL;
    CPPtr SP1 = NULL;
    CPPtr SP2 = NULL;
    CPPtr SP3 = NULL;
    CPPtr SP4 = NULL;
    
    // build the structure tree
    // State 0
    SP0 = new CP;
    SP0->id = 1;
    SP0->data = 10;
    SP0->left = NULL;
    SP0->right = NULL;
    // State 1
    SP1 = new CP;
    SP1->id = 4;
    SP1->data = 5;
    SP1->left = NULL;
    SP1->right = NULL;
    // State 2
    SP2 = new CP;
    SP2->id = 8;
    SP2->data = 3;
    SP2->left = NULL;
    SP2->right = NULL;
    // State 3
    SP3 = new CP;
    SP3->id = 6;
    SP3->data = 7;
    SP3->left = NULL;
    SP3->right = NULL;
    // State 4
    SP4 = new CP;
    SP4->id = 5;
    SP4->data = 10;
    SP4->left = NULL;
    SP4->right = NULL;
    
    // Make the connections
    SP0->left = SP1;
    SP0->right = SP4;
    
    SP1->left = SP2;
    SP1->right = SP3;
    
    // Make the head pointer to point to the head of the tree
    SP = SP0;
}
