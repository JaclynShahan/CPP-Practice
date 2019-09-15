//book.hpp
#include <string>

class Book {
  
  std::string title;
  std::string author;

public:
  Book(std::string new_title, std::string new_author);
  // Add a destructor here:
  ~Book();
  
  std::string get_title();
  
  std::string get_author();
  
};
//book.cpp
#include <iostream>
#include "book.hpp"


Book::Book(std::string new_title, std::string new_author) 
  : title(new_title), artist(new_artist) {}

// add the Song destructor here:
Book::~Book() {
  std::cout << "Farewell Book";
}


std::string Book::get_title() {

  return title;

}

std::string Song::get_author() {

  return artist;

}