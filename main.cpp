#include <iostream>
#include <random>


char16_t charArray[] = {'q','w','e','r','t','y','u','i','o','f'};


    std::string randomString(int length) {
        
        std::string s;
        std::mt19937 rnd(time(0));
        for (int i = 0; i < length; i++) {
            s += charArray[rnd() % ((sizeof(charArray) / 2) - 1)];
            
        }
        
         
        return (s);
        
}

    int main()
{
    
        
        std::cout << randomString(10);
       
        return 0;
}
