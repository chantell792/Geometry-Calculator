// Chantell Jenkins
// 10/28/2026
// Geometry Calculator Project

#include <iostream>

int main()
{
    std::cout << "Geometry Calculator\n";
 const double pi = 3.14159;
 int menuChoice;
    double area;
    double radius;
    double length;
    double width;
    double base;
    double height;

 std::cout << "1.Circle: " << std::endl;
 std::cout << "2.Rectangle: " << std::endl;
 std::cout << "3.Triangle: " << std::endl;
 std::cout << "4.Quit: " << std::endl;

 std::cout << "Enter a menu choice: ";
 std::cin >> menuChoice;

 if (menuChoice < 1 || menuChoice > 4)
 {
     std::cout << "Invalid menu choice. Please enter a number 1 - 4\n";
 }

 else if (menuChoice == 1)
 {
     std::cout << "Enter radius: ";
     std::cin >> radius;

     if (radius < 0)
     {
         std::cout << "Invalid radius. Please enter a number greater than or equal to 0\n";
     }
     else
     {
         area = pi * radius * radius;
         std::cout << "Area of the circle: " << area << std::endl;
     }
 }

else if (menuChoice == 2)
 {
     std::cout << "Enter length: ";
     std::cin >> length;
     std::cout << "Enter width: ";
     std::cin >> width;
 }
 if (length < 0 || width < 0)
 {
     std::cout << "Invalid dimension. Please enter a number greater than or equal to 0\n";
 }
 else
 {
     area = length * width;
     std::cout << "Area of the rectangle: " << area << std::endl;
 }  

 else if (menuChoice == 3)
 {
     std::cout << "Enter base: ";
     std::cin >> base;
     std::cout << "Enter height: ";
     std::cin >> height;
 }
 if (base < 0 || height < 0)
 {
     std::cout << "Invalid dimension. Please enter a number greater than or equal to 0\n";
 }
 else
 {
     area = 0.5 * base * height;
     std::cout << "Area of the triangle: " << area << std::endl;
 }
 else
 {
     std::cout << "Program has ended\n";
 }
    return 0;
}