/* Hexadecimal's theorem */
#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;


struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head, int data)
{
    struct Node* newNode =
         (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = (*head);
    (*head) = newNode;
}

void convertArr(Node* head)
{
    //int len = findlength(head);
    int arr[5];

    int index = 0;
    Node* curr = head;
    while (index<5) {
        arr[index] = curr->data;
        curr = curr->next;
        index++;
    }
    cout <<arr[4]<<" "<< arr[3]<<" "<<arr[1];

}


int main()
{
    struct Node* head = NULL;
    unsigned int n;
    cin >> n;
    unsigned int fibnum=0,a=0,b=1;
    push(&head, a);
    push(&head, b);
    if(n==0)
    {
        cout <<"0 0 0";
    }
    if(n==1)
    {
        cout <<"0 0 1";
    }
    if(n==2)
    {
        cout <<"1 0 1";
    }
    if(n==3)
    {
        cout <<"1 1 1";
    }
    if(n>3)
    {
    while(fibnum<n)
    {
        fibnum=a+b;
        a=b;
        b=fibnum;
        push(&head, fibnum);
    }
    convertArr(head);
    }
    return 0;

}
