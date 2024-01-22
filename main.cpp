//---------------------------------------------------------------------------

// The Radar display  Project - copyright, H Abouelseoud 2021.

//The Program is to evaluate the  developing a computer visualisation program
//for displaying air vehicles on a radar screen. Each vehicle will be displayed
// as a small icon made up of a number of pixels. There will exist a rendering function
//that if passed the data characterising a particular vehicle, will actually
//display it on the screen by developing the basic pixel and icon objects.
// where the Pixels: Each pixel is to be characterised by its floating-point x and y coordinates
//describing where it will appear on the screen and integer in the range 0-20 that gives its brightness
//on the screen.

//---------------------------------------------------------------------------
#include <iostream> // Necessary so that cin and cout are available
using namespace std; // Necessary so that cin and cout are available

//-----------------------------------------------------------------------------
//declaration for the classes and functions used in the code
//------------------------------------------------------------------------------
class pixel; // There exist the objects of the class called pixel
class icon; // There exist the objects of the class called icon
class displayObject; // There exist the objects of the class called displayObject
//------------------------------------------------------------------------------
// Utility functions that accept aPixel or aIcon as arguments
void showPixelDetail(const pixel& aPixel); // Report the details of a pixel on the screen.
void showIconDetail(const icon aIcon); // Report the details of an Icon on the screen.
void initialiseAsDefaultDiagonalLine(const icon& aIcon); // Return the details of 16 pixel inside one Icon.
void initialiseRedPlaneIcon(icon& anIcon); // Return the details of 32 pixel inside one Icon
void initialiseYellowHeliIcon (icon& anIcon); // Return the details of 32 pixel inside one Icon
//-----------------------------------------------------------------------------


//------------------------First Task-------------------------------------------

// Pixel  encapsulates the concept of a pixel of an Icon. Each instance has its own
// X-coordinates,Y-coordinates and the range of brightness

class pixel {    // Each of those graphics pixels things has the following member variables

public:
    float x_coordinate; //the x_coordinate of the pixel
    float y_coordinate; //the x_coordinate of the pixel
    unsigned  char  RangeOfBrightness; // the range of the brightness where it is between 0-20 , using unsigned char for saving memories as the value of  range is known
};
//----------------------------------------------------------------------------------

//-----------------------Fourth Task------------------------------------------------
// icon  encapsulates the idea of a "collection" of 16 pixels
class icon
{
public:
    pixel thePixels[16]; // an object from a class holds an array object inside other class
                        // the array contained 16 pixels which is the number of pixels inside one
                       // inside the icon
    int ID; // declaring an object for the ID value
};
//----------------------------------------------------------------------------------


//-----------------------Eighth Task------------------------------------------------
class displayObject //displayObject encapsulates the idea of the collection of the icons that will be displayed
{
public:
    int noActiveIcons; // object for number of active icons
    icon* iconsToDisplay[100]; // an object from a class holds an array object inside other class
                              // the array contained 100 icon pointers
};



// A utility to create the details of 32 pixels for a particular instance of an icon object
// by creating a pixel object from pixel class and setting the values of the details of one pixel
// and making a for loop to initialise the rest of values for the 32  pixel inside one icon
// and storing it in the array of object instance that used as argument
// the reference used to make a temporary copy of the red plane icons instance argument
// the values for pixel details (x-coordinate,y-coordinate and range of brightness) are 1,1,19-2,2,19-3,3,19,etc.

void initialiseRedPlaneIcon(icon& anIcon)
{

pixel pixelNumOne;

    for (int i=0; i<=32; i++)
    {
        pixelNumOne.x_coordinate=i+1;
        pixelNumOne.y_coordinate=i+1;
        pixelNumOne.RangeOfBrightness=19;
        anIcon.thePixels[i]=pixelNumOne;

    }

}

// A utility to create the details of 32 pixels for a particular instance of an icon object
// by creating a pixel object from pixel class and setting the values of the details of one pixel
// and making a for loop to initialise the rest of values for the 32  pixel inside one icon
// and storing it in the array of object instance that used as argument
// the reference used to make a temporary copy of the Yellow helicopter icons instance argument
// the values for pixel details (x-coordinate,y-coordinate and range of brightness) are 1,1,17-2,2,17-3,3,17,etc.

void initialiseYellowHeliIcon (icon& anIcon)
{
 pixel pixelNumTwo;

    for (int i=0; i<=32; i++)
    {
        pixelNumTwo.x_coordinate=i+1;
        pixelNumTwo.y_coordinate=i+1;
        pixelNumTwo.RangeOfBrightness=17;
        anIcon.thePixels[i]=pixelNumTwo;

    }
}
//----------------------------------------------------------------------------------


//---------------------------Third task---------------------------------------------

// A utility to display the details of a particular instance of a pixel object
// on the screen
// the const reference used to make a temporary copy of the pixel instance argument

void showPixelDetail(const pixel& aPixel)
{
    cout << "============================\n";
    cout << "The x_coordinate value of the pixel =" <<aPixel.x_coordinate<< endl;
    cout << "The y_coordinate value of the pixel =" <<aPixel.y_coordinate<< endl;
    cout << "The range value for the brightness of the pixel =" <<(int) aPixel.RangeOfBrightness<< endl;
    cout << "============================\n";
}
//-----------------------------------------------------------------------------------//

//-------------------------Seventh Task-----------------------------------------------//

