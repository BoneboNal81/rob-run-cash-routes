// stats.cpp — part of rob-run-cash-routes.

#include "robruncashroutes/stats.h"

#include <cstdio>

namespace robruncashroutes {

Stats::Stats(const std::string& config_path)
    : config_path_(config_path) {}

void Stats::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Stats::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-cash-routes] stats: run\n");
    // core logic lives here
    return true;
}

}  // namespace robruncashroutes
