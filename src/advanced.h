// generated by Fast Light User Interface Designer (fluid) version 1.0104

#ifndef advanced_h
#define advanced_h
#include <FL/Fl.H>
#include <FL/Fl_Preferences.h>
#include <string>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Round_Button.H>

class Advanced {
public:
  Advanced();
private:
  Fl_Double_Window *main_window;
  Fl_Browser *page_list;
  inline void cb_page_list_i(Fl_Browser*, void*);
  static void cb_page_list(Fl_Browser*, void*);
  Fl_Button *button[2];
  Fl_Choice *control;
  static Fl_Menu_Item menu_control[];
  Fl_Input *lang;
  Fl_Input *browser;
  inline void cb__i(Fl_Button*, void*);
  static void cb_(Fl_Button*, void*);
  Fl_Input *config;
public:
  Fl_Output *fg_exe_;
  Fl_Output *fg_root_;
  Fl_Output *fg_scenery_;
  Fl_Output *airport_;
  Fl_Output *runway_;
  Fl_Output *aircraft_;
private:
  Fl_Check_Button *game_mode;
  Fl_Check_Button *splash_screen;
  Fl_Check_Button *intro_music;
  Fl_Check_Button *mouse_pointer;
  Fl_Check_Button *random_objects;
  Fl_Check_Button *panel;
  Fl_Check_Button *sound;
  Fl_Check_Button *hud;
  inline void cb_hud_i(Fl_Check_Button*, void*);
  static void cb_hud(Fl_Check_Button*, void*);
  Fl_Check_Button *antialias_hud;
  Fl_Check_Button *auto_coordination;
  Fl_Check_Button *horizon_effect;
  Fl_Check_Button *enhanced_lighting;
  Fl_Check_Button *distance_attenuation;
  Fl_Check_Button *hud_3d;
  Fl_Check_Button *specular_highlight;
  Fl_Check_Button *failure;
  inline void cb_failure_i(Fl_Check_Button*, void*);
  static void cb_failure(Fl_Check_Button*, void*);
  Fl_Check_Button *failure_pitot;
  Fl_Check_Button *failure_static;
  Fl_Check_Button *failure_system;
  Fl_Check_Button *failure_vacuum;
  Fl_Choice *fdm;
  inline void cb_fdm_i(Fl_Choice*, void*);
  static void cb_fdm(Fl_Choice*, void*);
  static Fl_Menu_Item menu_fdm[];
  Fl_Check_Button *notrim;
  Fl_Value_Input *model_hz;
  Fl_Value_Input *speed;
  Fl_Round_Button *on_ground;
  Fl_Round_Button *in_air;
  Fl_Input *wind;
  Fl_Value_Input *turbulence;
  Fl_Input *ceiling;
  Fl_Check_Button *freeze;
  Fl_Check_Button *fuel_freeze;
  Fl_Check_Button *clock_freeze;
  Fl_Input *lon;
  Fl_Input *lat;
  Fl_Input *altitude;
  Fl_Input *vc;
  Fl_Input *uBody;
  Fl_Input *vBody;
  Fl_Input *wBody;
  Fl_Value_Input *heading;
  Fl_Value_Input *roll;
public:
  Fl_Value_Input *pitch;
private:
  Fl_Input *vor;
  Fl_Input *ndb;
  Fl_Input *fix;
  Fl_Input *offset_distance;
  Fl_Input *offset_azimuth;
  Fl_Input *glideslope;
  Fl_Input *roc;
  Fl_Check_Button *clouds;
  Fl_Check_Button *clouds3d;
  Fl_Check_Button *fullscreen;
  Fl_Check_Button *skyblend;
  Fl_Check_Button *textures;
  Fl_Check_Button *wireframe;
  Fl_Round_Button *shading_smooth;
  Fl_Round_Button *shading_flat;
  Fl_Round_Button *fog_disabled;
  Fl_Round_Button *fog_fastest;
  Fl_Round_Button *fog_nicest;
  Fl_Input *geometry;
  Fl_Input *visibility;
  Fl_Round_Button *vis_meters;
  Fl_Round_Button *vis_miles;
  Fl_Input *view_offset;
  Fl_Choice *bpp;
  static Fl_Menu_Item menu_bpp[];
  Fl_Value_Input *fov;
  Fl_Round_Button *time_match_real;
  inline void cb_time_match_real_i(Fl_Round_Button*, void*);
  static void cb_time_match_real(Fl_Round_Button*, void*);
  Fl_Round_Button *time_match_local;
  inline void cb_time_match_local_i(Fl_Round_Button*, void*);
  static void cb_time_match_local(Fl_Round_Button*, void*);
  Fl_Round_Button *start_date_sys;
  inline void cb_start_date_sys_i(Fl_Round_Button*, void*);
  static void cb_start_date_sys(Fl_Round_Button*, void*);
  Fl_Round_Button *start_date_gmt;
  inline void cb_start_date_gmt_i(Fl_Round_Button*, void*);
  static void cb_start_date_gmt(Fl_Round_Button*, void*);
  Fl_Round_Button *start_date_lat;
  inline void cb_start_date_lat_i(Fl_Round_Button*, void*);
  static void cb_start_date_lat(Fl_Round_Button*, void*);
  Fl_Input *time_offset_value;
  Fl_Input *start_date_sys_value;
  inline void cb_start_date_sys_value_i(Fl_Input*, void*);
  static void cb_start_date_sys_value(Fl_Input*, void*);
  Fl_Input *start_date_gmt_value;
  inline void cb_start_date_gmt_value_i(Fl_Input*, void*);
  static void cb_start_date_gmt_value(Fl_Input*, void*);
  Fl_Input *start_date_lat_value;
  inline void cb_start_date_lat_value_i(Fl_Input*, void*);
  static void cb_start_date_lat_value(Fl_Input*, void*);
  Fl_Round_Button *time_of_day;
  inline void cb_time_of_day_i(Fl_Round_Button*, void*);
  static void cb_time_of_day(Fl_Round_Button*, void*);
  Fl_Choice *time_of_day_value;
  static Fl_Menu_Item menu_time_of_day_value[];
  Fl_Check_Button *httpd;
  inline void cb_httpd_i(Fl_Check_Button*, void*);
  static void cb_httpd(Fl_Check_Button*, void*);
  Fl_Value_Input *httpd_port;
  Fl_Check_Button *props;
  inline void cb_props_i(Fl_Check_Button*, void*);
  static void cb_props(Fl_Check_Button*, void*);
  Fl_Value_Input *props_port;
  Fl_Check_Button *jpg_httpd;
  inline void cb_jpg_httpd_i(Fl_Check_Button*, void*);
  static void cb_jpg_httpd(Fl_Check_Button*, void*);
  Fl_Value_Input *jpg_httpd_port;
  Fl_Input *callsign;
  Fl_Browser *io_list;
  inline void cb_io_list_i(Fl_Browser*, void*);
  static void cb_io_list(Fl_Browser*, void*);
  Fl_Button *io_new;
  inline void cb_io_new_i(Fl_Button*, void*);
  static void cb_io_new(Fl_Button*, void*);
  Fl_Button *io_delete;
  inline void cb_io_delete_i(Fl_Button*, void*);
  static void cb_io_delete(Fl_Button*, void*);
  Fl_Choice *io_protocol;
  inline void cb_io_protocol_i(Fl_Choice*, void*);
  static void cb_io_protocol(Fl_Choice*, void*);
  static Fl_Menu_Item menu_io_protocol[];
  Fl_Choice *io_medium;
  inline void cb_io_medium_i(Fl_Choice*, void*);
  static void cb_io_medium(Fl_Choice*, void*);
  static Fl_Menu_Item menu_io_medium[];
  Fl_Choice *io_dir;
  inline void cb_io_dir_i(Fl_Choice*, void*);
  static void cb_io_dir(Fl_Choice*, void*);
  static Fl_Menu_Item menu_io_dir[];
  Fl_Value_Input *io_hz;
  inline void cb_io_hz_i(Fl_Value_Input*, void*);
  static void cb_io_hz(Fl_Value_Input*, void*);
  Fl_Group *file_group;
  Fl_Input *io_file_name;
  inline void cb_io_file_name_i(Fl_Input*, void*);
  static void cb_io_file_name(Fl_Input*, void*);
  inline void cb_1_i(Fl_Button*, void*);
  static void cb_1(Fl_Button*, void*);
  Fl_Group *serial_group;
  Fl_Input *serial_port;
  inline void cb_serial_port_i(Fl_Input*, void*);
  static void cb_serial_port(Fl_Input*, void*);
  Fl_Input *serial_baud_rate;
  inline void cb_serial_baud_rate_i(Fl_Input*, void*);
  static void cb_serial_baud_rate(Fl_Input*, void*);
  Fl_Group *socket_group;
  Fl_Input *socket_host;
  inline void cb_socket_host_i(Fl_Input*, void*);
  static void cb_socket_host(Fl_Input*, void*);
  Fl_Value_Input *socket_port;
  inline void cb_socket_port_i(Fl_Value_Input*, void*);
  static void cb_socket_port(Fl_Value_Input*, void*);
  Fl_Round_Button *socket_tcp;
  inline void cb_socket_tcp_i(Fl_Round_Button*, void*);
  static void cb_socket_tcp(Fl_Round_Button*, void*);
  Fl_Round_Button *socket_udp;
  inline void cb_socket_udp_i(Fl_Round_Button*, void*);
  static void cb_socket_udp(Fl_Round_Button*, void*);
  Fl_Group *generic_group;
  Fl_Input *io_generic_file;
  inline void cb_io_generic_file_i(Fl_Input*, void*);
  static void cb_io_generic_file(Fl_Input*, void*);
  inline void cb_2_i(Fl_Button*, void*);
  static void cb_2(Fl_Button*, void*);
  Fl_Input *nav1;
  Fl_Input *nav2;
  Fl_Input *adf;
  Fl_Group *dme_group;
  Fl_Round_Button *dme_nav1;
  inline void cb_dme_nav1_i(Fl_Round_Button*, void*);
  static void cb_dme_nav1(Fl_Round_Button*, void*);
  Fl_Round_Button *dme_nav2;
  inline void cb_dme_nav2_i(Fl_Round_Button*, void*);
  static void cb_dme_nav2(Fl_Round_Button*, void*);
  Fl_Round_Button *dme_int;
  inline void cb_dme_int_i(Fl_Round_Button*, void*);
  static void cb_dme_int(Fl_Round_Button*, void*);
  Fl_Input *dme_int_freq;
  Fl_Check_Button *dme;
  inline void cb_dme_i(Fl_Check_Button*, void*);
  static void cb_dme(Fl_Check_Button*, void*);
  Fl_Browser *prop_list;
  inline void cb_prop_list_i(Fl_Browser*, void*);
  static void cb_prop_list(Fl_Browser*, void*);
  Fl_Button *prop_delete;
  inline void cb_prop_delete_i(Fl_Button*, void*);
  static void cb_prop_delete(Fl_Button*, void*);
  Fl_Input *prop_input;
  inline void cb_prop_input_i(Fl_Input*, void*);
  static void cb_prop_input(Fl_Input*, void*);
  inline void cb_New_i(Fl_Button*, void*);
  static void cb_New(Fl_Button*, void*);
  Fl_Choice *log_level;
  static Fl_Menu_Item menu_log_level[];
  Fl_Browser *trace_read_list;
  inline void cb_trace_read_list_i(Fl_Browser*, void*);
  static void cb_trace_read_list(Fl_Browser*, void*);
  Fl_Input *trace_read_input;
  inline void cb_trace_read_input_i(Fl_Input*, void*);
  static void cb_trace_read_input(Fl_Input*, void*);
  inline void cb_New1_i(Fl_Button*, void*);
  static void cb_New1(Fl_Button*, void*);
  Fl_Button *trace_read_delete;
  inline void cb_trace_read_delete_i(Fl_Button*, void*);
  static void cb_trace_read_delete(Fl_Button*, void*);
  Fl_Browser *trace_write_list;
  inline void cb_trace_write_list_i(Fl_Browser*, void*);
  static void cb_trace_write_list(Fl_Browser*, void*);
  Fl_Input *trace_write_input;
  inline void cb_trace_write_input_i(Fl_Input*, void*);
  static void cb_trace_write_input(Fl_Input*, void*);
  inline void cb_New2_i(Fl_Button*, void*);
  static void cb_New2(Fl_Button*, void*);
  Fl_Button *trace_write_delete;
  inline void cb_trace_write_delete_i(Fl_Button*, void*);
  static void cb_trace_write_delete(Fl_Button*, void*);
  Fl_Group *page[13];
public:
  Fl_Browser *env_list;
private:
  inline void cb_env_list_i(Fl_Browser*, void*);
  static void cb_env_list(Fl_Browser*, void*);
  inline void cb_New3_i(Fl_Button*, void*);
  static void cb_New3(Fl_Button*, void*);
  Fl_Button *env_delete;
  inline void cb_env_delete_i(Fl_Button*, void*);
  static void cb_env_delete(Fl_Button*, void*);
  Fl_Input *env_input;
  inline void cb_env_input_i(Fl_Input*, void*);
  static void cb_env_input(Fl_Input*, void*);
public:
  ~Advanced();
  int exec(Fl_Preferences&);
private:
  void init();
  void io_list_select_cb( Fl_Browser* );
  void io_list_new_cb();
  void io_list_update_cb();
  void io_medium_update_cb( Fl_Choice* );
  void io_protocol_update_cb();
  void show_page( unsigned int n );
  void list_new_cb( Fl_Browser*, Fl_Input*, Fl_Button*);
  void list_delete_cb(Fl_Browser*,Fl_Input*,Fl_Button*);
  void list_select_cb(Fl_Browser*,Fl_Input*,Fl_Button*);
  void list_update_cb(Fl_Browser*,Fl_Input*);
  void io_file_cb();
  void io_generic_file_cb();
  void fg_browser_cb();
  void load_settings(Fl_Preferences&);
  void save_settings(Fl_Preferences&);
};
#endif
