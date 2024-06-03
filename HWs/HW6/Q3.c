/* Homework 6: Question 3
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q3 Q3.c
   Then run your compiled program with: ./Q3
*/
#include <stdlib.h>
#include <stdio.h>

struct list {
  int val;
  struct list *next;
};

/* from Lecture 6 */
void list_add_head(struct list **head, struct list *item)
{
  item->next = *head;
  *head = item;
}

/* from Lecture 6 (just for your reference) */
struct list *list_pop_head(struct list **head)
{
  struct list *cur;

  cur = *head;
  if (cur) {
    *head = cur->next;
    cur->next = NULL;
  }

  return cur;
}

/* you write this one! */
int list_count(struct list *head){
  struct list *temp = head;
  int count = 0;

  while(temp != NULL){
    count++;
    temp = temp->next;
  }

  return count;

}

/* you write this one! */
struct list *list_pop_tail(struct list **head){
  struct list *copy = *head;
  struct list* ret;
  int x;
  
  if((*head) == NULL){
    return NULL;
  }
  else if ((*head)->next == NULL){
      *head = NULL;
      return copy;
    }
for(x = 0; x < sizeof(copy); x++){
  if(copy->next->next != NULL) {
        copy = copy->next;
        //*head = copy->next;
      }
  } 
ret = copy->next;
copy->next = NULL;
return ret;

  }

int main()
{
  int i;
  struct list *item;
  struct list *head = NULL;

  /* load up the list with ten items */
  for (i=0; i<10; i++) {
    item = malloc(sizeof(*item));
    item->val = i;
    list_add_head(&head, item);
    printf("Added %p (val: %d) to list.\n",  item, item->val);
  }

  printf("# of items: %d\n", list_count(head));

  /* remove each item and print its value */
  while (item = list_pop_tail(&head)) {
    printf("Removed %p (val: %d)\n",  item, item->val);
    free(item);
  }

  return 0;
}