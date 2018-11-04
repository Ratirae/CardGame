#ifndef LANDOWNERV2_H
#define LANDOWNERV2_H
#include <iostream>
#include <string>
#include <array>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::array;
const string cards[5][13] = {
    {"����A", "����2", "����3", "����4", "����5", "����6", "����7", "����8", "����9", "����10", "����J", "����Q", "����K", },
    {"÷��A", "÷��2", "÷��3", "÷��4", "÷��5", "÷��6", "÷��7", "÷��8", "÷��9", "÷��10", "÷��J", "÷��Q", "÷��K", },
    {"����A", "����2", "����3", "����4", "����5", "����6", "����7", "����8", "����9", "����10", "����J", "����Q", "����K", },
    {"����A", "����2", "����3", "����4", "����5", "����6", "����7", "����8", "����9", "����10", "����J", "����Q", "����K", },
    {"Joker G", "Joker S"}
};
class LandOwnerv2
{
    public:
        LandOwnerv2();
        LandOwnerv2(const string name);
        ~LandOwnerv2();

        long Getscore() { return m_score; }    //��ȡ����
        void Setscore(const long val) { m_score = val; }    //���÷���
        string Getname() { return m_name; }    //��ȡ�������
        void Setname(const string val) { m_name = val; }    //�������Ǽ�����

        string Getcards(int i = 0) {return m_cards[i];}    //��ȡ��
        void Setcards(const string *cards);    //ץ��
        void Show();    //չʾ����
        //int Getcards[20]() { return m_cards[20]; }
        //void Setcards[20](int val) { m_cards[20] = val; }

    protected:

    private:
        long m_score;    //����
        string m_name;    //�������
        string m_cards[20];    //����,����20
        unsigned short m_num;    //������
};

#endif // LANDOWNERV2_H
