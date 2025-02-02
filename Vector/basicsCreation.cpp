 // #include <iostream>
// #include <vector>

// using namespace std;
// int main(){
//     vector<int> vec_name = {1,2,3,4,5}; // basics vector creation
//     for(int i = 0; i<5; i++){
//         cout<<vec_name[i]<<" ";

//     }
// }


//-------------------------------------------------------------------------------------------------------------------------------------------------
// fault in code but emoji is printing
// #include <iostream>
// #include <vector>

// using namespace std;
// int main(){
//     vector<char> vec_name = {1,2,3,4,5}; // basics vector creation
//     for( char i : vec_name){
//         cout<<i<<endl;
//     }
// }

//---------------------------------------------------------------------------------------------------------------------------------------------------------


// #include <iostream>
// #include <vector>

// using namespace std;
// int main(){
//     vector<char> vec_name = {'A','B','C','D','E'}; // basics vector creation
//     for( char i : vec_name){ // for each loop
//         cout<<i<<endl;
//     }
// }

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// //USING VECTOR  FUNCTION
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>vec_name;
//     cout<<"Size of the vec : "<<vec_name.size()<<endl;
//     vec_name.push_back(25); // ADDING DATA ONE AFTER ONTHER
//     vec_name.push_back(35); 
//     vec_name.push_back(45); 
//     vec_name.pop_back();  // delete the last element/index
//     cout<<"Size of the vec after push back : "<<vec_name.size()<<endl;
//     for(int i : vec_name){ // for each loop
//         cout<<i<<endl;
//     }


// }



//  FRONT AND BACK FUNCTION 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>vec_name;
//     cout<<"Size of the vec : "<<vec_name.size()<<endl;
//     vec_name.push_back(25); // ADDING DATA ONE AFTER ONTHER
//     vec_name.push_back(35); 
//     vec_name.push_back(45); 
//     vec_name.push_back(55); 
//     vec_name.push_back(65); 
//     vec_name.pop_back();  // delete the last element/index
//     cout<<"Size of the vec after push back : "<<vec_name.size()<<endl;
//     for(int i : vec_name){ // for each loop
//         cout<<i<<endl;
//     }
//     cout<<"Print the first elem : "<<vec_name.front()<<endl;
//     cout<<"Print the last elem : "<<vec_name.back()<<endl;

// }


// // ACCESS AT INDEX

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec_name;
    cout<<"Size of the vec : "<<vec_name.size()<<endl;
    vec_name.push_back(25); // ADDING DATA ONE AFTER ONTHER
    vec_name.push_back(35); 
    vec_name.push_back(45); 
    vec_name.push_back(55); 
    vec_name.push_back(65); 
    
    cout<< vec_name.at(2);
     
}

// continue ... source apna college timestamp : 21:36