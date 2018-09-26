
#include <bits/stdc++.h>
#include "String.h"
#include "school.h"

using namespace std;

int main()
{
    char s[] = "bhumesh";

    Pstring2 obj(s);
    obj.display();
    /*
    Pstring2 obj2;
    obj2 = obj.right(s,15);

    obj.display();
    obj2.display();
    */

    Pstring2 obj2;
    obj2 = obj.mid(s,0,7);

    obj.display();
    obj2.display();



    return 0;
}
