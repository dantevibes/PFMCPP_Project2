#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 integer
 character
 boolean
 floating point
 double floating point
 void

 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example

 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int numba = 5;
    int value = 2005;
    int whole = 30005;
    char letter = 'z';
    char vowel = 'Y';
    char ampers = '&';
    bool isCool = true;
    bool thisSux = false;
    bool iCanFly = false;
    float piece = 22.0f;
    float part = 23.5f;
    float segment = .0001f;
    double wow = 22.3;
    double wowee = 2000000.4;
    double mauiWowee = 3331E6;
   
    

    
    ignoreUnused(numba, value, whole, letter, vowel, ampers, isCool, thisSux, iCanFly, piece, part, segment, wow, wowee, mauiWowee); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
 int sizeOfPlatter( int platterHeight = 5, int platterWidth = 15)
 {
   ignoreUnused(platterHeight, platterWidth);
   return{};
 }

/*
 2)
 */
 void buyNewCar(  int carType = 3, float numOfSeats = 7.5f, char color = 'g')
 {
   ignoreUnused(carType,numOfSeats,color);
   
 }
/*
 3)
 */
double bakeACake(int numOfEggs, float cupsOfFlour, float cupsOfSugar, bool bakingSoda = true )
{
  ignoreUnused( numOfEggs,cupsOfFlour,cupsOfSugar,bakingSoda);
  return{};
}

/*
 4)
 */
bool goFish(double numOfFish, int typeOfBait = 12, float lengthOfLine = 12.5f)
{
  ignoreUnused(typeOfBait,lengthOfLine,numOfFish);
  return{};
}
/*
 5)
 */
void popAWheely(char typeOfMotorcycle, float MPH)
{
  ignoreUnused(typeOfMotorcycle,MPH);
}
/*
 6)
 */
bool holdOfficialsAccountable(int badgeNumber, int infraction, bool underCover)
{
  ignoreUnused(badgeNumber,infraction,underCover);
  return{};
}
/*
 7)
 */
void jamOut(float numOfInstruments = 8.6f, int numOfPlayers = 5, char genre = 'j')
{
  ignoreUnused(numOfInstruments, numOfPlayers, genre);
}
/*
 8)
 */
bool climbMountEverest(int numOfDays , double lbsOfFood, float lbsOfSupplies = 1124.42f, bool favorableConditions = false )
{
  ignoreUnused(numOfDays,lbsOfFood,lbsOfSupplies,favorableConditions);
  return{};
}
/*
 9)
 */
void playASound(char soundType, float amplitude = 0.5f, int lengthInMils = 500)
{
  ignoreUnused(soundType,amplitude,lengthInMils);
}
/*
 10)
 */
double getDatBread(int amntOfMoolah, bool inWallet = false)
{
  ignoreUnused(amntOfMoolah,inWallet);
  return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto maxNumOfCookies = sizeOfPlatter();
    //2)
    buyNewCar(46);
    //3)
    auto howMuchCake = bakeACake(20,40.25f,33.33f);
    //4)
    auto fishCaught = goFish(20002);
    //5)
    popAWheely('K',120.2f);
    //6)
    auto guilty = holdOfficialsAccountable(55627, 432789, true);
    //7)
    jamOut('L');
    //8)
    auto climbSummitToday = climbMountEverest(4, 230.3, true);
    //9)
    playASound('%');
    //10)
    auto amountOfDough = getDatBread(300000, true);
    
    ignoreUnused(carRented,maxNumOfCookies,howMuchCake,fishCaught,guilty,climbSummitToday,amountOfDough);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
