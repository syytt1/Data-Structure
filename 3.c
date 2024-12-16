# include <stdio.h>
# include <stdlib.h>
typedef struct Term{
    int num;
    struct Term *next;
}Term;
int main(){
    int M,N;
    scanf("%d,%d", &M,&N);
    Term *p=NULL,*head=NULL,*tail=NULL;
    for (int i=0;i<M;i++){
        p =(Term*)malloc(sizeof(Term));
        p->num = i+1;
        if (head==NULL){
            head = tail = p;
        }
        else{
            tail->next = p;
            tail = p;
        }
    }
    tail->next = head;
    p=head;
    Term* prev;
    int n=0;
    while(n<M){
        for (int i=0;i<N;i++){
            prev = p;
            p = p->next;
        }
        printf("%d",p->num);
        Term *temp = p;
        p = p->next;
        prev->next = p;
        free(temp);
        if (n<M-1) printf(",");
        n++;
    }
    printf("\n");
}