# OOP-Midterm

Master file for C++ Midterm exam. The exam asked us to define four different classes, `Person`, `Gunslinger`, `PokerPlayer`, and `BadDude`. `Gunslinger` and `PokerPlayer` are both child classes of `Person`, while `BadDude` is a child class of both `Gunslinger` and `PokerPlayer`. The exam specifically required that the `firstName` and `lastName` variable be initialized as char pointers, rather than strings, which is why that portion of the program is sub-optimal. We were also required to use dynamic memory allocation and overloaded assignment operators. Furthermore, several methods were specifically requested as part of the separate classes.

I have intentionally avoided copy/pasting the midterm wording to make this less likely to appear in search engine results for future students.

This was written for the midterm for *CSCI222: C++/Object-Oriented Programming*.

- `Midterm.cpp`: Holds the main() function for the program
- `BadDude.h`: The .h file for the `BadDude` class that defines its member functions
  - Child of both the `Gunslinger` and the `PokerPlayer` classes
- `BadDude.cpp`: The .cpp file for the `BadDude` class that contains the bodies of the defined member functions
- `Gunslinger.h`: The .h file for the `Gunslinger` class that defines its member functions
  - Child of the `Person` class
- `Gunslinger.cpp`: The .cpp file for the `Gunslinger` class that contains the bodies of the defined member functions
- `Person.h`: The .h file for the `Person` class that defines its member functions
  - Parent for the `Gunslinger` and `PokerPlayer` classes
- `Person.cpp`: The .cpp file for the `Person` class that contains the bodies of the defined member functions
- `PokerPlayer.h`: The .h file for the `PokerPlayer` class that defines its member functions
  - Child of the `Person` class
- `PokerPlayer.cpp`: The .cpp file for the `PokerPlayer` class that contains the bodies of the defined member functions

The output for the current version of this program can be seen below:
![Midterm Output](https://user-images.githubusercontent.com/82683346/115977530-f7891680-a52d-11eb-84bb-95b08d59d725.jpg)
