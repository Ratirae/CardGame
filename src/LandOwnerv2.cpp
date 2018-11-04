#include "LandOwnerv2.h"

LandOwnerv2::LandOwnerv2()
{
    m_num = 0;
    //ctor
}
LandOwnerv2::LandOwnerv2(const string name)
{
    m_num = 0;
    Setname(name);
}
LandOwnerv2::~LandOwnerv2()
{
    //dtor
}
void LandOwnerv2::Setcards(const string *cards)
{
        m_cards[m_num] = *cards;
        m_num++;
}
void LandOwnerv2::Show()
{
    cout << "ÊÖÅÆÊý:" << m_num <<endl;
    for(int i = 0; i < m_num; ++i)
    {
        cout << Getcards(i) << endl;
    }
}
