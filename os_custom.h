/*******************************************************************************
* Copyright (c) 2000, 2011 IBM Corporation and others. All rights reserved.
* The contents of this file are made available under the terms
* of the GNU Lesser General Public License (LGPL) Version 2.1 that
* accompanies this distribution (lgpl-v21.txt).  The LGPL is also
* available at http://www.gnu.org/licenses/lgpl.html.  If the version
* of the LGPL at http://www.gnu.org is different to the version of
* the LGPL accompanying this distribution and there is any conflict
* between the two license versions, the terms of the LGPL accompanying
* this distribution shall govern.
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

/* Special sizeof's */
#define GPollFD_sizeof() sizeof(GPollFD)
#define GtkFixedClass_sizeof() sizeof(GtkFixedClass)
#define GtkCellRendererText_sizeof() sizeof(GtkCellRendererText)
#define GtkCellRendererTextClass_sizeof() sizeof(GtkCellRendererTextClass)
#define GtkCellRendererPixbuf_sizeof() sizeof(GtkCellRendererPixbuf)
#define GtkCellRendererPixbufClass_sizeof() sizeof(GtkCellRendererPixbufClass)
#define GtkCellRendererToggle_sizeof() sizeof(GtkCellRendererToggle)
#define GtkCellRendererToggleClass_sizeof() sizeof(GtkCellRendererToggleClass)
#define GtkTextIter_sizeof() sizeof(GtkTextIter)
#define GtkTreeIter_sizeof() sizeof(GtkTreeIter)

#ifdef AIX
#define LIB_XRENDER "libXrender.a(libXrender.so)"
#define LIB_GTK "libgtk-x11-2.0.a(libgtk-x11-2.0.so.0)"
#define LIB_GDK "libgdk-x11-2.0.a(libgdk-x11-2.0.so.0)"
#define LIB_ATK "libatk-1.0.a(libatk-1.0.so.0)"
#define LIB_PANGO "libpango-1.0.a(libpango-1.0.so.0)"
#define LIB_PANGOCAIRO "libpangocairo-1.0.a(libpangocairo-1.0.so.0)"
#define LIB_GIO "libgio-2.0.a(libgio-2.0.so.0)"
#define LIB_FONTCONFIG "libfontconfig.a(libfontconfig.so.1)"
#elif HPUX
#define LIB_XRENDER "libXrender.so"
#define LIB_GTK "libgtk-x11-2.0.so"
#define LIB_GDK "libgdk-x11-2.0.so"
#define LIB_ATK "libatk-1.0.so"
#define LIB_PANGO "libpango-1.0.so"
#define LIB_PANGOCAIRO "libpangocairo-1.0.so"
#define LIB_GIO "libgio-2.0.so"
#define LIB_FONTCONFIG "libfontconfig.so"
#else
#define LIB_XRENDER "libXrender.so"
#define LIB_GTK "libgtk-x11-2.0.so.0"
#define LIB_GDK "libgdk-x11-2.0.so.0"
#define LIB_ATK "libatk-1.0.so.0"
#define LIB_PANGO "libpango-1.0.so.0"
#define LIB_PANGOCAIRO "libpangocairo-1.0.so.0"
#define LIB_GIO "libgio-2.0.so.0"
#define LIB_FONTCONFIG "libfontconfig.so.1"
#endif

