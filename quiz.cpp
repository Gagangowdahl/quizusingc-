#include <iostream>

int main() {
     std::string questions[] ={"1.what year the c++ invented?",
                                "2.who is the niventor of C++ ?",
                                "3. what is the predecessor of c++",
                                "4.is earth is flat "
     };
     std::string options[][5]={{"A.1969 ", "B.1975","C.1985","D.1989"},
                             {"A.guido van rossum","B. bjnare stroustrup","c,john carmac", "D.markerburg"},
                             {"A.c","B.c++","C.c--","c**"},
                              {"A.yes","B.no" ,"C.sometimes","D.whats earth?"}};
char answerkey[]={'C','B','C','B'};

int size = sizeof(questions)/sizeof(questions[0]);
char guess;
int scope;

for(int i=0; i<size; i++){
    std::cout <<"*******************\n";
    std::cout <<questions[i] <<"\n";
    std::cout << "*****************\n";
    for(int j=0; j<sizeof(options[i])/sizeof(options[i][0]);j++){
        std::cout <<options[i][j]<<'\n';
    }
}
int result;
std::cout << "answer u r options in a row";
std::cin>>result;

switch(result){
    case 3212 : std::cout<<"all ans is correct";
    break;
    default: std::cout<<"there is a wromng in u r answer";
}


    return 0;
}