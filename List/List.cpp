//
// Created by joel on 10/3/21.
//

#include "List.h"

/*
 * Constructor de la clase List
 */
List::List()
{
}

/*
 * Destructor de la clase List
 */
List::~List()
{
}

/*
 * Agrega un nuevo nodo en la primera posición de la lista, desplazando las otras una posición adelante
 * @Param value
 */
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

/*
 * Retorna el puntero del nodo inicial
 * @Return el puntero inicial start
 */
Node* List::getFirst(){
    return start;
}

/*
 * Muestra en consola los valores correspondientes a los nodos almacenados
 */
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

/*
 * Obtiene una referencia a collector
 * @Param collector
 */
void List::setCollector(Collector collector1) {
    collector = &collector1;
}

/*
 * Permite obtener el puntero del nodo en la posición especificada
 * @Param n
 */
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

/*
 * Elimina el nodo de la posición indicada de la lista
 * @Param n
 */
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

/*
 * Permite obtener el puntro de collector
 * @Return puntero a collector
 */
Collector *List::getCollector() const {
    return collector;
}
