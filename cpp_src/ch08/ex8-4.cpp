#include <iostream>

using namespace std;

class MP3{
    public:
    void play(){
        cout << "let's play" << endl;
    };
    void stop();

};

class Mobilephone{
    public:
    bool sendCall(){
        return true;
    }
    bool receiveCall();
    bool sendSMS(){
        return true;
    }
    bool receiveSMS();
};

class MusicPhone : public MP3, public Mobilephone{
    public:
    void dial();
};

void MusicPhone::dial(){
    play();
    sendCall();
}



int main()
{
    MusicPhone handPhone;
    handPhone.play();
    handPhone.sendSMS();
}