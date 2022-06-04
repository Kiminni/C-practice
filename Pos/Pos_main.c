#include <stdio.h>
#include "Pos_main.h"



int main()
{   
    open_file();    
    int total = 0;
    int i = 0;

    while(i > -1 && i < 6)
    {
        print();
        scanf("%d",&i);

        if(i == 1)
            total = add_pos();
        
        else if(i == 2)
            total = change_pos();

        else if(i == 3)
            print_pos();

        else if(i == 4)
            all_pos();
        
        else if(i == 5)
            print_file();
            

    }
  
    close_file();
    return 0;

}

