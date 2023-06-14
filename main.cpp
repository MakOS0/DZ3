#include <iostream>
#include <string>

using namespace std;

enum Season
{
    Winter,
    Spring,
    Summer,
    Autumn,
};

class SeasonsBase
{
public:
    virtual void Change() = 0;

    virtual ~SeasonsBase()
    {

    }

    Season get_s()
    {
        return s;
    }

    Season s = Winter;
};

class Seasons : public SeasonsBase
{
public:
    void Change() override
    {
        switch (s)
        {
        case Winter: s = Spring;
            break;
        case Spring: s = Summer;
            break;
        case Summer: s = Autumn;
            break;
        case Autumn: s = Winter;
            break;
        }
    }
};

class ReverseSeasons : public SeasonsBase
{
public:
    void Change() override
    {
        switch (s)
        {
        case Winter: s = Autumn;
            break;
        case Autumn: s = Summer;
            break;
        case Summer: s = Spring;
            break;
        case Spring: s = Winter;
            break;
        }
    }
};

int main()
{
    return 0;
}