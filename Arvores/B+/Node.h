#ifndef NODE_H
#define NODE_H

class Node {
private:
    int *data;
    bool leaf;
public:
    Node(int degree, int data, int data_pos);
    ~Node();
    bool isLeaf() const;
    int *getData() const;
};

#endif
