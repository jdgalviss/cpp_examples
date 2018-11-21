/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
/*The example for using cin from the video.
**There is an error in the video. The correct
**program is shown below.
*/

#include<iostream>
#include<string>

int main()
{
    std::string userName1, userName2, address1, address2;
    std::string  phone1, phone2;
   // std::cout<<"Name1: ";
    std::getline(std::cin, userName1);
   // std::cout<<"\n"<<"Address1: ";
    std::getline(std::cin, address1);
   // std::cout<<"\n"<<"Phone1: ";
    std::getline(std::cin, phone1);
   // std::cout<<"\n"<<"\n"<<"Name2: ";
    std::getline(std::cin, userName2);
   // std::cout<<"\n"<<"Address2: ";
    std::getline(std::cin, address2);
   // std::cout<<"\n"<<"Phone2: ";
    std::getline(std::cin, phone2);
    std::cout<<userName1<<"\n";
    std::cout<<"\t\t"<<address1<<"\n";
    std::cout<<"\t\t"<<phone1<<"\n"<<"\n";
    
    std::cout<<userName2<<"\n";
    std::cout<<"\t\t"<<address2<<"\n";
    std::cout<<"\t\t"<<phone2<<"\n";
    return 0;
}