#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct n{
	int x;
	struct n * next;
};
typedef struct n node;
void ekle(node* r, int x){
	while (r -> next != NULL){
		r= r->next;
	}
	r->next = (node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next= NULL;
}
void bastir(node* r){
	while (r != NULL){
		printf("%d ", r->x);
		r = r->next;
	}
}
int main(int argc, char *argv[]) {
	node * root;
	root = (node*)malloc(sizeof(node));
	root -> x = 500;
	root -> next = NULL;
	
    int i;	
	for(i=0;i<5;i++){
		ekle(root,i*10);
	}
	ekle(root,27);
	ekle(root,31);
	bastir(root);
	
	
	return 0;
}
