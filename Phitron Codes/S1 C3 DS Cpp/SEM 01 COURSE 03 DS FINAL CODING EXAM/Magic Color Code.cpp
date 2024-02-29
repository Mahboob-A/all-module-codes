


            v
// final coding exam magic color code 30092, Friday, 050 pm


#include <bits/stdc++.h>
using namespace std;

string finall;
int arr[100];

class node
{
public:
    char ch;
    node *next;
    node(char c)
    {
        ch=c;
        next=NULL;
    }
};


void deletionAtHead(node *&head)
{
    node *delnode=head;
    head=head->next;
    delete delnode;
}


void deletionAtTail (node *&head,int pos)
{
    node *temp;
    for(int i=1;i<pos;i++)
    {
        if(i==1)
        {
            temp=head;
        }
        else
        {
            temp=temp->next;
        }
    }
    node *delnode=temp->next;
    temp->next=delnode->next;
    delete delnode;
}


void deletion(node *&head,int a[])
{
    for(int i=0;i<2;i++)
    {
        if(a[i]==1)
        {
            deletionAtHead(head);
        }
        else
        {
            deletionAtTail(head,a[i]);
        }
    }
}


bool findPosition(node *&head)
{
    node *temp=head;
    int pos=1;
    int i=0;
    while(temp!=NULL)
    {
        if(temp->next!=NULL && temp->ch==temp->next->ch)
        {
            arr[i]=pos;
            i++;
            arr[i]=pos;
            deletion(head,arr);
            return true;
        }
        pos++;
        temp=temp->next;
    }
    return false;
}


void insertAtTail(node *&head,char c)
{
    node *newNode=new node(c);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}


void display(node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->ch;
        temp=temp->next;
    }
}


void print(string s)
{
    if(s.length()==2)
    {
        if(s[0]!=s[1])
        {
           if(s=="RB"||s=="BR")
           {
               finall+='P';
           }
           else if(s=="RG"||s=="GR")
           {
               finall+='Y';
           }
           else if(s=="BG"||s=="GB")
           {
               finall+='C';
           }
        }
    }
    else
    {
        finall+=s[0];
    }
}


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int siz;
        cin>>siz;
        string ch;
        cin>>ch;
        for(int j=0;j<siz;j+=2)
        {
            string sub=ch.substr(j,2);
            print(sub);
        }
        node *head=NULL;
        int it=0;
        while(finall[it]!='\0')
        {
            insertAtTail(head,finall[it]);
            it++;
        }
        while(true)
        {
            bool yes;
            yes=findPosition(head);
            if(yes==false)
            {
                break;
            }
        }
        display(head);
        cout<<endl;
        finall="";
    }
    return 0;
}

