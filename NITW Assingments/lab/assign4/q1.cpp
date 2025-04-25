#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int countwords(string &s)
{
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ' && i != 0)
    {
      count++;
    }
  }
  return count;
}

int countletters(string &s)
{
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != ' ')
      count++;
  }
  return count;
}

vector<string> names(string &s, char c)
{
  vector<string> ans;
  string word = "";
  char C;
  if (c >= 'a' && c <= 'z')
    C = c - 32;
  if (c >= 'A' && c <= 'Z')
    C = c + 32;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != ' ' && i != 0 && s[i - 1] == ' ' && (s[i] == c || s[i] == C))
    {
      int ind = i;
      while (s[ind] != ' ')
      {
        word += s[ind];
        ind++;
      }
    }
    else
    {
      ans.push_back(word);
      word = "";
    }
  }
  ans.push_back(word);
  return ans;
}

vector<long long> getnum(string &s)
{
  vector<long long> ans;
  long long value = 0;
  bool found = false;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      value = value * 10 + (s[i] - '0');
      found = true;
    }
    else
    {
      if (found)
      {
        ans.push_back(value);
        value = 0;
        found = false;
      }
    }
  }

  if (found)
  {
    ans.push_back(value);
  }

  return ans;
}

template <typename T>
void print(vector<T> &collection)
{
  for (int i = 0; i < collection.size(); i++)
  {
    cout << collection[i] << " ";
  }
  cout << endl;
}

vector<string> extractNames(string &s)
{
  vector<string> names;
  string word = "";

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
    {
      word = "";
      while (i < s.length() && s[i] != ' ')
      {
        word += s[i];
        i++;
      }

      bool containsNumericOrAt = false;
      for (char c : word)
      {
        if (isdigit(c) || c == '@')
        {
          containsNumericOrAt = true;
          break;
        }
      }

      if (!containsNumericOrAt)
      {
        names.push_back(word);
      }
    }
  }
  return names;
}

template <typename T>
void sortCollection(vector<T> &collection)
{
  int n = collection.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (collection[j] > collection[j + 1])
      {
        swap(collection[j], collection[j + 1]);
      }
    }
  }
}

int main()
{
  string data = "";
  string line;
  int letters, lines, words;
  letters = lines = words = 0;

  ifstream in("file.txt");

  if (!in)
  {
    cerr << "Error opening file!" << endl;
    return 1;
  }

  while (getline(in, line))
  {
    data += line + ' ';
    lines++;
  }

  words = countwords(data);
  letters = countletters(data);

  in.clear();
  in.seekg(0, ios::beg);
  cout << "The input file is: ";
  while (getline(in, line))
  {
    cout << line << endl;
  }

  cout << endl
       << "Total number of lines in the file: " << lines << endl;
  cout << "Total number of words in the file: " << words << endl;
  cout << "Total number of letters in the file: " << letters << endl;

  char c;
  cout << "Enter the first letter of the words you want: ";
  cin >> c;

  vector<string> collection = names(data, c);

  cout << "All the words starting with the character " << c << " are: ";
  print(collection);

  vector<long long> num = getnum(data);
  cout << endl
       << "Collecting only numeric values: ";
  print(num);

  cout << "Length of the vector is: " << num.size() << endl;
  cout << "Deleting last element: ";
  num.pop_back();
  print(num);
  cout << "Inserting last element: ";
  num.push_back(7044897761);
  print(num);

  cout << "Sorting numbers: ";
  sortCollection(num);
  print(num);

  cout << "Is the vector holding the numeric values empty? " << num.empty() << endl;

  int index;
  cout << "Enter any valid index to get the value at that index: ";
  cin >> index;
  cout << num.at(index) << endl;

  vector<long long> other = num;
  cout << "The other vector is: ";
  print(other);

  other.erase(other.begin(), other.end());
  print(other);

  vector<string> names = extractNames(data);
  cout << "Extracted names: ";
  print(names);

  cout << "Sorting names: ";
  sortCollection(names);
  print(names);

  return 0;
}