/* Libraries for dynamic loaded functions */
#define XRenderQueryExtension_LIB LIB_XRENDER
#define XRenderQueryVersion_LIB LIB_XRENDER
#define XRenderFindStandardFormat_LIB LIB_XRENDER
#define XRenderFindVisualFormat_LIB LIB_XRENDER
#define XRenderComposite_LIB LIB_XRENDER
#define XRenderCreatePicture_LIB LIB_XRENDER
#define XRenderFreePicture_LIB LIB_XRENDER
#define XRenderSetPictureClipRectangles_LIB LIB_XRENDER
#define XRenderSetPictureTransform_LIB LIB_XRENDER
#define gtk_calendar_display_options_LIB LIB_GTK
#define gtk_calendar_get_date_LIB LIB_GTK
#define gtk_calendar_new_LIB LIB_GTK
#define gtk_calendar_select_day_LIB LIB_GTK
#define gtk_calendar_mark_day_LIB LIB_GTK
#define gtk_calendar_clear_marks_LIB LIB_GTK
#define gtk_calendar_select_month_LIB LIB_GTK
#define gtk_calendar_set_display_options_LIB LIB_GTK
#define gtk_clipboard_store_LIB LIB_GTK
#define gtk_clipboard_set_can_store_LIB LIB_GTK
#define gtk_cell_layout_get_cells_LIB LIB_GTK
#define gtk_cell_layout_set_attributes_LIB LIB_GTK
#define gtk_cell_layout_clear_LIB LIB_GTK
#define gtk_cell_layout_pack_start_LIB LIB_GTK
#define gtk_combo_box_entry_new_text_LIB LIB_GTK
#define gtk_combo_box_new_text_LIB LIB_GTK
#define gtk_combo_box_insert_text_LIB LIB_GTK
#define gtk_combo_box_remove_text_LIB LIB_GTK
#define gtk_combo_box_get_active_LIB LIB_GTK
#define gtk_combo_box_get_model_LIB LIB_GTK
#define gtk_combo_box_set_active_LIB LIB_GTK
#define gtk_combo_box_set_focus_on_click_LIB LIB_GTK
#define gtk_combo_box_popup_LIB LIB_GTK
#define gtk_combo_box_popdown_LIB LIB_GTK
#define gtk_entry_text_index_to_layout_index_LIB LIB_GTK
#define gtk_entry_get_inner_border_LIB LIB_GTK
#define gtk_file_chooser_add_filter_LIB LIB_GTK
#define gtk_file_chooser_dialog_new_LIB LIB_GTK
#define gtk_file_chooser_get_current_folder_LIB LIB_GTK
#define gtk_file_chooser_get_filename_LIB LIB_GTK
#define gtk_file_chooser_get_filenames_LIB LIB_GTK
#define gtk_file_chooser_get_filter_LIB LIB_GTK
#define gtk_file_chooser_get_uri_LIB LIB_GTK
#define gtk_file_chooser_get_uris_LIB LIB_GTK
#define gtk_file_chooser_set_current_folder_LIB LIB_GTK
#define gtk_file_chooser_set_current_folder_uri_LIB LIB_GTK
#define gtk_file_chooser_set_current_name_LIB LIB_GTK
#define gtk_file_chooser_set_do_overwrite_confirmation_LIB LIB_GTK
#define gtk_file_chooser_set_extra_widget_LIB LIB_GTK
#define gtk_file_chooser_set_filename_LIB LIB_GTK
#define gtk_file_chooser_set_filter_LIB LIB_GTK
#define gtk_file_chooser_set_local_only_LIB LIB_GTK
#define gtk_file_chooser_set_uri_LIB LIB_GTK
#define gtk_file_chooser_set_select_multiple_LIB LIB_GTK
#define gtk_file_filter_add_pattern_LIB LIB_GTK
#define gtk_file_filter_new_LIB LIB_GTK
#define gtk_file_filter_get_name_LIB LIB_GTK
#define gtk_file_filter_set_name_LIB LIB_GTK
#define gtk_expander_get_expanded_LIB LIB_GTK
#define gtk_expander_get_label_widget_LIB LIB_GTK
#define gtk_expander_new_LIB LIB_GTK
#define gtk_expander_set_expanded_LIB LIB_GTK
#define gtk_expander_set_label_LIB LIB_GTK
#define gtk_expander_set_label_widget_LIB LIB_GTK
#define gtk_label_set_line_wrap_mode_LIB LIB_GTK
#define gtk_icon_info_load_icon_LIB LIB_GTK
#define gtk_icon_info_free_LIB LIB_GTK
#define gtk_icon_theme_lookup_by_gicon_LIB LIB_GTK
#define gtk_icon_theme_get_default_LIB LIB_GTK
#define gtk_menu_item_remove_submenu_LIB LIB_GTK
#define gtk_menu_shell_set_take_focus_LIB LIB_GTK
#define gtk_window_set_keep_below_LIB LIB_GTK
#define gtk_set_locale_LIB LIB_GTK
#define gtk_toolbar_set_orientation_LIB LIB_GTK
#define gtk_tooltip_trigger_tooltip_query_LIB LIB_GTK
#define gtk_tooltips_set_tip_LIB LIB_GTK
#define gtk_tooltips_enable_LIB LIB_GTK
#define gtk_tooltips_disable_LIB LIB_GTK
#define gtk_tooltips_data_get_LIB LIB_GTK
#define gtk_tooltips_force_window_LIB LIB_GTK
#define gtk_tree_selection_count_selected_rows_LIB LIB_GTK
#define gtk_tree_selection_get_selected_rows_LIB LIB_GTK
#define gtk_tree_view_column_get_cell_renderers_LIB LIB_GTK
#define gtk_tree_view_column_cell_get_position_LIB LIB_GTK
#define gtk_tree_view_convert_widget_to_bin_window_coords_LIB LIB_GTK
#define gtk_tree_view_set_grid_lines_LIB LIB_GTK
#define gtk_tree_view_widget_to_tree_coords_LIB LIB_GTK
#define gtk_entry_set_alignment_LIB LIB_GTK
#define gtk_entry_set_icon_from_stock_LIB LIB_GTK
#define gtk_entry_set_icon_sensitive_LIB LIB_GTK
#define gdk_cursor_new_from_pixbuf_LIB LIB_GDK
#define gdk_display_get_default_LIB LIB_GDK
#define gdk_display_supports_cursor_color_LIB LIB_GDK
#define gdk_draw_pixbuf_LIB LIB_GDK
#define gdk_pixbuf_save_to_bufferv_LIB LIB_GDK
#define gdk_screen_get_default_LIB LIB_GDK
#define gdk_screen_get_monitor_at_point_LIB LIB_GDK
#define gdk_screen_get_monitor_at_window_LIB LIB_GDK
#define gdk_screen_get_monitor_geometry_LIB LIB_GDK
#define gdk_screen_get_n_monitors_LIB LIB_GDK
#define gdk_screen_get_number_LIB LIB_GDK
#define gtk_status_icon_get_geometry_LIB LIB_GTK
#define gtk_status_icon_get_visible_LIB LIB_GTK
#define gtk_status_icon_new_LIB LIB_GTK
#define gtk_status_icon_set_from_pixbuf_LIB LIB_GTK
#define gtk_status_icon_set_visible_LIB LIB_GTK
#define gtk_status_icon_set_tooltip_LIB LIB_GTK
#define gtk_status_icon_position_menu_LIB LIB_GTK
#define gtk_window_get_group_LIB LIB_GTK
#define gtk_window_get_opacity_LIB LIB_GTK
#define gdk_window_create_similar_surface_LIB LIB_GDK
#define gdk_window_lookup_LIB LIB_GDK
#define gdk_window_restack_LIB LIB_GDK
#define gdk_window_set_keep_above_LIB LIB_GDK
#define gdk_window_set_accept_focus_LIB LIB_GDK
#define gtk_window_set_opacity_LIB LIB_GTK
#define gtk_window_set_skip_taskbar_hint_LIB LIB_GTK
#define gtk_widget_is_composited_LIB LIB_GTK
#define gtk_widget_get_tooltip_text_LIB LIB_GTK
#define gtk_widget_set_tooltip_text_LIB LIB_GTK
#define gdk_pango_context_set_colormap_LIB LIB_GDK
#define gdk_x11_screen_get_window_manager_name_LIB LIB_GDK
#define gdk_x11_screen_lookup_visual_LIB LIB_GDK
#define gdk_x11_window_lookup_for_display_LIB LIB_GDK
#define gdk_threads_set_lock_functions_LIB LIB_GDK

