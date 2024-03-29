#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ContactNode.h"

ContactNode* CreateContactNode(char name[], char phone[])
{
     ContactNode* temp = (ContactNode*)malloc(sizeof(ContactNode));
       strcpy(temp->contactName,  name);
       strcpy(temp->contactPhoneNum,  phone);
       temp->nextNodePtr = NULL;
       return temp;
    
}
//Insert a new node after node
ContactNode* InsertContactAfter(ContactNode* head, ContactNode* temp){
    ContactNode* temp2 = head;
        if(temp2->nextNodePtr != NULL){
            temp2 = temp2->nextNodePtr;
        }
        temp2->nextNodePtr = temp;
        temp->nextNodePtr = NULL;
        return head;
};
//Return location pointed by nextNodePtr
ContactNode *GetNextContact(){


};
//Name: Roxanne Hughes
//Phone number: 443-555-2864
void PrintContactNode(ContactNode* head)
{
    ContactNode* temp2 = head;
     printf("CONTACT LIST\n");
    while(temp2 != NULL){
       
        printf("Name: %s\n", temp2->contactName);
        printf("Phone number: %s\n", temp2->contactPhoneNum);
        printf("\n");
        temp2 = temp2->nextNodePtr;
    }
  
};