
#include <conio.h>
#include <iostream>
#include <cstdint>
using namespace std;
//-------------------------------------------------------
					/* самосто€тельна€ работа. »нициализаци€ списки */
//-------------------------------------------------------

class RGBA
{
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;
public:
public:
	RGBA(std::uint8_t red = 0, std::uint8_t green = 0, std::uint8_t blue = 0, std::uint8_t alpha = 255) :
		m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{}
	void print()
	{
		cout << " red: " << static_cast <int>(m_red) << " green: " << static_cast <int>(m_green) << " blue: " << static_cast <int>(m_blue) << " alpha; " << static_cast <int>(m_alpha) << endl;
	}
};

int main()
{

	RGBA collor(0,135,135);
	collor.print();
	return 0;
}