// A utility to create the deatils of 16 pixels for a particular instance of an icon object
// by creating a pixel object from pixel class and setting the values of the details of one pixel
// and making a for loop to initialise the rest of values for the 16 pixel inside one icon
// and storing it in the array of object instance that used as argument
// the values for pixel details (x-coordinate,y-coordinate and range of brightness) are 1,1,15-2,2,15-3,3,15,etc.
void initialiseAsDefaultDiagonalLine( icon &aIcon)
{
    pixel pixelOne;

    for (int i=0; i<=16; i++)
    {
        pixelOne.x_coordinate=i+1;
        pixelOne.y_coordinate=i+1;
        pixelOne.RangeOfBrightness=15;
        aIcon.thePixels[i]=pixelOne;

    }
}
//------------------------------------------------------------------------------------//


//--------------------------Sixth Task-----------------------------------------------
// A utility to display the details of a particular instance of an one icon object
// on the screen using the showPixelDetail function to show the details for the 16
//pixels inside one icon

void showIconDetail(icon aIcon)
{

   cout<<"The value of ID is "<<aIcon.ID<<"\n";
   showPixelDetail(aIcon.thePixels[0]);
   showPixelDetail(aIcon.thePixels[1]);
   showPixelDetail(aIcon.thePixels[2]);
   showPixelDetail(aIcon.thePixels[3]);
   showPixelDetail(aIcon.thePixels[4]);
   showPixelDetail(aIcon.thePixels[5]);
   showPixelDetail(aIcon.thePixels[6]);
   showPixelDetail(aIcon.thePixels[7]);
   showPixelDetail(aIcon.thePixels[8]);
   showPixelDetail(aIcon.thePixels[9]);
   showPixelDetail(aIcon.thePixels[10]);
   showPixelDetail(aIcon.thePixels[11]);
   showPixelDetail(aIcon.thePixels[12]);
   showPixelDetail(aIcon.thePixels[13]);
   showPixelDetail(aIcon.thePixels[14]);
   showPixelDetail(aIcon.thePixels[15]);
   showPixelDetail(aIcon.thePixels[16]);

}
//-----------------------------------------------------------------------------------


int main()
{

//--------------------Second Task----------------------------//

    /*
    pixel aPixel; //creating an instance from pixel class
    apixel.x_coordinate=3.9; // Initialisation of member variables and setting the values for the pixel details
    apixel.y_coordinate=4.1;
    apixel.RangeOfBrightness=7;

      //printing to the screen the details of the data contained within aPixel.

      cout << "============================\n";
      cout << "The x_coordinate value of the pixel =" <<aPixel.x_coordinate<< endl;
      cout << "The y_coordinate value of the pixel=" <<aPixel.y_coordinate<< endl;
      cout << "The range value of the pixel =" <<aPixel.RangeOfBrightness<< endl;
      cout << "============================\n";

      */
 //--------------------------------------------------------------//


//----------------------Fifth Task------------------------------//

    icon myIcon; //an instance of an icon called myIcon
    pixel pixelOne ; //an instance of a pixel called pixelOne
    pixelOne.x_coordinate=3.9; // Initialisation of member variables and setting the values for the pixel details
    pixelOne.y_coordinate=4.1;
    pixelOne.RangeOfBrightness=7;
    myIcon.thePixels[0]=pixelOne; //Setting the data of the first pixel of myIcon
                                 // to have the same values as that of pixelOne.

// printing to the screen the details of the data contained within the first pixel of myIcon.

   // cout << "============================\n";
   // cout<<"the value of X coordinate for the first pixel is = "<<myIcon.thePixels[0].x_coordinate<<endl;
   // cout<<"the value of Y coordinate for the first pixel is = "<<myIcon.thePixels[0].y_coordinate<<endl;
   // cout<<"the value of range of brightness for the first pixel is = "<<myIcon.thePixels[0].RangeOfBrightness<<endl;
   // cout << "============================\n";

//-----------------------------------------------------------------------//


//----------------Testing of SUBTASK NUMBER 6 ---------------------------//
   // icon myIcon_2;  //an instance of an icon called myIcon_2
   // myIcon_2.ID=7; // Initialisation of member variables
   // showIconDetail(myIcon_2); // Display its details of the Icon
//-----------------------------------------------------------------------//



//----------------Testing of SUBTASK NUMBER 7 ---------------------------//
    icon myIcon_3;  //an instance of an icon called myIcon_2
    initialiseAsDefaultDiagonalLine(myIcon_3); // initialise the values for 16 pixel inside one icon
    myIcon_3.ID=7; // Initialisation of member variables
    showIconDetail(myIcon_3); // Display its details of the Icon
//-----------------------------------------------------------------------//

//-----------------------Eighth Task------------------------------------//
    icon allTheIcons[500]; //an array instance of an icon called allTheIcons[500]
    initialiseRedPlaneIcon(allTheIcons[0]); // initialise the values for pixels inside first icon
    initialiseYellowHeliIcon(allTheIcons[1]); // initialise the values for pixels inside second icon
    displayObject displayOne; //an instance of an displayObject called displayOne
    displayObject displayTwo; //an instance of an displayObject called displayTwo
    displayOne.iconsToDisplay[0]=&allTheIcons[0]; //Setting the data of displayOne to have
                                                 // the same values as that in the first icon.
    displayOne.noActiveIcons++; //  incrementing of noActiveIcons for displayOne
    displayTwo.iconsToDisplay[0]=&allTheIcons[0]; //Setting the data of displayTwo to have
                                                 // the same values as that in the first icon,
                                                 //Hence displayOne=displayTwo=allTheIcons[0]
    displayTwo.noActiveIcons++; // incrementing of noActiveIcons for displayTwo
//-----------------------------------------------------------------------//

}



