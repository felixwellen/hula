#include <vector>
#include <string>

class name
{
public:
  name() = default;
  explicit name(std::string const& str);

  std::string snake_cased() const;
  std::string camel_cased() const;
  std::string dromedary_cased() const;

private:
  std::vector<std::string> parts_;
};