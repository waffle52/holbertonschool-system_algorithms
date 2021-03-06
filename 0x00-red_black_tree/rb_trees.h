#ifndef _RB_TREES_H_
#define _RB_TREES_H_

#include <stdio.h>
#include <stdlib.h>


#define GET_NODE(node, n)						\
	do {								\
		while (node && node->n != n)				\
			node = n < node->n ? node->left : node->right;	\
	} while (0)

#define GET_MIN(node)				\
	do {					\
		while (node->left)		\
			node = node->left;	\
	} while (0)

/**
 * enum rb_color_e - Possible color of a Red-Black tree
 *
 * @RED: 0 -> Red node
 * @BLACK: 1 -> Black node
 * @DOUBLE_BLACK: 2 -> Doubl Black Node
 */
typedef enum rb_color_e
{
	RED = 0,
	BLACK,
	DOUBLE_BLACK
} rb_color_t;

/**
 * struct rb_tree_s - Red-Black tree node structure
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 * @color: Color of the node (RED or BLACK)
 */
typedef struct rb_tree_s
{
	int n;
	rb_color_t color;
	struct rb_tree_s *parent;
	struct rb_tree_s *left;
	struct rb_tree_s *right;
} rb_tree_t;

rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color);
void rotate_left(rb_tree_t **tree, rb_tree_t *node);
void rotate_right(rb_tree_t **tree, rb_tree_t *node);
int rb_tree_is_valid(const rb_tree_t *tree);
int check_rb_tree(const rb_tree_t *tree, size_t black_count);
int colour_fail(const rb_tree_t *cur);
int key_fail(const rb_tree_t *cur);
rb_tree_t *rb_tree_insert(rb_tree_t **tree, int value);
rb_tree_t *repair_luncle(rb_tree_t **tree, rb_tree_t *node);
rb_tree_t *repair_runcle(rb_tree_t **tree, rb_tree_t *node);
void repair_rb(rb_tree_t **tree, rb_tree_t *node);
rb_tree_t *insert_rb(rb_tree_t **tree, int value);
rb_tree_t *array_to_rb_tree(int *array, size_t size);
rb_tree_t *rb_tree_remove(rb_tree_t *root, int n);



void min_transplant(rb_tree_t **root, rb_tree_t *rm_node,
		rb_tree_t *rm_node_cpy, int *rm_node_cpy_color,
		    rb_tree_t *node, rb_tree_t **node_parent);
rb_tree_t *rb_transplant(rb_tree_t *root, rb_tree_t *tar, rb_tree_t *src);
void rb_rm_repair(rb_tree_t **root, rb_tree_t *node, rb_tree_t *node_parent);
rb_tree_t *repair_rsibling(rb_tree_t **root, rb_tree_t *node,
			   rb_tree_t *node_parent);
rb_tree_t *repair_lsibling(rb_tree_t **root, rb_tree_t *node,
			   rb_tree_t *node_parent);



#endif
