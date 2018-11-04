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
    {"黑桃A", "黑桃2", "黑桃3", "黑桃4", "黑桃5", "黑桃6", "黑桃7", "黑桃8", "黑桃9", "黑桃10", "黑桃J", "黑桃Q", "黑桃K", },
    {"梅花A", "梅花2", "梅花3", "梅花4", "梅花5", "梅花6", "梅花7", "梅花8", "梅花9", "梅花10", "梅花J", "梅花Q", "梅花K", },
    {"红桃A", "红桃2", "红桃3", "红桃4", "红桃5", "红桃6", "红桃7", "红桃8", "红桃9", "红桃10", "红桃J", "红桃Q", "红桃K", },
    {"方块A", "方块2", "方块3", "方块4", "方块5", "方块6", "方块7", "方块8", "方块9", "方块10", "方块J", "方块Q", "方块K", },
    {"Joker G", "Joker S"}
};
class LandOwnerv2
{
    public:
        LandOwnerv2();
        LandOwnerv2(const string name);
        ~LandOwnerv2();

        long Getscore() { return m_score; }    //获取分数
        void Setscore(const long val) { m_score = val; }    //设置分数
        string Getname() { return m_name; }    //获取玩家名称
        void Setname(const string val) { m_name = val; }    //设置我那家名称

        string Getcards(int i = 0) {return m_cards[i];}    //获取牌
        void Setcards(const string *cards);    //抓牌
        void Show();    //展示手牌
        //int Getcards[20]() { return m_cards[20]; }
        //void Setcards[20](int val) { m_cards[20] = val; }

    protected:

    private:
        long m_score;    //分数
        string m_name;    //玩家名称
        string m_cards[20];    //手牌,上限20
        unsigned short m_num;    //手牌数
};

#endif // LANDOWNERV2_H