#define atk_object_add_relationship_LIB LIB_ATK
#define atk_object_remove_relationship_LIB LIB_ATK
#define pango_attr_underline_color_new_LIB LIB_PANGO
#define pango_attr_strikethrough_color_new_LIB LIB_PANGO
#define pango_font_metrics_get_underline_thickness_LIB LIB_PANGO
#define pango_font_metrics_get_underline_position_LIB LIB_PANGO
#define pango_font_metrics_get_strikethrough_thickness_LIB LIB_PANGO
#define pango_font_metrics_get_strikethrough_position_LIB LIB_PANGO
#define pango_layout_set_auto_dir_LIB LIB_PANGO
#define pango_cairo_create_layout_LIB LIB_PANGOCAIRO
#define pango_cairo_context_set_font_options_LIB LIB_PANGOCAIRO
#define pango_cairo_context_get_font_options_LIB LIB_PANGOCAIRO
#define pango_cairo_layout_path_LIB LIB_PANGOCAIRO
#define pango_cairo_show_layout_LIB LIB_PANGOCAIRO
#define pango_cairo_font_map_create_context_LIB LIB_PANGOCAIRO
#define pango_cairo_font_map_new_LIB LIB_PANGOCAIRO
#define pango_cairo_font_map_get_default_LIB LIB_PANGOCAIRO
#define pango_cairo_font_map_set_resolution_LIB LIB_PANGOCAIRO
#define gdk_cairo_reset_clip_LIB LIB_GDK
#define gdk_cairo_set_source_color_LIB LIB_GDK
#define gdk_cairo_set_source_window_LIB LIB_GDK
#define gdk_cairo_region_LIB LIB_GDK
#define gdk_cairo_create_LIB LIB_GDK
#define gtk_enumerate_printers_LIB LIB_GTK
#define gtk_orientable_set_orientation_LIB LIB_GTK
#define gtk_page_setup_get_bottom_margin_LIB LIB_GTK
#define gtk_page_setup_get_left_margin_LIB LIB_GTK
#define gtk_page_setup_get_orientation_LIB LIB_GTK
#define gtk_page_setup_get_page_height_LIB LIB_GTK
#define gtk_page_setup_get_page_width_LIB LIB_GTK
#define gtk_page_setup_get_paper_height_LIB LIB_GTK
#define gtk_page_setup_get_paper_size_LIB LIB_GTK
#define gtk_page_setup_get_paper_width_LIB LIB_GTK
#define gtk_page_setup_get_right_margin_LIB LIB_GTK
#define gtk_page_setup_get_top_margin_LIB LIB_GTK
#define gtk_page_setup_new_LIB LIB_GTK
#define gtk_page_setup_set_bottom_margin_LIB LIB_GTK
#define gtk_page_setup_set_left_margin_LIB LIB_GTK
#define gtk_page_setup_set_orientation_LIB LIB_GTK
#define gtk_page_setup_set_paper_size_LIB LIB_GTK
#define gtk_page_setup_set_right_margin_LIB LIB_GTK
#define gtk_page_setup_set_top_margin_LIB LIB_GTK
#define gtk_paper_size_free_LIB LIB_GTK
#define gtk_paper_size_get_display_name_LIB LIB_GTK
#define gtk_paper_size_get_name_LIB LIB_GTK
#define gtk_paper_size_get_ppd_name_LIB LIB_GTK
#define gtk_paper_size_get_height_LIB LIB_GTK
#define gtk_paper_size_get_width_LIB LIB_GTK
#define gtk_paper_size_is_custom_LIB LIB_GTK
#define gtk_paper_size_new_LIB LIB_GTK
#define gtk_paper_size_new_custom_LIB LIB_GTK
#define gtk_paper_size_new_from_ppd_LIB LIB_GTK
#define gtk_print_job_get_printer_LIB LIB_GTK
#define gtk_print_job_get_settings_LIB LIB_GTK
#define gtk_print_job_get_status_LIB LIB_GTK
#define gtk_print_job_get_surface_LIB LIB_GTK
#define gtk_print_job_get_title_LIB LIB_GTK
#define gtk_print_job_new_LIB LIB_GTK
#define gtk_print_job_send_LIB LIB_GTK
#define gtk_print_job_set_source_file_LIB LIB_GTK
#define gtk_print_settings_foreach_LIB LIB_GTK
#define gtk_print_settings_get_LIB LIB_GTK
#define gtk_print_settings_get_collate_LIB LIB_GTK
#define gtk_print_settings_get_duplex_LIB LIB_GTK
#define gtk_print_settings_get_n_copies_LIB LIB_GTK
#define gtk_print_settings_get_orientation_LIB LIB_GTK
#define gtk_print_settings_get_page_ranges_LIB LIB_GTK
#define gtk_print_settings_get_paper_height_LIB LIB_GTK
#define gtk_print_settings_get_paper_width_LIB LIB_GTK
#define gtk_print_settings_get_print_pages_LIB LIB_GTK
#define gtk_print_settings_get_printer_LIB LIB_GTK
#define gtk_print_settings_get_resolution_LIB LIB_GTK
#define gtk_print_settings_new_LIB LIB_GTK
#define gtk_print_settings_set_LIB LIB_GTK
#define gtk_print_settings_set_collate_LIB LIB_GTK
#define gtk_print_settings_set_duplex_LIB LIB_GTK
#define gtk_print_settings_set_n_copies_LIB LIB_GTK
#define gtk_print_settings_set_orientation_LIB LIB_GTK
#define gtk_print_settings_set_page_ranges_LIB LIB_GTK
#define gtk_print_settings_set_print_pages_LIB LIB_GTK
#define gtk_print_settings_set_printer_LIB LIB_GTK
#define gtk_print_unix_dialog_get_current_page_LIB LIB_GTK
#define gtk_print_unix_dialog_get_page_setup_LIB LIB_GTK
#define gtk_print_unix_dialog_get_selected_printer_LIB LIB_GTK
#define gtk_print_unix_dialog_get_settings_LIB LIB_GTK
#define gtk_print_unix_dialog_new_LIB LIB_GTK
#define gtk_print_unix_dialog_set_current_page_LIB LIB_GTK
#define gtk_print_unix_dialog_set_manual_capabilities_LIB LIB_GTK
#define gtk_print_unix_dialog_set_embed_page_setup_LIB LIB_GTK
#define gtk_print_unix_dialog_set_page_setup_LIB LIB_GTK
#define gtk_print_unix_dialog_set_settings_LIB LIB_GTK
#define gtk_printer_get_backend_LIB LIB_GTK
#define gtk_printer_get_name_LIB LIB_GTK
#define gtk_printer_is_default_LIB LIB_GTK
#define ubuntu_menu_proxy_get_LIB LIB_GTK
#define FcConfigAppFontAddFile_LIB LIB_FONTCONFIG

