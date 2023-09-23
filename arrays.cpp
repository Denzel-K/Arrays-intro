#include <iostream>
using namespace std;

int main(){
  int numbers[] = {1,2,3,4,5,6,7,8,9,10};
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  
  //sizeof 
  int num_size = sizeof(numbers);
  int num_elements = sizeof(numbers)/sizeof(int);
   int grade_size = sizeof(grades);
  int grade_elements = sizeof(grades)/sizeof(char);
  
  cout << "Size of numbers array: " << num_size << " bytes" << '\n';
  cout << "Total elements: " << num_elements << '\n';
  cout << "Size of grades array: " << grade_size << " bytes" << '\n';
  cout << "Total elements: " << grade_elements << '\n';
  
  //Array iteration
  //using for loop
  cout << "Iteration using for loop" << '\n';
  cout << "_*_*_*_*_*_*_*_*_*_*_*_*" << '\n';
  
  cout << "Elements in numbers array:" << '\n';
  for (int i = 0; i < num_elements; i++){
    cout << numbers[i] << '\n';
  }
  
  cout << "Elements in grades array:" << '\n';
  for (int i = 0; i < grade_elements; i++){
    cout << grades[i] << '\n';
  }
  
  //using foreach loop
  cout << "Iteration using foreach loop" << '\n';
  cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << '\n';
  
  for (int number: numbers) {
    cout << number << '\n';
  }
  for (char grade: grades) {
    cout << grade << '\n';
  }
  
  return 0;
}