//Natalio Panzarini
//Nafeis Weixelman
//Nils Olsson
//Cameron Hosseiniyar
#include <stdexcept>

#include "Book.h"
#include "Genre.h"


Book::Book(
    unsigned long isbn, string title,
    string author, Date d, Genre g) :
  isbn_{isbn}, title_{title},
  author_{author},copyright_date_{d}, genre_{g}
{}

bool Book::check_out(bool checked_out_) {
  return true;
}

bool Book::check_in(bool checked_out_) {
  return false;
}


std::ostream& operator<<(std::ostream& os, const Book& b) {
  return os << "Title: " << b.title() << std::endl << "Author: " << b.author() << std::endl << "ISBN: " << b.isbn() << std::endl;
}

inline bool operator==(const Book& lhs, const Book& rhs) 
{
  return (lhs.isbn() == rhs.isbn());
}

inline bool operator!=(const Book& lhs, const Book& rhs)
{
  return !(lhs.isbn() == rhs.isbn());
}


