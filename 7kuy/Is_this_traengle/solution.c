#include <stdbool.h>

bool is_triangle(int a, int b, int c)
{
  if(a <= 0 || b <= 0 || c <= 0){
    return false;
  }else if(a+b <= c || a+c<=b || b+c<=a){
    return false;
  }else{
    return true;
  }
}
