#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

node *makeNode ( int x ){
    node *newNode = new node();
    newNode -> data = x;
    newNode -> next = NULL;
    return newNode;
}

void duyet ( node *head, int x){
    while ( head != NULL )
    cout << head -> data <<' ';
    head = head -> next;
}

void pushfront ( node **head, int x){
    node *newNode = makeNode(x);
    newNode -> next = *head;
    *head = newNode;
}

void pushback (node **head, int x){
    node *tmp = *head;
        while( tmp->next != NULL){
        tmp = tmp -> next;
        }
        tmp -> next = newNode;
}

void put (node **queue, int x){
    node *newNode = makeNode(x);
    if( *queue == NULL ){
        *queue =  newNode;
        return;
    }
    node *tmp = *queue;
    while ( tmp -> next != NULL){
    tmp = tmp -> next;
    }
    tmp -> next = newNode;
}

void pop (node **queue){
    
    if(*queue == NULL){
    return ;
    }
    node *tmp = *queue;
    (*queue) = (*queue) -> next;
    delete tmp;

}

int size (node *queue){
    ans = 0;
    while ( queue != NULL) {
        ans ++;
        queue = queue -> next;
    }
    return ans;

}
bool empty (node *queue){
    return queue == NULL;
}

int Demtu (char *s){
    bool inword = false;
    int dem = 0;
    len = strlen(s);
    for( int i=0; i<= len; i++){
        if( s[i] == " " || s[i] == "\n" || s[i] == "\t"){
            inword = false;
        }
        else if( inword == false){
            inword = true;
            dem ++;
        }
    }
    return dem;
}

int KT (char *s){
    int NA = 0;
    int PA = 0;
    for( int i=0; s[i] != '\0'; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == "i" || s[i] =='o' || s[i] == 'u'){
            NA++;
        }
        else if( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            PA++;
        }
    }
    return 0;
}