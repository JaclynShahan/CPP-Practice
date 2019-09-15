//constructors example

//music.cpp
#include <iostream>
#include "song.hpp"

int main() {

  Song back_to_black("Back to Black", "Amy Winehouse");
 
}

//song.hpp
#include <string>

class Song {
  

public:
  // Add a constructor here:
  Song(std::string new_title, std::string new_artist);
  
  
};

//song.cpp

#include "song.hpp"

// add the Song constructor here:
Song::Song(std::string new_title, std::string new_artist) {
  title = new_title;
  artist = new_artist;
}