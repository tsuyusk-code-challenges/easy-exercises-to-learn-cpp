#include <iostream>
using namespace std;

int main() {
  int total_number_of_exercises, doable_exercises;
  doable_exercises = 0;
  string members_rating;

  cin >> total_number_of_exercises;

  for (int i = 0; i < total_number_of_exercises; i++) {
    char first_person_rating;
    char second_person_rating;
    char third_person_rating;

    cin >> first_person_rating >> second_person_rating >> third_person_rating;

    if (
      (first_person_rating != '0' && first_person_rating != '1')
      || (second_person_rating != '0' && second_person_rating != '1')
      || (third_person_rating != '0' && third_person_rating != '1')) {
        cout << "Invalid Input" << endl;
        return 0;
      }

    if (first_person_rating == '1' && second_person_rating == '1' ||
        first_person_rating == '1' && third_person_rating == '1' ||
        second_person_rating == '1' && third_person_rating == '1') {
      doable_exercises++;
    } 
  }

  cout << doable_exercises << endl;

  return 0;
}
 