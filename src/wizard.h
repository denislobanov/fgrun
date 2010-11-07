// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef wizard_h
#define wizard_h
#include <FL/Fl.H>
#include <string>
#include <iostream>
#include <FL/Fl_Preferences.H>
#include <FL/Fl_Pixmap.H>
#include <OpenThreads/Thread>
class LogWindow;
class Advanced;
using std::string;
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Wizard.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Help_View.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Tile.H>
#include "Fl_OSG.h"
#include "AirportBrowser.h"
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Value_Input.H>

class Wizard {

class FlightGearThread : public OpenThreads::Thread {
public:
  FlightGearThread( Wizard *w ); 
  void setViewer(bool v); 
  void run(); 
private:
  Wizard *wizard; 
  bool viewer; 
  FlightGearThread(); 
  FlightGearThread( const FlightGearThread &); 
  FlightGearThread &operator=( const FlightGearThread &); 
};

class TerraSyncThread : public OpenThreads::Thread {
public:
  TerraSyncThread( Wizard *w ); 
  void run(); 
private:
  Wizard *wizard; 
  TerraSyncThread(); 
  TerraSyncThread( const TerraSyncThread & ); 
  TerraSyncThread &operator=( const TerraSyncThread & ); 
};
public:
  Wizard() ;
private:
  Fl_Double_Window *win;
  Fl_Wizard *wiz;
  Fl_Help_View *about_;
  Fl_Input *fg_exe_;
  void cb_fg_exe__i(Fl_Input*, void*);
  static void cb_fg_exe_(Fl_Input*, void*);
  void cb__i(Fl_Button*, void*);
  static void cb_(Fl_Button*, void*);
  Fl_Input *fg_root_;
  void cb_fg_root__i(Fl_Input*, void*);
  static void cb_fg_root_(Fl_Input*, void*);
  void cb_1_i(Fl_Button*, void*);
  static void cb_1(Fl_Button*, void*);
  Fl_Browser *aircraft_dir_list_;
  void cb_aircraft_dir_list__i(Fl_Browser*, void*);
  static void cb_aircraft_dir_list_(Fl_Browser*, void*);
  void cb_Add_i(Fl_Button*, void*);
  static void cb_Add(Fl_Button*, void*);
  Fl_Button *aircraft_dir_delete_;
  void cb_aircraft_dir_delete__i(Fl_Button*, void*);
  static void cb_aircraft_dir_delete_(Fl_Button*, void*);
  Fl_Browser *scenery_dir_list_;
  void cb_scenery_dir_list__i(Fl_Browser*, void*);
  static void cb_scenery_dir_list_(Fl_Browser*, void*);
  void cb_Add1_i(Fl_Button*, void*);
  static void cb_Add1(Fl_Button*, void*);
  Fl_Button *scenery_dir_delete_;
  void cb_scenery_dir_delete__i(Fl_Button*, void*);
  static void cb_scenery_dir_delete_(Fl_Button*, void*);
  void cb_TerraSync_i(Fl_Button*, void*);
  static void cb_TerraSync(Fl_Button*, void*);
  Fl_Button *scenery_dir_up_;
  void cb_scenery_dir_up__i(Fl_Button*, void*);
  static void cb_scenery_dir_up_(Fl_Button*, void*);
  Fl_Button *scenery_dir_down_;
  void cb_scenery_dir_down__i(Fl_Button*, void*);
  static void cb_scenery_dir_down_(Fl_Button*, void*);
  Fl_Button *cache_delete_;
  void cb_cache_delete__i(Fl_Button*, void*);
  static void cb_cache_delete_(Fl_Button*, void*);
  Fl_Output *cache_file_;
  Fl_Input *ts_exe_;
  void cb_ts_exe__i(Fl_Input*, void*);
  static void cb_ts_exe_(Fl_Input*, void*);
  void cb_2_i(Fl_Button*, void*);
  static void cb_2(Fl_Button*, void*);
  Fl_Browser *aircraft;
  void cb_aircraft_i(Fl_Browser*, void*);
  static void cb_aircraft(Fl_Browser*, void*);
  Fl_OSG *preview;
public:
  Fl_Output *aircraft_status;
  Fl_Output *aircraft_author;
  Fl_Button *start_viewer;
private:
  void cb_start_viewer_i(Fl_Button*, void*);
  static void cb_start_viewer(Fl_Button*, void*);
  AirportBrowser *airports_;
public:
  Fl_Group *carrier_group;
  Fl_Input *carrier_;
  Fl_Input *parkpos_;
private:
  void cb_Scenery_i(Fl_Button*, void*);
  static void cb_Scenery(Fl_Button*, void*);
  void cb_Advanced_i(Fl_Button*, void*);
  static void cb_Advanced(Fl_Button*, void*);
  Fl_Check_Button *show_cmd_line;
  void cb_show_cmd_line_i(Fl_Check_Button*, void*);
  static void cb_show_cmd_line(Fl_Check_Button*, void*);
  Fl_Text_Display *text;
  Fl_Choice *resolution;
  void cb_resolution_i(Fl_Choice*, void*);
  static void cb_resolution(Fl_Choice*, void*);
  static Fl_Menu_Item menu_resolution[];
  Fl_Check_Button *game_mode;
  void cb_game_mode_i(Fl_Check_Button*, void*);
  static void cb_game_mode(Fl_Check_Button*, void*);
  Fl_Check_Button *horizon_effect;
  void cb_horizon_effect_i(Fl_Check_Button*, void*);
  static void cb_horizon_effect(Fl_Check_Button*, void*);
  Fl_Check_Button *enhanced_lighting;
  void cb_enhanced_lighting_i(Fl_Check_Button*, void*);
  static void cb_enhanced_lighting(Fl_Check_Button*, void*);
  Fl_Check_Button *specular_highlight;
  void cb_specular_highlight_i(Fl_Check_Button*, void*);
  static void cb_specular_highlight(Fl_Check_Button*, void*);
  Fl_Check_Button *frame_rate_limiter;
  void cb_frame_rate_limiter_i(Fl_Check_Button*, void*);
  static void cb_frame_rate_limiter(Fl_Check_Button*, void*);
  Fl_Value_Input *frame_rate_limiter_value;
  void cb_frame_rate_limiter_value_i(Fl_Value_Input*, void*);
  static void cb_frame_rate_limiter_value(Fl_Value_Input*, void*);
  Fl_Check_Button *clouds_3d;
  void cb_clouds_3d_i(Fl_Check_Button*, void*);
  static void cb_clouds_3d(Fl_Check_Button*, void*);
public:
  Fl_Choice *bpp;
private:
  void cb_bpp_i(Fl_Choice*, void*);
  static void cb_bpp(Fl_Choice*, void*);
  static Fl_Menu_Item menu_bpp[];
  Fl_Check_Button *random_objects;
  void cb_random_objects_i(Fl_Check_Button*, void*);
  static void cb_random_objects(Fl_Check_Button*, void*);
  Fl_Check_Button *random_trees;
  void cb_random_trees_i(Fl_Check_Button*, void*);
  static void cb_random_trees(Fl_Check_Button*, void*);
  Fl_Check_Button *ai_models;
  void cb_ai_models_i(Fl_Check_Button*, void*);
  static void cb_ai_models(Fl_Check_Button*, void*);
  Fl_Check_Button *time_of_day;
  void cb_time_of_day_i(Fl_Check_Button*, void*);
  static void cb_time_of_day(Fl_Check_Button*, void*);
  Fl_Choice *time_of_day_value;
  void cb_time_of_day_value_i(Fl_Choice*, void*);
  static void cb_time_of_day_value(Fl_Choice*, void*);
  Fl_Check_Button *real_weather_fetch;
  void cb_real_weather_fetch_i(Fl_Check_Button*, void*);
  static void cb_real_weather_fetch(Fl_Check_Button*, void*);
  Fl_Check_Button *auto_coordination;
  void cb_auto_coordination_i(Fl_Check_Button*, void*);
  static void cb_auto_coordination(Fl_Check_Button*, void*);
  Fl_Choice *season;
  void cb_season_i(Fl_Choice*, void*);
  static void cb_season(Fl_Choice*, void*);
public:
  Fl_Check_Button *auto_visibility;
private:
  void cb_auto_visibility_i(Fl_Check_Button*, void*);
  static void cb_auto_visibility(Fl_Check_Button*, void*);
  Fl_Browser *scenarii;
  void cb_scenarii_i(Fl_Browser*, void*);
  static void cb_scenarii(Fl_Browser*, void*);
  void cb_Deselect_i(Fl_Button*, void*);
  static void cb_Deselect(Fl_Button*, void*);
public:
  Fl_Check_Button *terrasync;
private:
  void cb_terrasync_i(Fl_Check_Button*, void*);
  static void cb_terrasync(Fl_Check_Button*, void*);
public:
  Fl_Value_Input *terrasync_port;
private:
  void cb_terrasync_port_i(Fl_Value_Input*, void*);
  static void cb_terrasync_port(Fl_Value_Input*, void*);
  Fl_Group *atlas_group;
  Fl_Check_Button *atlas;
  void cb_atlas_i(Fl_Check_Button*, void*);
  static void cb_atlas(Fl_Check_Button*, void*);
  Fl_Input *atlas_host;
  void cb_atlas_host_i(Fl_Input*, void*);
  static void cb_atlas_host(Fl_Input*, void*);
  Fl_Value_Input *atlas_port;
  void cb_atlas_port_i(Fl_Value_Input*, void*);
  static void cb_atlas_port(Fl_Value_Input*, void*);
  Fl_Group *multiplay_group;
  Fl_Check_Button *multiplay;
  void cb_multiplay_i(Fl_Check_Button*, void*);
  static void cb_multiplay(Fl_Check_Button*, void*);
  Fl_Input *multiplay_callsign;
  void cb_multiplay_callsign_i(Fl_Input*, void*);
  static void cb_multiplay_callsign(Fl_Input*, void*);
  Fl_Input *multiplay_host;
  void cb_multiplay_host_i(Fl_Input*, void*);
  static void cb_multiplay_host(Fl_Input*, void*);
  Fl_Value_Input *multiplay_in;
  void cb_multiplay_in_i(Fl_Value_Input*, void*);
  static void cb_multiplay_in(Fl_Value_Input*, void*);
  Fl_Value_Input *multiplay_out;
  void cb_multiplay_out_i(Fl_Value_Input*, void*);
  static void cb_multiplay_out(Fl_Value_Input*, void*);
public:
  Fl_Group *page[5];
private:
  Fl_Button *prev;
  void cb_prev_i(Fl_Button*, void*);
  static void cb_prev(Fl_Button*, void*);
  Fl_Button *next;
  void cb_next_i(Fl_Button*, void*);
  static void cb_next(Fl_Button*, void*);
  Fl_Button *cancel;
  void cb_cancel_i(Fl_Button*, void*);
  static void cb_cancel(Fl_Button*, void*);
public:
  Fl_Button *defaults;
private:
  void cb_defaults_i(Fl_Button*, void*);
  static void cb_defaults(Fl_Button*, void*);
  void cb_Save_i(Fl_Button*, void*);
  static void cb_Save(Fl_Button*, void*);
  void cb_Load_i(Fl_Button*, void*);
  static void cb_Load(Fl_Button*, void*);
public:
  ~Wizard(); 
  void show(); 
  void show( int argc, char* argv[] ); 
  void init( bool fullscreen ); 
  void update_preview(); 
  void preview_aircraft(); 
private:
  void reset(); 
  void aircraft_update(); 
  void aircraft_update( const char *aft ); 
  void next_cb(); 
  void prev_cb(); 
  void defaults_cb(); 
  void advanced_options_cb(); 
  void fg_exe_update_cb(); 
  void fg_exe_select_cb(); 
  void fg_root_update_cb(); 
  void fg_root_select_cb(); 
  void advanced_cb(); 
  int write_fgfsrc(); 
  static int write_fgfsrc( Fl_Preferences &prefs, std::ostream&, const char* pfx = "\n"); 
  static int write_fgviewerrc( Fl_Preferences &prefs, std::ostream& os, const char* pfx, const string &path ); 
  int run_fgfs( const std::string & ); 
  int run_ts(); 
  static void stdout_cb( int, void* ); 
  void stdout_cb( int ); 
  void cancel_cb(); 
  void delete_cache_file_cb(); 
  static void airports_cb( Fl_Widget*, void* ); 
  void airports_cb(); 
  void update_scenery_up_down(); 
  void aircraft_dir_select_cb(); 
  void aircraft_dir_add_cb(); 
  void aircraft_dir_delete_cb(); 
  void scenery_dir_select_cb(); 
  void scenery_dir_add_cb(); 
  void scenery_dir_delete_cb(); 
  void scenery_dir_up_cb(); 
  void scenery_dir_down_cb(); 
  void ts_dir_cb(); 
  void ts_exe_update_cb(); 
  void ts_exe_select_cb(); 
public:
  void refresh_airports(); 
  static void refresh_airports( Fl_Widget*, void* ); 
private:
  Fl_Preferences prefs; 
  LogWindow* logwin; 
  Fl_Pixmap folder_open_pixmap; 
  void update_options(); 
  void resolution_cb(); 
  void bpp_cb(); 
  void game_mode_cb(); 
  void horizon_effect_cb(); 
  void enhanced_lighting_cb(); 
  void specular_highlight_cb(); 
  void frame_rate_limiter_cb(); 
  void frame_rate_limiter_value_cb(); 
  void clouds_3d_cb(); 
  void random_objects_cb(); 
  void random_trees_cb(); 
  void ai_models_cb(); 
  void time_of_day_cb(); 
  void time_of_day_value_cb(); 
  void season_cb(); 
  void real_weather_fetch_cb(); 
  void auto_coordination_cb(); 
  void scenarii_cb(); 
  void terrasync_cb(); 
  void terrasync_port_cb(); 
  void atlas_cb(); 
  void atlas_host_cb(); 
  void atlas_port_cb(); 
  void multiplay_cb(); 
  void multiplay_field_cb(); 
  void update_basic_options( Fl_Preferences &p ); 
  void save_basic_options( Fl_Preferences &p ); 
  void display_scenarii(); 
  void deselect_all_scenarii_cb(); 
  void show_cmd_line_cb(); 
  void reset_settings(); 
  void load_preferences_cb(); 
  void save_preferences_cb(); 
  Fl_Double_Window* make_launch_window();
  Fl_Double_Window *launch_window;
  int launch_result; 
  void exec_launch_window(); 
  Advanced *adv; 
  static Fl_Menu_Item menu_time_of_day_value[]; 
  static Fl_Menu_Item menu_season[]; 
  Fl_Double_Window* make_crash_window();
  Fl_Double_Window *crash_window;
  Fl_Box *file_box;
  void cb_OK_i(Fl_Button*, void*);
  static void cb_OK(Fl_Button*, void*);
  void crash_ok_cb(); 
  void exec_crash_window( const char *fname ); 
  string dump_file_name; 
  FlightGearThread *fgThread; 
  TerraSyncThread *tsThread; 
  friend class FlightGearThread; 
  friend class TerraGearThread; 
  long fgPid; 
  long tsPid; 
  void stopProcess( long pid ); 
  Fl_Double_Window* make_prefetch_window();
public:
  Fl_Double_Window *prefetch_window;
private:
  void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
  void cb_OK1_i(Fl_Button*, void*);
  static void cb_OK1(Fl_Button*, void*);
public:
  Fl_Input *prefetch_apt;
private:
  int prefetch_result; 
  void scenery_prefetch_cb(); 
  bool exec_prefetch_window(); 
  void prefetch_ok_cb(); 
  void prefetch_cancel_cb(); 
  void start_viewer_cb(); 
  void auto_visibility_cb(); 
  string current_aircraft_model_path; 
  int ts_dir; 
};
#endif
