//
// Created by joel on 10/3/21.
//

#include "List.h"

List::List()
{
}
List::~List()
{
}

void List::addFirst(int value){
    if (start==NULL){
        start = new Node(value);
    }
    else{
        Node *aux = new Node(value);
        aux->setPtrNext(start);
        start = aux;
    }

    setCollector(start->collector);
}

Node* List::getFirst(){
    return start;
}

void List::showList() {
    cout<<endl;
    if (start == NULL) {
        cout << "Esta lista se encuentra vacia" << endl;
    } else {
        Node *aux = start;
        int i = 0;

        do {
            cout << "Elemento [" << i << "] es " << aux->getValue()<<endl;

            aux = aux->getNext();
            i++;
        } while (aux != NULL);
    }
}

void List::setCollector(Collector collector1) {
    collector = &collector1;
}

Node* List::get(int n) {
    if (start == NULL) {
        cout << "Esta lista se encuentra vacia";
    } else {
        Node *aux = start;
        int i = 0;

        do {
            //cout<<"i es igual a "<<i<<" y n es "<<n<<endl;
            if (i==n){
                return aux;
            }

            aux = aux->getNext();
            i++;
        } while (i<=n);
    }
}

void List::deleteNode(int n) {

    if(n==0){
        Node* aux = start;
        start=start->getNext();
//        aux->setPtrNext(NULL);
//        aux->setValue(NULL);
        delete aux;
    } else {
        Node *aux = get(n - 1);
        Node *aux2 = get(n);
        aux->setPtrNext(aux2->getNext());
//        aux2->setPtrNext(NULL);
//        aux2->setValue(NULL);
        delete aux2;
    }
}

Collector *List::getCollector() const {
    return collector;
}
