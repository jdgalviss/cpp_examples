/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */
#include<sstream>
#include<iostream>
#include<string>

int main()
{
    std::string lengthString, widthString;
    float length, width, area;
   // std::cout<<"Name1: ";
    std::getline(std::cin, lengthString);
   // std::cout<<"\n"<<"Address1: ";
    std::getline(std::cin, widthString);
    
    std::stringstream(widthString)>>width;
    std::stringstream(lengthString)>>length;
    area = width*length;
    std::cout<<area;
    return 0;
}
