//Natalio Panzarini
//Nafeis Weixelman
//Nils Olsson
//Cameron Hosseiniyar
#pragma once

#include <iostream>
#include <string>

#include "Date.hpp"

using std::string;
using mesa::Date;

class Book {
  public:

    enum Genre {
      FICTION, NONFICTION, PERIODICAL, BIOGRAPHY, CHILDREN
    };

    Book(
        unsigned long isbn, string title,
        string author, Date d, Genre g);

    bool check_out(bool checked_out_);
    bool check_in(bool checked_out_);

    unsigned long isbn() const
    { return isbn_; }

    string title() const {
      return title_;
    }

    string author() const {
      return author_;
    }

  private:
    unsigned long isbn_;
    string title_;
    string author_;
    Date   copyright_date_;
    bool   checked_out_;
    Genre  genre_;

};



inline bool operator==(const Book& lhs, const Book& rhs); 

inline bool operator!=(const Book& lhs, const Book& rhs);

std::ostream& operator<<(std::ostream& os, const Book& b);


