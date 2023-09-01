#include <iostream>
using namespace std;

int get_current_counted_words_size(char counted_words[]) {
  int i = 0;
  
  while (counted_words[i] != '\0') {
    i++;
  }

  return i;
}

int is_this_word_counted(char counted_words[], char letter) {
  int is_counted = 0;
  if (!letter) {
    return is_counted;
 }

  int size = get_current_counted_words_size(counted_words);

  for (int j = 0; j < size; j++) {
    if (counted_words[j] == '\0') {
      break;
    }
    if (letter == counted_words[j]) {
      is_counted = 1;
    }
  }

  return is_counted;
}

int main() {
  char input[100];
  char counted_words[26] = {};
  char current_letter;
  cin.getline(input, sizeof(input), '\n');

  for (int i = 0; i < 100; i++) {
    current_letter = tolower(input[i]);
    if (i == 0) {
      counted_words[0] = current_letter;
      continue;
    }
    if (current_letter == ' ' || current_letter == '_') {
      continue;
    }  
    if (current_letter == '\0' ) {
      break;
    }
    
    int is_counted = is_this_word_counted(counted_words, current_letter);

    if (!is_counted) {
      int size = get_current_counted_words_size(counted_words);
      counted_words[size] = current_letter;
    }
  }

  if (get_current_counted_words_size(counted_words) % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

  return 0;
}