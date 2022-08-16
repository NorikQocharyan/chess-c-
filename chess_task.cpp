#include <iostream>
#include <conio.h>


class chess
{
public:
	void play()
	{
		bool end = true;
		std::string move;
		while (end)
		{
			print_board();
			std::cout << "Enter cordinates (enter E for exit)" << std::endl;
			std::cout << "_";
			std::cin >> move;
			if (move == "E")
			{
				end = false;
			}
			else
			{
				move_figure(move);
			}
		}
		
	}


private:

	std::string figures[8][8] =
	{
		{"RR","NN","BB","QQ","KK","BB","NN","RR"},
		{"PP","PP","PP","PP","PP","PP","PP","PP"},
		{"  ","  ","  ","  ","  ","  ","  ","  "},
		{"  ","  ","  ","  ","  ","  ","  ","  "},
		{"  ","  ","  ","  ","  ","  ","  ","  "},
		{"  ","  ","  ","  ","  ","  ","  ","  "},
		{"pp","pp","pp","pp","pp","pp","pp","pp"},
		{"rr","nn","bb","qq","kk","bb","nn","rr"}
	};

	void print_board()
	{
		std::cout << "      #A    #B    #C    #D    #E    #F    #G    #H" << std::endl;
		std::cout << std::endl;
		print_ranks_black(0);
		print_ranks_white(1);
		print_ranks_black(2);
		print_ranks_white(3);
		print_ranks_black(4);
		print_ranks_white(5);
		print_ranks_black(6);
		print_ranks_white(7);
	}

	void print_ranks_white(int i)
	{
		print_line_black();

		std::cout << "#" << 8-i << "  ";
		std::cout << (char)176 << (char)176;
		if (figures[i][0] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][0];
		}
		std::cout << (char)176 << (char)176;

