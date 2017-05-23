/*Reflection/Summary:
 *
 * Objects on the heap are all the pointers to the objects, and in my particular
 * lab there isn't anything on stack.
 *
 * 1) Nothing that I excpected to learn that I didn't.
 *
 * 2) The idea that I learned most thoroughly is the idea of virtual functions
 * and overriding them in child classes.
 *
 * 3) I still don't really understand the draw of allocating objects or pointers
 * to the heap instead of just instantiating them.
 *
 * 4) An addition you could make to this lab is to give an example of the
 * correct output, and that's true for all future labs. I really love the
 * skeleton code labs! I learn a lot thank you! */



#include <iostream>
#include <memory>
#include <vector>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include "Owl.h"
#include "Wolf.h"
#include "Pet.h"
#include "RoboDog.h"

using std::vector;
using std::unique_ptr;

void play_with(Pet* p);
void give_shot(const unique_ptr<Animal>& a);

void play_with_pets(vector<Pet*>& pets);
void treat_animals (vector<unique_ptr<Animal>>& animals);

int main () 
{
  //declare a vector of raw pointers of Pet objects
  vector<Pet*> pets;
  play_with_pets(pets);

  // write a loop that plays with a RoboDog 5 more times
  // and then prints the charge remaining
  //
  // Do not make a new RoboDog.
  // Use the RoboDog in pets

  for(int i = 0; i < 5 ; i++){
    std::cout << "Playing with RoboDog!" << std::endl;
    dynamic_cast<RoboDog*> (pets[i]);
    play_with_pets(pets);
    //std::cout << "Charge remaining: " << pets[i].charge_remaining() <<  std::endl;
  }


  //declare a vector of unique_ptr pointers of Animal objects
  vector<std::unique_ptr<Animal>> animals;
  treat_animals(animals);

  unique_ptr<Animal>(new Cat);
  unique_ptr<Animal>(new Dog);
  unique_ptr<Animal>(new Fish);
  unique_ptr<Animal>(new Wolf);

  return 0;
}

// implement this method:
//
// 1. Add at least a Cat, Dog, Fish, and RoboDog to the vector
// 2. Write a loop to play with each pet at least once
//    Call play_with for each pet
// 3. In your loop print out the memory address of each Pet
//
void play_with_pets(vector<Pet*>& pets)
{
  pets.push_back(new Cat);
  pets.push_back(new Dog);
  pets.push_back(new Fish);
  pets.push_back(new RoboDog);


  for(int i = 0; i != pets.size(); i++){
    std::cout << "Play with all the pets!" << std::endl;
    play_with(pets[i]);
    std::cout << pets[i] << std::endl;
  }
}

// implement this method:
// 1. Print out the name of the pet you are playing with
//    and the memory address of the Pet
// 2. call the pet play() function
void play_with(Pet* p)
{
  std::cout << "I'm gonna play with " << std::endl;
  std::cout << p << std::endl;
  p -> play();
}


// implement this method:
//
// 1. Add at least a Cat, Dog, Fish, and Wolf to the vector
// 2. Write a loop to give each animal a shot
//    Call give_shot for each animal
// 3. In your loop print out the memory address of each Animal
//

void treat_animals (vector<unique_ptr<Animal>>& animals)
{
  animals.push_back(unique_ptr<Animal>(new Cat));
  animals.push_back(unique_ptr<Animal>(new Dog));
  animals.push_back(unique_ptr<Animal>(new Fish));
  animals.push_back(unique_ptr<Animal>(new Wolf));

  for(int i = 0; i < animals.size(); i++){
    std::cout << "Playing with animals :D"  << std::endl;
    give_shot(animals[i]);
    std::cout << &(animals[i]) << std::endl;
  }

}


// implement this method:
// 1. Print out the name of the animal getting a shot
//    and the memory address of the animal
// 2. call the animal make_sound() function
void give_shot(const unique_ptr<Animal>& a)
{
  std::cout << a -> name() << std::endl;
  a -> make_sound();
}
