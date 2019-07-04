#include <string>
#include <vector>

class Map {
	public:
	Map();
  	~Map() = default;	 
	void drawMap();
	std::vector <std::vector<std::string>>* getMap() { return &(this->vecMap2D); }
	private:
	void setMapNumbers();
	std::vector <std::vector<std::string>> vecMap2D {9, std::vector<std::string>(9, " ")}; //[field][position] 
};