		std::cout << (char)219 << (char)219;
		if (figures[i][1] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][1];
		}
		std::cout << (char)219 << (char)219;

		std::cout << (char)176 << (char)176;
		if (figures[i][2] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][2];
		}
		std::cout << (char)176 << (char)176;

		std::cout << (char)219 << (char)219;
		if (figures[i][3] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][3];
		}
		std::cout << (char)219 << (char)219;

		std::cout << (char)176 << (char)176;
		if (figures[i][4] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][4];
		}
		std::cout << (char)176 << (char)176;

		std::cout << (char)219 << (char)219;
		if (figures[i][5] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][5];
		}
		std::cout << (char)219 << (char)219;

		std::cout << (char)176 << (char)176;
		if (figures[i][6] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][6];
		}
		std::cout << (char)176 << (char)176;

		std::cout << (char)219 << (char)219;
		if (figures[i][7] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][7];
		}
		std::cout << (char)219 << (char)219;

		std::cout << std::endl;
		print_line_black();
	}
	void print_ranks_black(int i)
	{
		print_line_white();

		std::cout << "#" << 8-i << "  ";
		std::cout << (char)219 << (char)219;
		if (figures[i][0] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][0];
		}
		std::cout << (char)219 << (char)219;
		
		std::cout << (char)176 << (char)176;
		if (figures[i][1] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][1];
		}
		std::cout << (char)176 << (char)176;

		std::cout << (char)219 << (char)219;
		if (figures[i][2] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][2];
		}
		std::cout << (char)219 << (char)219;

		std::cout << (char)176 << (char)176;
		if (figures[i][3] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][3];
		}
		std::cout << (char)176 << (char)176;

		std::cout << (char)219 << (char)219;
		if (figures[i][4] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][4];
		}
		std::cout << (char)219 << (char)219;

		std::cout << (char)176 << (char)176;
		if (figures[i][5] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][5];
		}
		std::cout << (char)176 << (char)176;

		std::cout << (char)219 << (char)219;
		if (figures[i][6] == "  ")
		{
			std::cout << (char)219 << (char)219;
		}
		else
		{
			std::cout << figures[i][6];
		}
		std::cout << (char)219 << (char)219;

		std::cout << (char)176 << (char)176;
		if (figures[i][7] == "  ")
		{
			std::cout << (char)176 << (char)176;
		}
		else
		{
			std::cout << figures[i][7];
		}
		std::cout << (char)176 << (char)176;

		std::cout << std::endl;

		print_line_white();

	}

	void print_line_white()
	{
		std::cout << "    " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << std::endl;
	}
	void print_line_black()
	{
		std::cout << "    " << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)176 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << std::endl;
	}

	bool syntax_checker(std::string coordinates)
	{
		if (coordinates[0] >= 'A' && coordinates[0] <= 'H')
		{
		}
		else
		{
			std::cout << "Error:Initial files entered incorrectly" << std::endl;
			return false;
		}
		//initial
		if (coordinates[1] >= '0' && coordinates[1] <= '8')
		{
		}
		else
		{
			std::cout << "Error:Initial ranks entered incorrectly" << std::endl;
			return false;
		}
		//->
		if (coordinates[2] != '-' || coordinates[3] != '>')
		{
			std::cout << "Error:Syntax error" << std::endl;
			return false;
		}
		//->
		if (coordinates[4] >= 'A' && coordinates[4] <= 'H')
		{
		}
		else
		{
			std::cout << "Error:Final files entered incorrectly" << std::endl;
			return false;
		}
		//final
		if (coordinates[5] >= '0' && coordinates[5] <= '8')
		{
		}
		else
		{
			std::cout << "Error:Final ranks entered incorrectly" << std::endl;
			return false;
		}
		return true;
	}
	void move_figure(std::string coordinates)
	{
		bool tmp = syntax_checker(coordinates);
		while (tmp == 0)
		{
			std::cout << "Enter again:";
			std::cin >> coordinates;
			tmp = syntax_checker(coordinates);
		}
		
		int initial_x, initial_y, final_x, final_y;

		initial_x = 8 - coordinates[1] + '0';
		initial_y = coordinates[0] - 'A';	
		final_x = 8 - coordinates[5] + '0';
		final_y = coordinates[4] - 'A';

		if (figures[initial_x][initial_y] == "PP")
		{
			if (initial_x == 1)
			{
				if ((final_x == 2 || final_x == 3) && final_y == initial_y && figures[final_x][final_y] == "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else if ((final_y == initial_y + 1 || final_y == initial_y - 1) && final_x == initial_x + 1 && figures[final_x][final_y] != "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else
				{
					std::cout << "error";
				}
			}
			else
			{
				if (final_x == initial_x + 1 && final_y == initial_y && figures[final_x][final_y] == "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else if ((final_y == initial_y + 1 || final_y == initial_y - 1) && final_x == initial_x + 1 && figures[final_x][final_y] != "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else
				{
					std::cout << "error";
				}
			}
			if (initial_x == 7)
			{
				std::string tmp;
				std::cout << "Choose which piece you want to exchange the pawn for:";
				std::cin >> tmp;
				if (tmp == "RR" || tmp == "NN" || tmp == "BB" || tmp == "QQ")
				{
					figures[initial_x][initial_y] = tmp;
				}
			}
		}
		else if (figures[initial_x][initial_y] == "pp")
		{
			if (initial_x == 6)
			{
				if ((final_x == 5 || final_x == 4) && final_y == initial_y && figures[final_x][final_y] == "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else if ((final_y == initial_y + 1 || final_y == initial_y - 1) && final_x == initial_x - 1 && figures[final_x][final_y] != "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else
				{
					std::cout << "error";
				}
			}
			else
			{
				if (final_x == initial_x - 1 && final_y == initial_y && figures[final_x][final_y] == "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else if ((final_y == initial_y + 1 || final_y == initial_y - 1) && final_x == initial_x - 1 && figures[final_x][final_y] != "  ")
				{
					figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
				}
				else
				{
					std::cout << "error";
				}
			}
			if (initial_x == 0)
			{
				std::string tmp;
				std::cout << "Choose which piece you want to exchange the pawn for:";
				std::cin >> tmp;
				if (tmp == "RR" || tmp == "NN" || tmp == "BB" || tmp == "QQ")
				{
					figures[final_x][final_y] = tmp;
				}
			}
		}
		else if (figures[initial_x][initial_y] == "NN" || figures[initial_x][initial_y] == "nn")
		{
			if (((final_y == initial_y + 2 || final_y == initial_y - 2) && (final_x == initial_x + 1 || final_x == initial_x -1))||((final_x == initial_x + 2 || final_x == initial_x - 2) && (final_y == initial_y + 1 || final_y == initial_y - 1)))
			{
				figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
			}
			else
			{
				std::cout << "error";
			}
		}
		else if (figures[initial_x][initial_y] == "BB" || figures[initial_x][initial_y] == "bb")
		{
			if (final_x - initial_x == final_y - initial_y || final_x - initial_x == -(final_y - initial_y))
			{
				figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
			}
			else
			{
				std::cout << "error";
			}
		}
		else if (figures[initial_x][initial_y] == "RR" || figures[initial_x][initial_y] == "rr")
		{
			if (initial_x == final_x || initial_y == final_y)
			{
				figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
			}
			else
			{
				std::cout << "error";
			}
		}
		else if (figures[initial_x][initial_y] == "QQ" || figures[initial_x][initial_y] == "qq")
		{
			if (initial_x == final_x || initial_y == final_y)
			{
				figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
			}
			else if (final_x - initial_x == final_y - initial_y || final_x - initial_x == -(final_y - initial_y))
			{
				figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
			}
			else
			{
				std::cout << "error";
			}
		}
		else if (figures[initial_x][initial_y] == "KK" || figures[initial_x][initial_y] == "kk")
		{
			if ((final_x - initial_x == 0 || final_x - initial_x == 1 || final_x - initial_x == -1) && (final_y - initial_y == 0 || final_y - initial_y == 1 || final_y - initial_y == -1))
			{
				figures[final_x][final_y] = figures[initial_x][initial_y]; figures[initial_x][initial_y] = "  ";
			}
			else
			{
				std::cout << "error";
			}
		}		
	}
};

int main()
{

	chess obj;
	//obj.print_board();
	obj.play();
}