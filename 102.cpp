// Triangle containment
// Problem 102 
// Three distinct points are plotted at random on a Cartesian plane, for which -1000 ≤ x, y ≤ 1000, such that a triangle is formed.

// Consider the following two triangles:

// A(-340,495), B(-153,-910), C(835,-947)

// X(-175,41), Y(-421,-714), Z(574,-645)

// It can be verified that triangle ABC contains the origin, whereas triangle XYZ does not.

// Using triangles.txt (right click and 'Save Link/Target As...'), a 27K text file containing the co-ordinates of one thousand "random" triangles, find the number of triangles for which the interior contains the origin.

// NOTE: The first two examples in the file represent the triangles in the example given above.


// Answer:
// 228

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

float area(int x1, int y1, int x2, int y2, int x3, int y3){     //calculate area of traingle
    return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0);
}

int check_origin(int triangle[6]){

    float A = area(triangle[0], triangle[1], triangle[2], triangle[3], triangle[4], triangle[5]);

    float A1 = area(0, 0, triangle[2], triangle[3], triangle[4], triangle[5]);

    float A2 = area(triangle[0], triangle[1], 0, 0, triangle[4], triangle[5]);

    float A3 = area(triangle[0], triangle[1], triangle[2], triangle[3], 0, 0);

    if(A == (A1 + A2 + A3)){
        cout<<triangle[0]<<","<<triangle[1]<<","<<triangle[2]<<","<<triangle[3]<<","<<triangle[4]<<","<<triangle[5]<<endl;
        return 1;
    }
    else
        return 0;    
}

int main(){
    ifstream in;
    int count = 0;
    in.open("trangles.txt", ios::in);
    string co_od;
    int triangle[6];
    string g="";
    int j=0;
    while(in >> co_od){
       // cout<<co_od<<endl;
        j = 0;
        for(int i=0;i<co_od.length();i++){
            if(co_od[i] == ','){
                stringstream geek(g);
                geek >> triangle[j];
                cout<<triangle[j]<<endl;
                j++;
                g = "";
            }
            else if(i == (co_od.length()-1)){
                g = g + co_od[i];
                stringstream geek(g);
                geek >> triangle[j];
               // cout<<triangle[j]<<endl;
                j++;
                g = "";
            }
            else
                g = g + co_od[i];
                
        }

        count = count + check_origin(triangle);

    }

    cout<<"Count"<<count<<endl;
    return 0;
}