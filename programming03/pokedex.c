#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct Pokedex {
   //pokedex struct
   //contains two pointers
   //one to pokemon list head
   //one to player list head
} Pokedex;

typedef struct PokemonNode {
  //struct for each node in the pokemon list
  //contains pokemon species name, type and primary ability
  //stored as strings
  char name[50];
  char type[20];
  char ability[25];

  struct PokemonNode *next;
} PokemonNode;

typedef struct PlayerNode {
  //struct for each node in the player list
  //contains player name, number of pokemon owned and array of pokemon they own
  //name and pokemon count stored as strings
  //array is an array of pointers to pokemon owned
  char p_name[50];
  int owned[50];
  PokemonNode array[50];

} PlayerNode;

int main(void) {
  PokemonNode *head = NULL;
  AddPokemonToList(Pokedex, Chimchar, Fire, Blaze);
  /*
  Book *book1_ptr;
  book1_ptr = &book1;

  strcpy(book1.title, "Lovecraft Country");
  strcpy(book1.author, "Matt Ruff");
  strcpy(book1.subject, "Horror");
  book1.book_id = 19334;

  printf("Title : %s\n", book1_ptr->title);
  printf("Author : %s\n", book1_ptr->author);
  printf("Subject : %s\n", book1_ptr->author);
  printf("Book ID : %d\n", book1_ptr->book_id);
*/
}

//Functions
PokemonNode* NewPokemonNode(name, type, ability) {
  //creates a new node and returns a pointer to that node
  PokemonNode *new_node = NULL;
  new_node = malloc(sizeof(PokemonNode));

  if (new_node != NULL)
  {
    //the new node is given the correct attributes
    new_node->name=name;
    new_node->type=type;
    new_node->ability=ability;
    new_node->next=NULL;
  }
  return new_node;
}

void AddPokemonToList(*pokedex, name, type, ability) {
  //checks to see if name already exists in the Pokemon list. 
  //If it doesn’t it creates a new node and adds it to the list. It the Pokemon already exists it does nothing.

  //checks to see if name already exists
  if (FindPokemon(pokedex, name)==NULL)
  {
    //if pokemon name not found then it is added to list
    //creates new node using NewPokemonNode(name, type, ability) function
    PokemonNode *new_node = NewPokemonNode(name, type, ability);

    //now the function must add the new node to the end of the list
    //traverse through the list to find the final node in the list
    PokemonNode *temp = head;
    //if the next entry is NULL then temp is the final node in the list
    while (temp->next != NULL)
    {
      //if next entry is not NULL, move onto next node
      temp = temp->next;
    }
    //when the loop breaks, temp will be the final node in the list
    //this is when the new node is added
    //the final node is set to point to the new node
    temp->next = new_node;

  }
  else
  {
    //if pokemon name is already found in the list
    //nothing happens and the pokemon isn't added again
    printf("Pokemon already exists in list.")
  }

  //end AddPokemonToList() function
}

PokemonNode* FindPokemon(pokedex, name) {
  //searches the Pokemon list for name. 
  //If it finds name it returns a pointer to the name’s node otherwise it returns NULL.
  PokemonNode *temp = head;  // always work with a copy of head!
  
  //check if current entry is the pokemon we are searching for
  if (temp->name == name)
    {
      //if we find the name being searched for then
      //the function returns the pointer to that node
      return temp;
    }

  //if the next entry is NULL then temp is the final item in the list
  while (temp->next != NULL)
  {
    //if the next entry is not NULL, move on to the next node
    temp = temp->next;
    //check if current entry is the pokemon we are searching for
    if (temp->name == name)
    {
      return temp;
    }
  }
  //if the name beign searched for is not found then
  //the function returns NULL
  return NULL;
}

/*
Functions
-PokemonNode* NewPokemonNode(name, type, ability) – creates a new node and returns a pointer to that node
-void AddPokemonToList(*pokedex, name, type, ability) – checks to see if name already exists in the Pokemon list. 
If it doesn’t it creates a new node and adds it to the list. It the Pokemon already exists it does nothing.
-PokemonNode* FindPokemon(pokedex, name) searches the Pokemon list for name. 
If it finds name it returns a pointer to the name’s node otherwise it returns NULL.
*/