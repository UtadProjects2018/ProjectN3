//
//  main.cpp
//  ProjectN3
//
//  Created by pc-laptop on 10/28/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>

const char GetIndexCharValue(const unsigned int index, const char characters[])
{
    const unsigned int length =  static_cast<int>(strlen(characters));
    char characterCopy = NULL;
    
    if (index < length)
    {
        characterCopy = characters[index];
    }
    
    return characterCopy;
}

const char *ReverseCharacters(const char *characters)
{
    int length = static_cast<int>(strlen(characters));
    char *reversedCharacter = new char[length];
    
    for (int i = length; i > 0; i--)
    {
        reversedCharacter[length - i] = characters[i - 1];
    }
    return reversedCharacter;
}

const char *ReverseCharByIndex(const unsigned int index, const char characters[])
{
    const char charCopy = GetIndexCharValue(index, characters);
    const char *characterCopy = &charCopy;
    if (charCopy != '\0')
    {
        characterCopy = ReverseCharacters(characters);
    }
    return characterCopy;
}

int main(int argc, const char * argv[])
{
    // insert code here...
    //std::cout << "Hello, World!\n";
    const char asd[] = "asd1";
    const char asd2[] = "HOLA";
    
    printf("%c", GetIndexCharValue(3, asd));
    printf("\n");
    printf("%s", ReverseCharByIndex(1, asd2));
    printf("\n");
    
    return 0;
}
