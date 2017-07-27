#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
    int data;
    struct node* nxt;
};
class linked
{
    struct node *head;
public:
    linked()
    {
        head=NULL;
    }
    void insatbeg(int x)
{
    struct node *temp,*r;
    temp=new node;
    r=new node;
    temp->nxt=NULL;
    temp->data=x;
    if(head==NULL)
    {
        head=temp;
        head->nxt=NULL;
    }
    else
    {
    r=head;
    temp->nxt=r;
    r=temp;
    head=r;
    }
}
void insatend(int x)
{
    struct node *t,*m;
    t=new node;
    t->data=x;
    t->nxt=NULL;
    if(head==NULL)
    {
        head=t;
        head->nxt=NULL;
    }

        m=head;
        while(m->nxt!=NULL)
        {
            m=m->nxt;
        }
        m->nxt=t;
        t->nxt=NULL;
        m=t;

}
void insatpos(int x,int pos)
{
    int i;
    struct node *temp,*m,*r;
    temp=new node;
    temp->data=x;
    temp->nxt=NULL;
     if(head==NULL)
     {
         head=temp;
         head->nxt=NULL;
     }
     r=head;
     for(i=1;i<pos;i++)
     {
         m=r;
         r=r->nxt;
     }
     temp->nxt=r;
     m->nxt=temp;
}
void delatbeg()
{
    struct node *r;
    if(head==NULL)
        cout<<"\n cant delete";
    r=head;
    head=head->nxt;
    free(r);
}
void delatend()
{
    struct node *r,*m;
    r=head;
    while(r->nxt!=NULL)
    {
        m=r;
        r=r->nxt;
    }
    m->nxt=NULL;
    free(r);
}
void delatpos(int pos)
{
    struct node *m,*r;
    r=head;
    int i;
    for(i=1;i<pos;i++)
    {
        m=r;
        r=r->nxt;
    }
    m->nxt=r->nxt;
    free(r);
}
void display()
{
    struct node *trav;
    trav=head;
    while(trav!=NULL)
    {
        cout<<trav->data<<endl;
        trav=trav->nxt;
    }
    cout<<'\n';
}

};
int main()
{
    linked l1;
    l1.insatbeg(2);
    l1.insatbeg(3);
    l1.insatbeg(5);
    l1.insatpos(4,4);
    l1.insatpos(23,5);
    l1.insatend(6);
    l1.insatend(7);
    l1.insatend(8);
    cout<<"\n after insertion\n";
    l1.display();
    l1.delatbeg();
    l1.display();
    l1.delatend();
    l1.display();
    l1.delatpos(3);
    l1.display();
    l1.delatpos(3);
    l1.display();
}
