# 0x00-red_black_tree
## 0-rb_tree_node.c
Write a function that creates a Red-Black Tree node

    Prototype: rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color);
    Where parent is a pointer to the parent node of the node to create
    value is the value to put in the new node
    And color is the color of the node
    When created, a node does not have any child
    Your function must return a pointer to the new node, or NULL on failure

## 1-rb_tree_is_valid.c
Write a function that checks if a binary tree is a valid Red-Black Tree

    Prototype: int rb_tree_is_valid(const rb_tree_t *tree);
    Where tree is a pointer to the root node of the tree to check
    Your function must return 1 if tree is a valid Red-Black Tree, and 0 otherwise
    If tree is NULL, return 0

Properties of a Red-Black Tree:

    A Red-Black Tree is a BST
    Every node has a color either red or black.
    Root of tree is always black.
    There are no two adjacent red nodes (A red node cannot have a red parent or red child).
    Every path from root to a NULL node has same number of black nodes.

## 2-rb_tree_insert.c
Write a function that inserts a value in a Red-Black Tree

    Prototype: rb_tree_t *rb_tree_insert(rb_tree_t **tree, int value);
    Where tree is a double pointer to the root node of the Red-Black tree to insert the value in
    And value is the value to store in the node to be inserted
    Your function must return a pointer to the created node, or NULL on failure
    If the address stored in tree is NULL, the created node must become the root node.
    If the value is already present in the tree, it must be ignored
    The resulting tree after insertion, must be a Red-Black Tree
    You are allowed to have up to 7 functions in your file

## 3-array_to_rb_tree.c
Write a function that builds a Binary Search Tree from an array

    Prototype: rb_tree_t *array_to_rb_tree(int *array, size_t size);
    Where array is a pointer to the first element of the array to be converted
    And size is the number of elements in the array
    Your function must return a pointer to the root node of the created R-B tree, or NULL on failure

    If a value in the array is already present in the tree, this value must be ignored

    Your files 2-rb_tree_insert.c and 0-rb_tree_node.c will be compiled during the correction

## 4-rb_tree_remove.c, 0-rb_tree_node.c
Write a function that removes a node from a Red-Black tree

    Prototype: rb_tree_t *rb_tree_remove(rb_tree_t *root, int n);
    Where root is a pointer to the root node of the tree
    And n is the value to search and remove from the tree
    Your function must return the pointer to the new root of the tree after deletion
    The resulting tree must be a valid Red-Black tree
    You’re allowed to have up to 7 functions in your file
    Your file 0-rb_tree_node.c will be compiled as well during the correction

## 5-O
What are the average time complexities of the below operations for a Red-Black Tree (one answer per line):

    Inserting a node in a Red-Black Tree of size n
    Removing a node from a Red-Black Tree of size n
    Searching for a node in a Red-Black Tree of size n
