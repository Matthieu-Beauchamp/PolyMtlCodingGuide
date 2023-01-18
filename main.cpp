////////////////////////////////////////////////////////////
/// This file serves to test the correct formatting of the .clang-format rules
/// It should provide incorrect formatting (never commit this file when it is formatted)
/// \file main.cpp
/// \author Matthieu Beauchamp-Boulay
/// \date 17-01-2023
/// Created on 17-01-2023
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
// Pointer and references aligned on type (#50)
////////////////////////////////////////////////////////////
void ptrAndRef(){int *ptr; int &ref{*ptr}; int *ptrr{&*ptr};}


////////////////////////////////////////////////////////////
// Short ifs should never be on a single line (#60)
////////////////////////////////////////////////////////////
void ifs() {
    if (true) return;
    else if (false) return;
    else return;

    if (true) {return;}
    else if (false) {return;}    
    else {return;}
}


////////////////////////////////////////////////////////////
// Indentation should be 4 (#67)
////////////////////////////////////////////////////////////
void nested(){
    if (true) if (true) if (true) if (true) if (true) if (true) if (true) if (true) if (true) if (true) return;
    else {return;} else {return;} else {return;} else {return;} else {return;} else {return;} else {return;} else {return;} else {return;} else {return;}
}


////////////////////////////////////////////////////////////
// braces, see (#68 to #77), we chose to always put braces on newlines
////////////////////////////////////////////////////////////

// TODO: try-catch

auto lambda = []() -> int {return 0;};
auto empty = [](){};

class BracesStruct{public:struct Braces{private: void braces();}; enum B{a, b, c};};

void BracesStruct::Braces::braces(){
    if (true) {
        // This one must be on a single line (#73)
        for(int i=0;i<2;++i){}

        for(int i=0;i<2;++i){return;}}
        
    else if (false) {while(true){return;} }
    else {switch (1){case 0:; case 1: return; default: return;}}
}


////////////////////////////////////////////////////////////
// Alignement (#83, #84)
////////////////////////////////////////////////////////////

int thisIsAReallyLongFunctionWhoseNameSpansForAlmost80ColumnsForcingALineBreak(int a){return a;}
int thisIsAPrettyLongFunctionName(int a){return a;}

int main(int argc, char **argv){
    {int a;
    unsigned int b;

    a=1;
    b=a;
    unsigned long long c=a+b;
}
    int a=1;
    unsigned int b=2;
    float ccc=a+b;

    for(int i=0;i<10;++i){ccc+=i%2==0?thisIsAReallyLongFunctionWhoseNameSpansForAlmost80ColumnsForcingALineBreak(a)*3+thisIsAReallyLongFunctionWhoseNameSpansForAlmost80ColumnsForcingALineBreak(b)*2:2*thisIsAPrettyLongFunctionName(a)-3*thisIsAPrettyLongFunctionName(b)-13/2%a+ccc;}
    return 0;
}

