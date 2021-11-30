

#include <iostream>
#include <vector>
using namespace std;


struct Node {
    int value;
    Node* next;
};
Node* push_elem(int x, Node* pbag, Node* pend) {
    Node* tmp = new Node;
    tmp->value = x;
    tmp->next = NULL;
    if (pend != NULL) {
        pend->next = tmp;
    }
    pend = tmp;
    return tmp;
}
Node* pop_elem(Node* pbeg, Node* pend) {
    Node* tmp = pbeg;
    pbeg = pbeg->next;
    delete tmp;
    return pbeg;
}
Node* push_elem(int x, Node* top) {
    Node* tmp = new Node;
    tmp->value = x;
    tmp->next = top;
    return tmp;
}
Node* pop_elem(Node* top) {
    Node* tmp = top;
    top = top->next;
    delete tmp;
    return top;
}

int main()
{
   /* struct Person {
        string name;
        int age;
    };
    Person person1, person2;
    person1.name = "Travor";
    cin >> person1.age;
    person2.name = "Piotr";
    cin >> person2.age;
    int classe[10];
    string class1[10];
    vector <Person> v;
    for (int i = 0; i < 5; i++) {
        cin >> classe[i];
        cout << classe[i];
    }*/

    //int* x;
    //x = new int[4];
    //Person* person1;
    //person1 = new Person;
    //person1->name = "Travor";
    //person1->age = 20;
    //Person* person2;
    //person2 = NULL;
    //// 1. выделяем место под новый элемент;
    //// 2. Заполняем поля(value);
    //// 3. Связываем предыдущий элемент, который находится в стеке с новым;
    //// 4. Передвигаем указатель вершины на новый элемент;
    //// 5. Удаление элементов из стека;
    //// 6. Устанавливаем временный указатель стека;
    //// 7. Передвигаем указатель;
    //// 8. Освобождаем место, на которое указывает tmp;
    //struct Node {
    //    int value;
    //    Node* next;
    //Node(int v, Node* n = NULL) {
    //    value = v;
    //    next = n;
    //}
    //Node* push_elem(int x, Node* pbag, Node* pend) {
    //    Node* tmp = new Node;
    //    tmp.value = x;
    //    tmp.next = NULL;
    //    if (pend != NULL) {
    //        pend->next = tmp;
    //        pend = tmp;
    //        return tmp;
    //    }
    //    Node* pop_elem(Node * p)
    //}
    //};
 


    Node* top = NULL;
    int k;
    cin >> k;
    top = push_elem(k, top);
    

}