#include<iostream>
#include <cstdint>
#include<bitset>


int main () {

uint8_t car_status = 1;
uint8_t toggles    = 0;


uint8_t wheels_mask     = 0x01;
uint8_t suspension_mask = 0x02;
uint8_t breaks_mask     = 0x04;
uint8_t gas_mask        = 0x08;



std::cout<<std::bitset<8>(car_status)<<std::endl;

// if (car_status != 0 ){

//   std::cout<<"working"<<std::endl;
//   std::cout<<std::bitset<8>(car_status)<<std::endl;
// } else{

//   std::cout<<"off"<<std::endl;
// }

for (int i = 0 ; i <= 30 ;i ++) {

  car_status ^= wheels_mask | gas_mask;
  std::cout<<std::bitset<8>(car_status)<<std::endl;

}



// std::cout<<std::bitset<8>(breaks_mask)<<std::endl;
// std::cout<<std::bitset<8>(breaks)<<std::endl;

return 0;
}