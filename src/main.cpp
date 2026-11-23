// main.cpp — entry point. Wires config and subsystems together.

#include "robruncashroutes/settings.h"
#include "robruncashroutes/routes.h"
#include "robruncashroutes/tracker.h"
#include "robruncashroutes/stats.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robruncashroutes::Settings settings = robruncashroutes::Settings::load_default();
    robruncashroutes::Routes routes(settings.store_path);
    robruncashroutes::Tracker tracker(settings.store_path);
    robruncashroutes::Stats stats(settings.store_path);
    std::fprintf(stderr, "[rob-run-cash-routes] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
