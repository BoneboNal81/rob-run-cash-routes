// tracker.cpp — part of rob-run-cash-routes.

#include "robruncashroutes/tracker.h"

#include <cstdio>

namespace robruncashroutes {

Tracker::Tracker(const std::string& config_path)
    : config_path_(config_path) {}

void Tracker::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tracker::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-cash-routes] tracker: run\n");
    // core logic lives here
    return true;
}

}  // namespace robruncashroutes
