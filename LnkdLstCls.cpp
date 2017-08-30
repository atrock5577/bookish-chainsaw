#include<iostream>
using namespace std;
class nodes
{
public:
    int val;
    nodes *next,*start;
    nodes *insertfb(nodes *s,int no)
    {
        nodes *t=new nodes();
        t->next=s;
        t->val=no;
        s=t;
        return s;

    }
    nodes *insertfe(nodes *s1,int no1)
    {

        nodes *t=new nodes();
        if(s1==NULL)
            s1=t;
        t->next=NULL;
        t->val=no1;
    }
    void traverse(nodes *s)
    {
        while(s!=NULL)
        {
            cout<<"  "<<s->val;
            s=s->next;
        }
    }
};

int main()
{
    //nodes *start;
    nodes n1;
    start=new nodes();

}
