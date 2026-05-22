#include <iostream>
using namespace std;

#define VRT   186   // ║
#define HRZ2  205   // ═
#define HRZ1  196   // ─
#define TUP   202   // ╩
#define TDWN  209   // ╤
#define INTR  215   // ╫

#define LLCNR 200
#define LUCNR 201
#define RLCNR 188
#define RUCNR 187

#define LINTR 199
#define RINTR 182

int main(void) {
   int r=0, c,width=35,height=5;

   for(c=0;c<width;c++) { //upper row
      if(c==0) {
         cout<<"%c" <<LUCNR;
      }else if(c==(width/2)) {
         cout<<"%c" <<TDWN;
      }else if(c==width-1) {
         cout<<"%c"<<RUCNR;
      }else
         cout<<"%c"<<HRZ2;
   }
   cout<<"\n";
   for(r=1;r<height-1;r++) {    //middle of the box
      for(c=0;c<width;c++) {
         if(r==height/2) {      //draw the middle line
            if(c==0)
               cout<<"%c" <<LINTR;
            else if(c==width/2)
               cout<<"%c" <<INTR;
            else if(c==width-1 && r==height/2)
               cout<<"%c" <<RINTR;
            else
               cout<<"%c" <<HRZ1;
         }else {
            if(c==0 || r==height/2 && c==width-1) {
               cout<<"%c" <<VRT;
            }else if(r==1 && c==3 || r==1 && c==5) {
               cout<<"%c" <<VRT;
            }else if(r==3 && c==3 || r==3 && c==5) {
               cout<<"%c"<<VRT;
            }else if(r>0 && r<height-1) {
               cout<<"%c" <<" ";
            }
         }
      }
      cout<<"\n";
   }
   for(c=0;c<width;c++) { //lower row
      if(c==0) {
         cout<<"%c" <<LLCNR;
      }else if(c==(width/2)) {
         cout<<"%c"<<TUP;
      }else if(c==width-1) {
         cout<<"%c"<<RLCNR;
      }else
         cout<<"%c" <<HRZ2;
   }

   cout<<"\n";
   return 0;
}
