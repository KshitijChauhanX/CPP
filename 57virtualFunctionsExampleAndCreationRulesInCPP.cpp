#include<iostream>
#include<cstring>
using namespace std;

class CodeWithHarry{
protected: 
    string title;
    float rating;
public:
    CodeWithHarry(string s, float r){
        title=s;
        rating=r;
    }

    virtual void display(){}
};

class CWHVideo: public CodeWithHarry{
    float videoLength;
public: 
    CWHVideo(string s,float r,float vl):CodeWithHarry(s,r){
        videoLength=vl;
    }

    virtual void display(){
        cout<<"This is an amazing video with title: "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5."<<endl;
        cout<<"The length of the video: "<<videoLength<<" minutes."<<endl;
    }
};

class CWHText: public CodeWithHarry{
    int wordCount;
public: 
    CWHText(string s,float r,int wc):CodeWithHarry(s,r){
        wordCount=wc;
    }

    virtual void display(){
        cout<<"This is an amazing text tutorial with title: "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5."<<endl;
        cout<<"The length of this tutorial is: "<<wordCount<<" minutes."<<endl;
    }
};

int main(){
    string title;
    float rating,vlen;
    int wordCount;

    //video

    title="Django Tutorial";
    vlen=7.89;
    rating=4.89;                              //Method 1 - without using pointer to object
    CWHVideo djVideo(title,rating,vlen);
    djVideo.display();

    cout<<"**********************************************"<<endl; 
    //text

    title="Django Tutorial Text";
    wordCount=9879;
    rating=4.78;
    CWHText djText(title,rating,wordCount);
    djText.display();

    return 0;
}