#include <iostream>

using namespace std;

class CMyObject{
public:
    CMyObject(){

    }
    virtual ~CMyObject(){}

    virtual int GetDeviceID() = 0;

protected:
    int m_nDeviceID;
};

void PrintID(CMyObject *pObj){
    cout << "Device ID: " <<pObj->GetDeviceID() << endl;
}

class CMyTV : public CMyObject{
public:
    CMyTV(int nID){m_nDeviceID = nID;}
    virtual int GetDeviceID(){
        cout << "CMyTV::GetDeviceID()" << endl;
        return m_nDeviceID;
    }
};

int main()
{
    CMyTV a(5);

    ::PrintID(&a);

    return 0;
}
