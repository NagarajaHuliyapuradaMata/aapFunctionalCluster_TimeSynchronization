load(
      "@rules_cc//cc:defs.bzl"
   ,  "cc_library"
)

cc_library(
      name       = "aapFunctionalCluster_TimeSynchronization"
   ,  srcs       = ["aapFunctionalCluster_TimeSynchronization.cpp"]
#  ,  deps       = ["//repo_projects/pProjectFull/main_LATEST/source/SwcServiceEcuM:SwcServiceEcuM"]
   ,  hdrs       = [
            "interface_TimeSynchronization_OffsetTimeBaseProvider.hpp"
         ,  "interface_TimeSynchronization_SynchronizedTimeBaseConsumer.hpp"
         ,  "interface_TimeSynchronization_SynchronizedTimeBaseProvider.hpp"
         ,  "interface_TimeSynchronization_SynchronizedTimeBaseStatus.hpp"
      ]
   ,  includes   = ["."]
   ,  visibility = ["//visibility:public"]
)

