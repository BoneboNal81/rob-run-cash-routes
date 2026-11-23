// routes — part of rob-run-cash-routes.

#pragma once

#include <string>
#include <vector>

namespace robruncashroutes {

class Routes {
public:
    explicit Routes(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace robruncashroutes
