
#include<bits/stdc++.h>
using namespace std;
struct node
{
      int data;
      struct node *next;
};
void Traverse(struct node *head)
{
      while(head!=NULL)
      {
            cout<<"Element:"<<head->data<<endl;
            head=head->next;
      }
}
struct node *AddNewNodeatBeforeNode(struct node *head,struct node *previous,int value)
{
      struct node *ptr=NULL,*p=NULL;
     ptr=(struct node *)malloc(sizeof(struct node));
     p=(struct node *)malloc(sizeof(struct node));
       p=head;
       while(p->next!=previous)
       {
              p=p->next;
       }
       ptr->data=value;
       ptr->next=previous;
       p->next=ptr;
     return head;
};
int main()
{
      struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
      head=(struct node*)malloc(sizeof(struct node));
      first=(struct node *)malloc(sizeof(struct node));
      second=(struct node *)malloc(sizeof(struct node));
      third=(struct node *)malloc(sizeof(struct node));
      head->data=10;
      head->next=first;
      first->data=20;
      first->next=second;
      second->data=30;
      second->next=third;
      third->data=40;
      third->next=NULL;
      cout<<"Before add New Node:"<<endl;
      Traverse(head);
      head=AddNewNodeatBeforeNode(head,third,50);
      cout<<"After add New Node:"<<endl;
      Traverse(head);
}


