/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numNeighbors;
 *     struct Node** neighbors;
 * };
 */

 struct Node* clone(struct Node* src, struct Node* created[]) {
    if (!src) return NULL;
    if (created[src->val]) 
        return created[src->val];

    struct Node* c = malloc(sizeof(*c));
    c->val = src->val;
    c->numNeighbors = src->numNeighbors;
    c->neighbors = malloc(c->numNeighbors * sizeof(*c->neighbors));
    created[src->val] = c;

    for (int i = 0; i < src->numNeighbors; i++) {
        c->neighbors[i] = clone(src->neighbors[i], created);
    }
    return c;
}

struct Node* cloneGraph(struct Node* s) {
    struct Node* created[101] = { NULL };
    return clone(s, created);
}
