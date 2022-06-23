#include <iostream>
#include <string>

// Use the standard namespace
using namespace std;

// Define the question class
class Question 
{
private:
  string Question_Text;
  string Answer_1;
  string Answer_2;
  string Answer_3;
  string Answer_4;
  int Correct_Answer;
  int Prize_Amount; //How much the question is worth
public:
  void setValues (string, string, string, string, string, int, int);
};

int main() {
  // Show the title screen
  cout << "****************" << endl;
  cout << "*The Quiz Show*" << endl;
  cout << "By Peter" << endl;
  cout << "****************" << endl;
  cout << endl;

  // Create instances of Question
  Question q1;

  // Set the values of the Question instances
  q1.setValues("What does cout do?", "Eject a CD", "Send text to the printer", "Print text on the screen", "Play a sound", 3, 2500);

}

// Store values for Question variables
void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa) {
  Question_Text = q;
  Answer_1 = a1;
  Answer_2 = a2;
  Answer_3 = a3;
  Answer_4 = a4;
  Correct_Answer = ca;
  Prize_Amount=pa;

}
