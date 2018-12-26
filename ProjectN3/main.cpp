//
//  main.cpp
//  ProjectN3
//
//  Created by pc-laptop on 10/28/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>

const char *GetCharValueWithIndex(const unsigned int index, const char *characters[], const unsigned int length)
{
    const char *characterIndex = nullptr;
    
    if (index < length)
    {
        characterIndex = characters[index];
    }
    
    return characterIndex;
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

const char *ReverseCharByIndex(const unsigned int index, const char *characters[], const unsigned int length)
{
    const char *charValue = GetCharValueWithIndex(index, characters, length);
    const char *reverseCharValue = nullptr;
    
    if (charValue != nullptr)
    {
        reverseCharValue = ReverseCharacters(charValue);
    }
    
    return reverseCharValue;
}

int main(int argc, const char * argv[])
{
    const char *superHeroNameArray[] = { "Batman", "Superman", "Flash", "Arrow"};
    const unsigned int length = sizeof(superHeroNameArray) / sizeof(*superHeroNameArray);
    
    printf("Find Hero Name index 3\n");
    printf("%s\n", GetCharValueWithIndex(3, superHeroNameArray, length)); // Arrow
    printf("Reverse Hero Name index 1\n");
    printf("%s\n", ReverseCharByIndex(3, superHeroNameArray, length)); // worrA

    return 0;
}
