#include <iostream>
#include <vector>

int main(){
  std::vector <int> vector1 = {2,4,3,6,1,9};
  int sum_even = 0;
  int prod_odd = 0;
  for(int i = 0; i < vector1.size(); i++){
    int el = vector1[i];
    if(el % 2 == 0){
      sum_even += el;
    } else {
      if(prod_odd == 0){
        prod_odd = 1;
      }
      prod_odd *= el;
    }
  }
  std::cout << "Sum of even elements: " << sum_even << ".\n";
  std::cout << "Product of odd elements: " << prod_odd << ".\n";
}
