#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <bits/stdc++.h>

using namespace std;

class item{
    private:
            int id;
            int quantity;
            string label;
    public:
        item(int id1=0,int quantity1=0,string label1=""){
            id = id1;
            quantity = quantity1;
            label = label1;
        };
        int getId()
        {
            return id;
        };
        int getQuantity()
        {
            return quantity;
        };
        string getLabel(){
            return label;
        };
};


#endif // ITEM_H_INCLUDED
