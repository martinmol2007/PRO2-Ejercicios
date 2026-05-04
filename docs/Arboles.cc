template <class T> 
class Arbre {
private:
    struct node_arbre {
        T info;
        node_arbre* segE;
        node_arbre* segD;
    };
    node_arbre* primer_node;
    // ... especificació i implementació d'operacions privades
public:
    // ... especificació i implementació d'operacions públiques
};

template <class T>
class ArbreGen {
private:
    struct node_arbreGen {
        T info;
        vector<node_arbreGen*> seg;
    };
    node_arbreGen* primer_node;
    // ... especificació i implementació d'operacions privades
public:
    // ... especificació i implementació d'operacions públiques
};
