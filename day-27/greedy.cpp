#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class item{
   public:

   int weight;
   int profit;
   float unitProfit;
   char name;

   item(int weight, int profit, float unitProfit,char name)
   {
      this -> weight = weight;
      this -> profit = profit;
      this -> unitProfit = unitProfit;
      this -> name = name;
   }
};

bool compareItems(const item& item1, const item& item2) {
    return item1.unitProfit > item2.unitProfit;
}

int main()
{
   float total_profit = 0;
   int total_weight = 0;
   int capacity;
   int n;
   cout << "Enter no of objects: ";
   cin >> n;
   vector<char> names;
   for(int i = 0; i < n; i++)
   {
      char tmp;
      cin >> tmp;
      names.push_back(tmp);
   }
   vector<int> profit;
   cout << "Enter profit: ";
   for(int i = 0; i < n; i++)
   {
      int tmp;
      cin >> tmp;
      profit.push_back(tmp);
   }

   cout << "Enter weight: ";
   vector<int> weight;
   for(int i = 0; i < n; i++)
   {
      int tmp;
      cin >> tmp;
      total_weight = total_weight + tmp;
      weight.push_back(tmp);
   }

   vector<item> items;
   for(int i = 0; i < n; i++)
   {
      item ob(weight[i],profit[i],float(float(profit[i]) / float(weight[i])),names[i]);
      items.push_back(ob);
   }

   cout << "Enter capacity: ";
   cin >> capacity;

   vector<char> result;

   sort(items.begin(), items.end(), compareItems);

   auto pointer = items.begin();

   // for(auto i = items.begin(); i != items.end(); i++)
   // {
   //    cout << "unitprofit: " << i -> unitProfit;
   //    cout << "weight: " << i -> weight;

   // }

   while(capacity > 0)
   {
      if(pointer -> weight <= 0)
      {
         pointer++;
      }
      total_profit = total_profit + pointer -> unitProfit;
      pointer -> weight --;
      capacity --;
   }

   cout << "Total profit: " << total_profit;
   cout << endl;
   
}