#define g_app_info_create_from_commandline_LIB LIB_GIO
#define g_app_info_get_all_LIB LIB_GIO
#define g_app_info_get_executable_LIB LIB_GIO
#define g_app_info_get_icon_LIB LIB_GIO
#define g_app_info_get_id_LIB LIB_GIO
#define g_app_info_get_name_LIB LIB_GIO
#define g_app_info_launch_LIB LIB_GIO
#define g_app_info_get_default_for_type_LIB LIB_GIO
#define g_app_info_launch_default_for_uri_LIB LIB_GIO
#define g_app_info_supports_uris_LIB LIB_GIO
#define g_app_info_should_show_LIB LIB_GIO
#define g_data_input_stream_new_LIB LIB_GIO
#define g_data_input_stream_read_line_LIB LIB_GIO
#define g_content_type_equals_LIB LIB_GIO
#define g_content_type_get_mime_type_LIB LIB_GIO
#define g_content_type_is_a_LIB LIB_GIO
#define g_content_types_get_registered_LIB LIB_GIO
#define g_desktop_app_info_new_from_filename_LIB LIB_GIO
#define g_file_get_path_LIB LIB_GIO
#define g_file_get_uri_LIB LIB_GIO
#define g_file_icon_get_file_LIB LIB_GIO
#define g_file_info_get_content_type_LIB LIB_GIO
#define g_file_info_get_modification_time_LIB LIB_GIO
#define g_file_new_for_commandline_arg_LIB LIB_GIO
#define g_file_new_for_path_LIB LIB_GIO
#define g_file_new_for_uri_LIB LIB_GIO
#define g_file_read_LIB LIB_GIO
#define g_file_test_LIB LIB_GIO
#define g_icon_to_string_LIB LIB_GIO
#define g_icon_new_for_string_LIB LIB_GIO
#define g_file_query_info_LIB LIB_GIO

