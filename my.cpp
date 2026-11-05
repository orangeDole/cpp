#include<iostream>
#include <cstdint>
#include<bitset>


struct Setting {

  const char flag0 :3;
  uint8_t flag2 :8;
  uint8_t flag3 :1;

  uint8_t reserv:5;
};


int main () {

  Setting p1 = {0,1,1,1};
  
  p1.reserv = 23;


const uint16_t option1 = 0x01;
const unsigned char option2 = 254;
const unsigned char option3 = 0x01;

std::cout<<sizeof(Setting)<<std::endl;
std::cout<<"flag0\t"<<std::bitset<8>(p1.flag0)<<std::endl;
std::cout<<"flag3\t"<<std::bitset<8>(p1.flag3)<<std::endl;

std::cout<<"flag2 8bit size\t"<<std::bitset<8>(p1.flag2)<<std::endl;

std::cout<<std::bitset<8>(55)<<std::endl;





return 0;
}