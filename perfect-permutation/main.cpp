#include <iostream>
using namespace std;

void log_array(int size, int* array) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
}

void permutate(int size, int* output) {
  for (int i = 0; i < size; i++) {
    if ((i > 0 && (i+1) % 2 == 0) || i+1 == (size)) {
      int temp = (output[i-1]);
      output[i-1] = output[i];
      output[i] = temp;
    }
  }
}

void update_value(int size, int* from_array, int* to_array) {
  for (int i = 0; i < size; i++) {
    to_array[i] = from_array[i];
  }
}

int is_valid_output(int size, int* output) {
  int result = 0;
  int right_outputs = 0;
  for (int i = 0; i < size; i++) {
    if(output[i] != (i+1) && output[output[i]-1] == (i+1)) {
      right_outputs++;
    };
  }

  if (right_outputs == (size)) {
    result = 1;
  }

  return result;
}

int main() {
  int size;
  cin >> size;

  int* output = (int*)malloc(size * sizeof(int));
  int* final_output = (int*)malloc(size * sizeof(int));

  if (size <= 1 || size % 2 != 0) {
    cout << -1 << endl;
    return 0;
  }

  for (int i = 0; i < size; i++) {
    output[i] = i+1;
  }

  while (1) {
    if (!(is_valid_output(size, output))) {
      permutate(size, output);
    } else {
      break;
    }
  }

  update_value(size, output, final_output);

  log_array(size, final_output);

  return 0;
}