/* Field accessors */
#define G_OBJECT_CLASS_CONSTRUCTOR(arg0) (arg0)->constructor
#define G_OBJECT_CLASS_SET_CONSTRUCTOR(arg0, arg1) (arg0)->constructor = (GObject* (*) (GType, guint, GObjectConstructParam *))arg1
#define GTK_ACCEL_LABEL_SET_ACCEL_STRING(arg0, arg1) (arg0)->accel_string = arg1
#define GTK_ACCEL_LABEL_GET_ACCEL_STRING(arg0) (arg0)->accel_string
#define GTK_RANGE_SLIDER_START(arg0) (arg0)->slider_start
#define GTK_RANGE_SLIDER_END(arg0) (arg0)->slider_end
#define GTK_RANGE_HAS_STEPPER_A(arg0) (arg0)->has_stepper_a
#define GTK_RANGE_HAS_STEPPER_B(arg0) (arg0)->has_stepper_b
#define GTK_RANGE_HAS_STEPPER_C(arg0) (arg0)->has_stepper_c
#define GTK_RANGE_HAS_STEPPER_D(arg0) (arg0)->has_stepper_d
#define GTK_SCROLLED_WINDOW_HSCROLLBAR(arg0) (arg0)->hscrollbar
#define GTK_SCROLLED_WINDOW_SCROLLBAR_SPACING(arg0) (GTK_SCROLLED_WINDOW_GET_CLASS (arg0)->scrollbar_spacing >= 0 ? GTK_SCROLLED_WINDOW_GET_CLASS (arg0)->scrollbar_spacing : 3)		
#define GTK_SCROLLED_WINDOW_VSCROLLBAR(arg0) (arg0)->vscrollbar
#define GTK_WIDGET_HEIGHT(arg0) (arg0)->allocation.height
#define GTK_WIDGET_SET_HEIGHT(arg0, arg1) (arg0)->allocation.height = arg1
#define GTK_WIDGET_WIDTH(arg0) (arg0)->allocation.width
#define GTK_WIDGET_SET_WIDTH(arg0, arg1) (arg0)->allocation.width = arg1
#define GTK_WIDGET_WINDOW(arg0) (arg0)->window
#define GTK_WIDGET_X(arg0) (arg0)->allocation.x
#define GTK_WIDGET_SET_X(arg0, arg1) (arg0)->allocation.x = arg1
#define GTK_ENTRY_IM_CONTEXT(arg0) (arg0)->im_context
#define GTK_TEXTVIEW_IM_CONTEXT(arg0) (arg0)->im_context
#define GTK_TOOLTIPS_TIP_WINDOW(arg0) (arg0)->tip_window
#define GTK_TOOLTIPS_SET_ACTIVE(arg0, arg1) (arg0)->active_tips_data = arg1
#define GTK_TOOLTIPS_GET_TIP_TEXT(arg0) (arg0)->tip_text
#define GTK_WIDGET_Y(arg0) ((GtkWidget *)arg0)->allocation.y
#define GTK_WIDGET_SET_Y(arg0, arg1) (arg0)->allocation.y = arg1
#define GTK_WIDGET_REQUISITION_WIDTH(arg0) (arg0)->requisition.width
#define GTK_WIDGET_REQUISITION_HEIGHT(arg0) (arg0)->requisition.height
#define GDK_EVENT_TYPE(arg0) (arg0)->type
#define GDK_EVENT_WINDOW(arg0) (arg0)->window
#define X_EVENT_TYPE(arg0) (arg0)->type
#define X_EVENT_WINDOW(arg0) (arg0)->window
#define g_list_data(arg0) (arg0)->data
#define g_slist_data(arg0) (arg0)->data
#define g_list_set_next(arg0, arg1) (arg0)->next = arg1
#define g_list_set_previous(arg0, arg1) (arg0)->prev = arg1
#define gtk_rc_style_get_bg_pixmap_name(arg0, arg1) (arg0)->bg_pixmap_name[arg1]
#define gtk_rc_style_get_color_flags(arg0, arg1) (arg0)->color_flags[arg1]
#define gtk_rc_style_set_bg(arg0, arg1, arg2) if (arg2) (arg0)->bg[arg1] = *arg2
#define gtk_rc_style_set_bg_pixmap_name(arg0, arg1, arg2) (arg0)->bg_pixmap_name[arg1] = (char *)arg2
#define gtk_rc_style_set_color_flags(arg0, arg1, arg2) (arg0)->color_flags[arg1] = arg2
#define gtk_rc_style_set_fg(arg0, arg1, arg2) if (arg2) (arg0)->fg[arg1] = *arg2
#define gtk_rc_style_set_text(arg0, arg1, arg2) if (arg2) (arg0)->text[arg1] = *arg2
#define gtk_style_get_font_desc(arg0) (arg0)->font_desc
#define gtk_style_get_base(arg0, arg1, arg2) *arg2 = (arg0)->base[arg1]
#define gtk_style_get_bg(arg0, arg1, arg2) *arg2 = (arg0)->bg[arg1]
#define gtk_style_get_black(arg0, arg1) *arg1 = (arg0)->black
#define gtk_style_get_dark(arg0, arg1, arg2) *arg2 = (arg0)->dark[arg1]
#define gtk_style_get_fg(arg0, arg1, arg2) *arg2 = (arg0)->fg[arg1]
#define gtk_style_get_light(arg0, arg1, arg2) *arg2 = (arg0)->light[arg1]
#define gtk_style_get_text(arg0, arg1, arg2) *arg2 = (arg0)->text[arg1]
#define gtk_style_get_xthickness(arg0) (arg0)->xthickness
#define gtk_style_get_ythickness(arg0) (arg0)->ythickness
#define gtk_style_get_fg_gc(arg0, arg1, arg2) *arg2 = (arg0)->fg_gc[arg1]
#define gtk_style_get_bg_gc(arg0, arg1, arg2) *arg2 = (arg0)->bg_gc[arg1]
#define gtk_style_get_light_gc(arg0, arg1, arg2) *arg2 = (arg0)->light_gc[arg1]
#define gtk_style_get_dark_gc(arg0, arg1, arg2) *arg2 = (arg0)->dark_gc[arg1]
#define gtk_style_get_mid_gc(arg0, arg1, arg2) *arg2 = (arg0)->mid_gc[arg1]
#define gtk_style_get_text_gc(arg0, arg1, arg2) *arg2 = (arg0)->text_gc[arg1]
#define gtk_style_get_text_aa_gc(arg0, arg1, arg2) *arg2 = (arg0)->text_aa_gc[arg1]
#define gtk_style_get_black_gc(arg0, arg1) *arg1 = (arg0)->black_gc
#define gtk_style_get_white_gc(arg0, arg1) *arg1 = (arg0)->white_gc
#define localeconv_decimal_point() localeconv()->decimal_point

#define gtk_status_icon_position_menu_func() 0; \
OS_LOAD_FUNCTION(fp, gtk_status_icon_position_menu) \
rc = (jintLong)fp;

glong g_utf16_pointer_to_offset(const gchar*, const gchar*);
gchar* g_utf16_offset_to_pointer(const gchar*, glong);
glong g_utf16_strlen(const gchar*, glong max);
glong g_utf16_offset_to_utf8_offset(const gchar*, glong);
glong g_utf8_offset_to_utf16_offset(const gchar*, glong);
