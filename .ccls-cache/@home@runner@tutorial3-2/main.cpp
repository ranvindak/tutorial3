#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {

  struct structname{
  int length;
  int height;
  int width;
  }box1,box2;
  
  cout << "Enter Box 1 Height : ";
 cin >> box1.height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.length;
  
  cout << "Enter Box 2 Height : ";
 cin >> box2.height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.length;


  cout<<"Box1 is:"<<volume(box1.height,box1.width,box1.length)<<endl;
  cout<<"Box2 is:"<<volume(box2.height,box2.width,box2.length)<<endl;

}
int volume(int height,int width,int length){
  int vol=height*width*length;
  return vol;
}