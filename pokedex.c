#include <stdio.h>
#include <string.h>

typedef struct Dex {
   //pokedex struct
   //contains two pointers
   //one to pokemon list
   //one to player list
} Dex;

typedef struct PokemonNode {
  char name[50];
  char type[20];
  char ability[25];

  struct PokemonNode *next;
} PokemonNode;

typedef struct PlayerNode {
  char p_name[50];
  int owned[50];
  PokemonNode array[50];

} PlayerNode;

/*Functions
PokemonNode* NewPokemonNode(name, type, ability) {
  //creates a new node and returns a pointer to that node
}

void AddPokemonToList(*pokedex, name, type, ability) {
  //checks to see if name already exists in the Pokemon list. 
  //If it doesn’t it creates a new node and adds it to the list. It the Pokemon already exists it does nothing.
}

PokemonNode* FindPokemon(pokedex, name) {
  //searches the Pokemon list for name. 
  //If it finds name it returns a pointer to the name’s node otherwise it returns NULL.

}
*/
/*
Create a struct for each node in the list called PokemonNode. Each node in the list should store – the Pokemon’s name, 
its type and its primary ability as strings. Assume each Pokemon has only a single type and a single ability.
You should implement the basic functionality required for your list type, functions to: 
create new nodes, add a node to the list, to find a specific node (by Pokemon name).
Functions
-PokemonNode* NewPokemonNode(name, type, ability) – creates a new node and returns a pointer to that node
-void AddPokemonToList(*pokedex, name, type, ability) – checks to see if name already exists in the Pokemon list. 
If it doesn’t it creates a new node and adds it to the list. It the Pokemon already exists it does nothing.
-PokemonNode* FindPokemon(pokedex, name) searches the Pokemon list for name. 
If it finds name it returns a pointer to the name’s node otherwise it returns NULL.
*/

int main(void) {
  /*
  Book book1;
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