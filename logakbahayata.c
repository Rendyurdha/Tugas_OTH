#include <stdio.h>
#include <stdlib.h>

// Struktur Node yang disediakan
typedef struct Node {
  char data;
  struct Node* next;
} Node;

int main() {
  Node n =  {'I', NULL};
  Node* f = (Node*)malloc(sizeof(Node));
  f->data = 'N';
  Node* o = (Node*)malloc(sizeof(Node));
  o->data = 'F';
  Node* r = (Node*)malloc(sizeof(Node));
  r->data = '0';
  Node* m = (Node*)malloc(sizeof(Node));
  m->data = 'R';
  Node* a = (Node*)malloc(sizeof(Node));
  a->data = 'M';
  Node* t = (Node*)malloc(sizeof(Node));
  t->data = 'A';
  Node* i = (Node*)malloc(sizeof(Node));
  i->data = 'T';
  Node* k = (Node*)malloc(sizeof(Node));
  k->data = 'I';
  Node* a2 = (Node*)malloc(sizeof(Node));
  a2->data = 'K';
  Node* i3 =  (Node*)malloc(sizeof(Node));
  i3->data = 'A';

  n.next = f;
  f->next = o;
  o->next = r;
  r->next = m;
  m->next = a;
  a->next = t;
  t->next = i;
  i->next = k;
  k->next = a2;
  a2->next = i3;
  i3->next = NULL;

  Node* l3 = &n;

  char word[13];
  int index = 0;
  while (l3 != NULL) {
    word[index++] = l3->data;
    l3 = l3->next;
  }
  word[index] = '\0'; 

  printf("%s\n", word);
  free(f);
  free(o);
  free(r);
  free(m);
  free(a);
  free(t);
  free(i);
  free(k);
  free(a2);

  return 0;
}
