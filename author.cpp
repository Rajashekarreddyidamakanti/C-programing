#include <iostream>
#include <vector>

int main() {
    std::vector<int> authors(4); 
    int newAuthor;

    std::cout << "Enter the details of 4 authors: ";
    for(int i = 0; i < 4; ++i) {
        std::cin >> authors[i];
    }
    std::cout << "Enter the details of the 5th author: ";
    std::cin >> newAuthor;

    int removedAuthor = authors[0];

    for(int i = 1; i < 4; ++i) {
        authors[i-1] = authors[i];
    }
    authors[3] = newAuthor;

    std::cout << "Author No. " << removedAuthor << " is removed from the paper….and 5th author inserted….\n";
    std::cout << "Updated list of authors: ";
    for(int i = 0; i < 4; ++i) {
        std::cout << authors[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

