#include <iostream>
#include <string>

int main ( void )
{
    std::string curLine, prevLine;
    if ( !getline( std::cin, prevLine ) ) {
        std::cerr << "Usage: cat somefile | ./uniq" << std::endl;
        return 0;
    }
    std::cout << prevLine << "\n";

    while ( getline( std::cin, curLine ) ) {
        int len = curLine.length();
        if ( prevLine.length() == len ) {
            while( --len >= 0 ) {
                if( curLine[len] != prevLine[len] ) {
                    break;
                }
            }
            // duplicated
            if( -1 == len ) { continue; }
        }
        // don't have to flush, so use `"\n"' instead of `std::endl'
        std::cout << curLine << "\n";
        std::swap( prevLine, curLine );
    }

    return 0;
}