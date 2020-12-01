/*
Description      :  Hybrid Inheritance 
Function Date    :  1 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class student
{
    protected:
      int roll_number;
    
    public:
      void get_number(int a)
      {
          roll_number = a;
      }
      void put_number(void)
      {
          cout << "Roll Number : " << roll_number << "\n";
      }
};

class test : public student
{
    protected:
      float part1, part2;
    
    public:
      void get_marks(float x, float y)
      {
          part1 = x, part2 = y;
      }
      void put_marks(void)
      {
          cout << "Marks Obtained : " << "\n";
          cout << "Part1 = " << part1 << "\n";
          cout << "Part2 = " << part2 << "\n";
      }
};

class sports
{
    protected:
      float score;

    public:
      void get_score(float s)
      {
          score = s;
      }
      void put_score(void)
      {
          cout << "Sports wt : " << score << "\n\n";
      }
};

class result : public test, public sports
{
    float total;

    public:
      void display(void);    
};

void result :: display(void)
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    cout << "Total Score : " << total << "\n";
}

int main()
{
    result student_1;
    student_1.get_number(1234);
    student_1.get_marks(27.5, 33.0);
    student_1.get_score(6.0);
    student_1.display();

    return 0;
}