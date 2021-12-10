#ifndef EXTERN_HPP_
#define EXTERN_HPP_

#define import(name) __attribute__((import_module("env"), import_name(name)))

extern "C"
{

    import("_init_context") int _init_context(void);

    import("_sleep") int _sleep(int milisec);

    import("_create_node") int _create_node(const char *node_name,
                                            const char *namespace_);
                                            
    import("_create_publisher") int _create_publisher(int node_id,
                                                      const char *topic_name, int type);

    import("_publish_std_msgs_msg_String") int _publish_std_msgs_msg_String(int node_id, int publish_id, const char *data);
}
#endif // EXTERN_HPP_