/// HEADER
#include <path_follower/local_planner/local_planner_bfs_reconf.h>

/// PROJECT
#include <path_follower/pathfollower.h>

LocalPlannerBFSReconf::LocalPlannerBFSReconf(PathFollower &follower,
                                       tf::Transformer& transformer,
                                       const ros::Duration& update_interval)
    : LocalPlannerClassic(follower, transformer, update_interval),
      LocalPlannerBFS(follower, transformer, update_interval),
      LocalPlannerReconf(follower, transformer, update_interval)
{

}

void LocalPlannerBFSReconf::evaluate(double& current_p, LNode*& succ, double& dis2last,
              const std::vector<Scorer::Ptr>& scorer,
              const std::vector<double>& wscorer){
    (void) current_p;
    (void) succ;
    (void) dis2last;
    (void) scorer;
    (void) wscorer;
}
