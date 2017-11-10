/* SearchItem.c generated by valac 0.30.1, the Vala compiler
 * generated from SearchItem.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/**/
/*  Copyright (C) 2011-2012 Giulio Collura*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <pango/pango.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <gdk/gdk.h>


#define PANTHER_WIDGETS_TYPE_SEARCH_ITEM (panther_widgets_search_item_get_type ())
#define PANTHER_WIDGETS_SEARCH_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_WIDGETS_TYPE_SEARCH_ITEM, PantherWidgetsSearchItem))
#define PANTHER_WIDGETS_SEARCH_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_WIDGETS_TYPE_SEARCH_ITEM, PantherWidgetsSearchItemClass))
#define PANTHER_WIDGETS_IS_SEARCH_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_WIDGETS_TYPE_SEARCH_ITEM))
#define PANTHER_WIDGETS_IS_SEARCH_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_WIDGETS_TYPE_SEARCH_ITEM))
#define PANTHER_WIDGETS_SEARCH_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_WIDGETS_TYPE_SEARCH_ITEM, PantherWidgetsSearchItemClass))

typedef struct _PantherWidgetsSearchItem PantherWidgetsSearchItem;
typedef struct _PantherWidgetsSearchItemClass PantherWidgetsSearchItemClass;
typedef struct _PantherWidgetsSearchItemPrivate PantherWidgetsSearchItemPrivate;

#define PANTHER_BACKEND_TYPE_APP (panther_backend_app_get_type ())
#define PANTHER_BACKEND_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_BACKEND_TYPE_APP, PantherBackendApp))
#define PANTHER_BACKEND_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_BACKEND_TYPE_APP, PantherBackendAppClass))
#define PANTHER_BACKEND_IS_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_BACKEND_TYPE_APP))
#define PANTHER_BACKEND_IS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_BACKEND_TYPE_APP))
#define PANTHER_BACKEND_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_BACKEND_TYPE_APP, PantherBackendAppClass))

typedef struct _PantherBackendApp PantherBackendApp;
typedef struct _PantherBackendAppClass PantherBackendAppClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SYNAPSE_TYPE_MATCH (synapse_match_get_type ())
#define SYNAPSE_MATCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_MATCH, SynapseMatch))
#define SYNAPSE_IS_MATCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_MATCH))
#define SYNAPSE_MATCH_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYNAPSE_TYPE_MATCH, SynapseMatchIface))

typedef struct _SynapseMatch SynapseMatch;
typedef struct _SynapseMatchIface SynapseMatchIface;

#define SYNAPSE_TYPE_QUERY_FLAGS (synapse_query_flags_get_type ())

#define SYNAPSE_TYPE_MATCH_TYPE (synapse_match_type_get_type ())

#define SYNAPSE_TYPE_APPLICATION_MATCH (synapse_application_match_get_type ())
#define SYNAPSE_APPLICATION_MATCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_APPLICATION_MATCH, SynapseApplicationMatch))
#define SYNAPSE_IS_APPLICATION_MATCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_APPLICATION_MATCH))
#define SYNAPSE_APPLICATION_MATCH_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYNAPSE_TYPE_APPLICATION_MATCH, SynapseApplicationMatchIface))

typedef struct _SynapseApplicationMatch SynapseApplicationMatch;
typedef struct _SynapseApplicationMatchIface SynapseApplicationMatchIface;
typedef struct _Block6Data Block6Data;
#define _g_free0(var) (var = (g_free (var), NULL))

#define SYNAPSE_TYPE_URI_MATCH (synapse_uri_match_get_type ())
#define SYNAPSE_URI_MATCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_URI_MATCH, SynapseUriMatch))
#define SYNAPSE_IS_URI_MATCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_URI_MATCH))
#define SYNAPSE_URI_MATCH_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYNAPSE_TYPE_URI_MATCH, SynapseUriMatchIface))

typedef struct _SynapseUriMatch SynapseUriMatch;
typedef struct _SynapseUriMatchIface SynapseUriMatchIface;

struct _PantherWidgetsSearchItem {
	GtkButton parent_instance;
	PantherWidgetsSearchItemPrivate * priv;
	gboolean dragging;
	gboolean action;
};

struct _PantherWidgetsSearchItemClass {
	GtkButtonClass parent_class;
};

struct _PantherWidgetsSearchItemPrivate {
	PantherBackendApp* _app;
	GtkLabel* name_label;
	GtkImage* icon;
	GCancellable* cancellable;
};

typedef enum  {
	SYNAPSE_QUERY_FLAGS_INCLUDE_REMOTE = 1 << 0,
	SYNAPSE_QUERY_FLAGS_UNCATEGORIZED = 1 << 1,
	SYNAPSE_QUERY_FLAGS_APPLICATIONS = 1 << 2,
	SYNAPSE_QUERY_FLAGS_ACTIONS = 1 << 3,
	SYNAPSE_QUERY_FLAGS_AUDIO = 1 << 4,
	SYNAPSE_QUERY_FLAGS_VIDEO = 1 << 5,
	SYNAPSE_QUERY_FLAGS_DOCUMENTS = 1 << 6,
	SYNAPSE_QUERY_FLAGS_IMAGES = 1 << 7,
	SYNAPSE_QUERY_FLAGS_FILES = ((SYNAPSE_QUERY_FLAGS_AUDIO | SYNAPSE_QUERY_FLAGS_VIDEO) | SYNAPSE_QUERY_FLAGS_DOCUMENTS) | SYNAPSE_QUERY_FLAGS_IMAGES,
	SYNAPSE_QUERY_FLAGS_PLACES = 1 << 8,
	SYNAPSE_QUERY_FLAGS_INTERNET = 1 << 9,
	SYNAPSE_QUERY_FLAGS_TEXT = 1 << 10,
	SYNAPSE_QUERY_FLAGS_CONTACTS = 1 << 11,
	SYNAPSE_QUERY_FLAGS_ALL = 0xFFFFFFFFLL,
	SYNAPSE_QUERY_FLAGS_LOCAL_CONTENT = SYNAPSE_QUERY_FLAGS_ALL ^ SYNAPSE_QUERY_FLAGS_INCLUDE_REMOTE
} SynapseQueryFlags;

typedef enum  {
	SYNAPSE_MATCH_TYPE_UNKNOWN = 0,
	SYNAPSE_MATCH_TYPE_TEXT,
	SYNAPSE_MATCH_TYPE_APPLICATION,
	SYNAPSE_MATCH_TYPE_GENERIC_URI,
	SYNAPSE_MATCH_TYPE_ACTION,
	SYNAPSE_MATCH_TYPE_SEARCH,
	SYNAPSE_MATCH_TYPE_CONTACT
} SynapseMatchType;

struct _SynapseMatchIface {
	GTypeInterface parent_iface;
	void (*execute) (SynapseMatch* self, SynapseMatch* match);
	void (*execute_with_target) (SynapseMatch* self, SynapseMatch* source, SynapseMatch* target);
	gboolean (*needs_target) (SynapseMatch* self);
	SynapseQueryFlags (*target_flags) (SynapseMatch* self);
	const gchar* (*get_title) (SynapseMatch* self);
	void (*set_title) (SynapseMatch* self, const gchar* value);
	const gchar* (*get_description) (SynapseMatch* self);
	void (*set_description) (SynapseMatch* self, const gchar* value);
	const gchar* (*get_icon_name) (SynapseMatch* self);
	void (*set_icon_name) (SynapseMatch* self, const gchar* value);
	gboolean (*get_has_thumbnail) (SynapseMatch* self);
	void (*set_has_thumbnail) (SynapseMatch* self, gboolean value);
	const gchar* (*get_thumbnail_path) (SynapseMatch* self);
	void (*set_thumbnail_path) (SynapseMatch* self, const gchar* value);
	SynapseMatchType (*get_match_type) (SynapseMatch* self);
	void (*set_match_type) (SynapseMatch* self, SynapseMatchType value);
};

struct _SynapseApplicationMatchIface {
	GTypeInterface parent_iface;
	GAppInfo* (*get_app_info) (SynapseApplicationMatch* self);
	void (*set_app_info) (SynapseApplicationMatch* self, GAppInfo* value);
	gboolean (*get_needs_terminal) (SynapseApplicationMatch* self);
	void (*set_needs_terminal) (SynapseApplicationMatch* self, gboolean value);
	const gchar* (*get_filename) (SynapseApplicationMatch* self);
	void (*set_filename) (SynapseApplicationMatch* self, const gchar* value);
};

struct _Block6Data {
	int _ref_count_;
	PantherWidgetsSearchItem* self;
	SynapseApplicationMatch* app_match;
	PantherBackendApp* app;
};

struct _SynapseUriMatchIface {
	GTypeInterface parent_iface;
	const gchar* (*get_uri) (SynapseUriMatch* self);
	void (*set_uri) (SynapseUriMatch* self, const gchar* value);
	SynapseQueryFlags (*get_file_type) (SynapseUriMatch* self);
	void (*set_file_type) (SynapseUriMatch* self, SynapseQueryFlags value);
	const gchar* (*get_mime_type) (SynapseUriMatch* self);
	void (*set_mime_type) (SynapseUriMatch* self, const gchar* value);
};


static gpointer panther_widgets_search_item_parent_class = NULL;

GType panther_widgets_search_item_get_type (void) G_GNUC_CONST;
GType panther_backend_app_get_type (void) G_GNUC_CONST;
#define PANTHER_WIDGETS_SEARCH_ITEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PANTHER_WIDGETS_TYPE_SEARCH_ITEM, PantherWidgetsSearchItemPrivate))
enum  {
	PANTHER_WIDGETS_SEARCH_ITEM_DUMMY_PROPERTY,
	PANTHER_WIDGETS_SEARCH_ITEM_APP
};
#define PANTHER_WIDGETS_SEARCH_ITEM_ICON_SIZE 32
PantherWidgetsSearchItem* panther_widgets_search_item_new (PantherBackendApp* app, const gchar* search_term, gboolean action, const gchar* action_title);
PantherWidgetsSearchItem* panther_widgets_search_item_construct (GType object_type, PantherBackendApp* app, const gchar* search_term, gboolean action, const gchar* action_title);
GType synapse_query_flags_get_type (void) G_GNUC_CONST;
GType synapse_match_type_get_type (void) G_GNUC_CONST;
GType synapse_match_get_type (void) G_GNUC_CONST;
GType synapse_application_match_get_type (void) G_GNUC_CONST;
static Block6Data* block6_data_ref (Block6Data* _data6_);
static void block6_data_unref (void * _userdata_);
gchar* panther_backend_synapse_search_markup_string_with_search (const gchar* text, const gchar* pattern);
const gchar* panther_backend_app_get_name (PantherBackendApp* self);
GdkPixbuf* panther_backend_app_load_icon (PantherBackendApp* self, gint size);
GType synapse_uri_match_get_type (void) G_GNUC_CONST;
SynapseMatch* panther_backend_app_get_match (PantherBackendApp* self);
const gchar* synapse_uri_match_get_uri (SynapseUriMatch* self);
void panther_backend_synapse_search_get_favicon_for_match (SynapseUriMatch* match, gint size, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
GdkPixbuf* panther_backend_synapse_search_get_favicon_for_match_finish (GAsyncResult* _res_);
static void ___lambda39_ (PantherWidgetsSearchItem* self, GObject* obj, GAsyncResult* res);
static void ____lambda39__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self);
gboolean panther_backend_app_launch (PantherBackendApp* self);
static gboolean _panther_backend_app_launch_panther_widgets_search_item_launch_app (PantherWidgetsSearchItem* _sender, gpointer self);
static void ___lambda40_ (Block6Data* _data6_, GdkDragContext* ctx);
GdkPixbuf* panther_backend_app_get_icon (PantherBackendApp* self);
static void ____lambda40__gtk_widget_drag_begin (GtkWidget* _sender, GdkDragContext* context, gpointer self);
static void ___lambda41_ (PantherWidgetsSearchItem* self);
static void ____lambda41__gtk_widget_drag_end (GtkWidget* _sender, GdkDragContext* context, gpointer self);
static void ___lambda42_ (Block6Data* _data6_, GdkDragContext* ctx, GtkSelectionData* sel, guint info, guint time);
const gchar* synapse_application_match_get_filename (SynapseApplicationMatch* self);
static void ____lambda42__gtk_widget_drag_data_get (GtkWidget* _sender, GdkDragContext* context, GtkSelectionData* selection_data, guint info, guint time_, gpointer self);
static void panther_widgets_search_item_real_destroy (GtkWidget* base);
PantherBackendApp* panther_widgets_search_item_get_app (PantherWidgetsSearchItem* self);
static void panther_widgets_search_item_set_app (PantherWidgetsSearchItem* self, PantherBackendApp* value);
static void g_cclosure_user_marshal_BOOLEAN__VOID (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void panther_widgets_search_item_finalize (GObject* obj);
static void _vala_panther_widgets_search_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_panther_widgets_search_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static Block6Data* block6_data_ref (Block6Data* _data6_) {
	g_atomic_int_inc (&_data6_->_ref_count_);
	return _data6_;
}


static void block6_data_unref (void * _userdata_) {
	Block6Data* _data6_;
	_data6_ = (Block6Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data6_->_ref_count_)) {
		PantherWidgetsSearchItem* self;
		self = _data6_->self;
		_g_object_unref0 (_data6_->app_match);
		_g_object_unref0 (_data6_->app);
		_g_object_unref0 (self);
		g_slice_free (Block6Data, _data6_);
	}
}


static void ___lambda39_ (PantherWidgetsSearchItem* self, GObject* obj, GAsyncResult* res) {
	GdkPixbuf* pixbuf = NULL;
	GAsyncResult* _tmp0_ = NULL;
	GdkPixbuf* _tmp1_ = NULL;
	GdkPixbuf* _tmp2_ = NULL;
	g_return_if_fail (res != NULL);
	_tmp0_ = res;
	_tmp1_ = panther_backend_synapse_search_get_favicon_for_match_finish (_tmp0_);
	pixbuf = _tmp1_;
	_tmp2_ = pixbuf;
	if (_tmp2_ != NULL) {
		GtkImage* _tmp3_ = NULL;
		GdkPixbuf* _tmp4_ = NULL;
		_tmp3_ = self->priv->icon;
		_tmp4_ = pixbuf;
		gtk_image_set_from_pixbuf (_tmp3_, _tmp4_);
	}
	_g_object_unref0 (pixbuf);
}


static void ____lambda39__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self) {
	___lambda39_ ((PantherWidgetsSearchItem*) self, source_object, res);
	g_object_unref (self);
}


static gboolean _panther_backend_app_launch_panther_widgets_search_item_launch_app (PantherWidgetsSearchItem* _sender, gpointer self) {
	gboolean result;
	result = panther_backend_app_launch ((PantherBackendApp*) self);
	return result;
}


static void ___lambda40_ (Block6Data* _data6_, GdkDragContext* ctx) {
	PantherWidgetsSearchItem* self;
	GdkDragContext* _tmp0_ = NULL;
	PantherBackendApp* _tmp1_ = NULL;
	GdkPixbuf* _tmp2_ = NULL;
	GdkPixbuf* _tmp3_ = NULL;
	self = _data6_->self;
	g_return_if_fail (ctx != NULL);
	self->dragging = TRUE;
	_tmp0_ = ctx;
	_tmp1_ = _data6_->app;
	_tmp2_ = panther_backend_app_get_icon (_tmp1_);
	_tmp3_ = _tmp2_;
	gtk_drag_set_icon_pixbuf (_tmp0_, _tmp3_, 0, 0);
}


static void ____lambda40__gtk_widget_drag_begin (GtkWidget* _sender, GdkDragContext* context, gpointer self) {
	___lambda40_ (self, context);
}


static void ___lambda41_ (PantherWidgetsSearchItem* self) {
	self->dragging = FALSE;
}


static void ____lambda41__gtk_widget_drag_end (GtkWidget* _sender, GdkDragContext* context, gpointer self) {
	___lambda41_ ((PantherWidgetsSearchItem*) self);
}


static void ___lambda42_ (Block6Data* _data6_, GdkDragContext* ctx, GtkSelectionData* sel, guint info, guint time) {
	PantherWidgetsSearchItem* self;
	GtkSelectionData* _tmp0_ = NULL;
	SynapseApplicationMatch* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GFile* _tmp4_ = NULL;
	GFile* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar** _tmp7_ = NULL;
	gchar** _tmp8_ = NULL;
	gint _tmp8__length1 = 0;
	self = _data6_->self;
	g_return_if_fail (ctx != NULL);
	g_return_if_fail (sel != NULL);
	_tmp0_ = sel;
	_tmp1_ = _data6_->app_match;
	_tmp2_ = synapse_application_match_get_filename (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_file_new_for_path (_tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_file_get_uri (_tmp5_);
	_tmp7_ = g_new0 (gchar*, 1 + 1);
	_tmp7_[0] = _tmp6_;
	_tmp8_ = _tmp7_;
	_tmp8__length1 = 1;
	gtk_selection_data_set_uris (_tmp0_, _tmp8_);
	_tmp8_ = (_vala_array_free (_tmp8_, _tmp8__length1, (GDestroyNotify) g_free), NULL);
	_g_object_unref0 (_tmp5_);
}


static void ____lambda42__gtk_widget_drag_data_get (GtkWidget* _sender, GdkDragContext* context, GtkSelectionData* selection_data, guint info, guint time_, gpointer self) {
	___lambda42_ (self, context, selection_data, info, time_);
}


PantherWidgetsSearchItem* panther_widgets_search_item_construct (GType object_type, PantherBackendApp* app, const gchar* search_term, gboolean action, const gchar* action_title) {
	PantherWidgetsSearchItem * self = NULL;
	Block6Data* _data6_;
	PantherBackendApp* _tmp0_ = NULL;
	PantherBackendApp* _tmp1_ = NULL;
	PantherBackendApp* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	GtkStyleContext* _tmp4_ = NULL;
	gchar* markup = NULL;
	gboolean _tmp5_ = FALSE;
	const gchar* _tmp13_ = NULL;
	GtkLabel* _tmp14_ = NULL;
	GtkLabel* _tmp15_ = NULL;
	GtkLabel* _tmp16_ = NULL;
	GtkLabel* _tmp17_ = NULL;
	PantherBackendApp* _tmp18_ = NULL;
	GdkPixbuf* _tmp19_ = NULL;
	GdkPixbuf* _tmp20_ = NULL;
	GtkImage* _tmp21_ = NULL;
	SynapseUriMatch* uri_match = NULL;
	PantherBackendApp* _tmp22_ = NULL;
	SynapseMatch* _tmp23_ = NULL;
	SynapseMatch* _tmp24_ = NULL;
	SynapseUriMatch* _tmp25_ = NULL;
	gboolean _tmp26_ = FALSE;
	SynapseUriMatch* _tmp27_ = NULL;
	GtkBox* box = NULL;
	GtkBox* _tmp35_ = NULL;
	GtkBox* _tmp36_ = NULL;
	GtkImage* _tmp37_ = NULL;
	GtkBox* _tmp38_ = NULL;
	GtkLabel* _tmp39_ = NULL;
	GtkBox* _tmp40_ = NULL;
	GtkBox* _tmp41_ = NULL;
	GtkBox* _tmp42_ = NULL;
	GtkBox* _tmp43_ = NULL;
	gboolean _tmp44_ = FALSE;
	PantherBackendApp* _tmp46_ = NULL;
	SynapseMatch* _tmp47_ = NULL;
	SynapseMatch* _tmp48_ = NULL;
	SynapseApplicationMatch* _tmp49_ = NULL;
	SynapseApplicationMatch* _tmp50_ = NULL;
	g_return_val_if_fail (app != NULL, NULL);
	g_return_val_if_fail (search_term != NULL, NULL);
	g_return_val_if_fail (action_title != NULL, NULL);
	_data6_ = g_slice_new0 (Block6Data);
	_data6_->_ref_count_ = 1;
	_tmp0_ = app;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (_data6_->app);
	_data6_->app = _tmp1_;
	_tmp2_ = _data6_->app;
	self = (PantherWidgetsSearchItem*) g_object_new (object_type, "app", _tmp2_, NULL);
	_data6_->self = g_object_ref (self);
	_tmp3_ = action;
	self->action = _tmp3_;
	_tmp4_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_add_class (_tmp4_, GTK_STYLE_CLASS_FLAT);
	_tmp5_ = action;
	if (_tmp5_) {
		const gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		_tmp6_ = action_title;
		_tmp7_ = g_strdup (_tmp6_);
		_g_free0 (markup);
		markup = _tmp7_;
	} else {
		PantherBackendApp* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		const gchar* _tmp10_ = NULL;
		const gchar* _tmp11_ = NULL;
		gchar* _tmp12_ = NULL;
		_tmp8_ = _data6_->app;
		_tmp9_ = panther_backend_app_get_name (_tmp8_);
		_tmp10_ = _tmp9_;
		_tmp11_ = search_term;
		_tmp12_ = panther_backend_synapse_search_markup_string_with_search (_tmp10_, _tmp11_);
		_g_free0 (markup);
		markup = _tmp12_;
	}
	_tmp13_ = markup;
	_tmp14_ = (GtkLabel*) gtk_label_new (_tmp13_);
	g_object_ref_sink (_tmp14_);
	_g_object_unref0 (self->priv->name_label);
	self->priv->name_label = _tmp14_;
	_tmp15_ = self->priv->name_label;
	gtk_label_set_ellipsize (_tmp15_, PANGO_ELLIPSIZE_END);
	_tmp16_ = self->priv->name_label;
	gtk_label_set_use_markup (_tmp16_, TRUE);
	_tmp17_ = self->priv->name_label;
	g_object_set (G_TYPE_CHECK_INSTANCE_CAST (_tmp17_, gtk_misc_get_type (), GtkMisc), "xalign", 0.0f, NULL);
	_tmp18_ = _data6_->app;
	_tmp19_ = panther_backend_app_load_icon (_tmp18_, PANTHER_WIDGETS_SEARCH_ITEM_ICON_SIZE);
	_tmp20_ = _tmp19_;
	_tmp21_ = (GtkImage*) gtk_image_new_from_pixbuf (_tmp20_);
	g_object_ref_sink (_tmp21_);
	_g_object_unref0 (self->priv->icon);
	self->priv->icon = _tmp21_;
	_g_object_unref0 (_tmp20_);
	_tmp22_ = _data6_->app;
	_tmp23_ = panther_backend_app_get_match (_tmp22_);
	_tmp24_ = _tmp23_;
	_tmp25_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp24_, SYNAPSE_TYPE_URI_MATCH) ? ((SynapseUriMatch*) _tmp24_) : NULL);
	uri_match = _tmp25_;
	_tmp27_ = uri_match;
	if (_tmp27_ != NULL) {
		SynapseUriMatch* _tmp28_ = NULL;
		const gchar* _tmp29_ = NULL;
		const gchar* _tmp30_ = NULL;
		gboolean _tmp31_ = FALSE;
		_tmp28_ = uri_match;
		_tmp29_ = synapse_uri_match_get_uri (_tmp28_);
		_tmp30_ = _tmp29_;
		_tmp31_ = g_str_has_prefix (_tmp30_, "http");
		_tmp26_ = _tmp31_;
	} else {
		_tmp26_ = FALSE;
	}
	if (_tmp26_) {
		GCancellable* _tmp32_ = NULL;
		SynapseUriMatch* _tmp33_ = NULL;
		GCancellable* _tmp34_ = NULL;
		_tmp32_ = g_cancellable_new ();
		_g_object_unref0 (self->priv->cancellable);
		self->priv->cancellable = _tmp32_;
		_tmp33_ = uri_match;
		_tmp34_ = self->priv->cancellable;
		panther_backend_synapse_search_get_favicon_for_match (_tmp33_, PANTHER_WIDGETS_SEARCH_ITEM_ICON_SIZE, _tmp34_, ____lambda39__gasync_ready_callback, g_object_ref (self));
	}
	_tmp35_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 12);
	g_object_ref_sink (_tmp35_);
	box = _tmp35_;
	_tmp36_ = box;
	_tmp37_ = self->priv->icon;
	gtk_box_pack_start (_tmp36_, (GtkWidget*) _tmp37_, FALSE, TRUE, (guint) 0);
	_tmp38_ = box;
	_tmp39_ = self->priv->name_label;
	gtk_box_pack_start (_tmp38_, (GtkWidget*) _tmp39_, TRUE, TRUE, (guint) 0);
	_tmp40_ = box;
	gtk_widget_set_margin_start ((GtkWidget*) _tmp40_, 12);
	_tmp41_ = box;
	_tmp42_ = box;
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp42_, 3);
	gtk_widget_set_margin_top ((GtkWidget*) _tmp41_, 3);
	_tmp43_ = box;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp43_);
	_tmp44_ = action;
	if (!_tmp44_) {
		PantherBackendApp* _tmp45_ = NULL;
		_tmp45_ = _data6_->app;
		g_signal_connect_object (self, "launch-app", (GCallback) _panther_backend_app_launch_panther_widgets_search_item_launch_app, _tmp45_, 0);
	}
	_tmp46_ = _data6_->app;
	_tmp47_ = panther_backend_app_get_match (_tmp46_);
	_tmp48_ = _tmp47_;
	_tmp49_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp48_, SYNAPSE_TYPE_APPLICATION_MATCH) ? ((SynapseApplicationMatch*) _tmp48_) : NULL);
	_data6_->app_match = _tmp49_;
	_tmp50_ = _data6_->app_match;
	if (_tmp50_ != NULL) {
		GtkTargetEntry dnd = {0};
		GtkTargetEntry _tmp51_ = {0};
		GtkTargetEntry _tmp52_ = {0};
		GtkTargetEntry* _tmp53_ = NULL;
		GtkTargetEntry* _tmp54_ = NULL;
		gint _tmp54__length1 = 0;
		_tmp51_.target = "text/uri-list";
		_tmp51_.flags = (guint) 0;
		_tmp51_.info = (guint) 0;
		dnd = _tmp51_;
		_tmp52_ = dnd;
		_tmp53_ = g_new0 (GtkTargetEntry, 1);
		_tmp53_[0] = _tmp52_;
		_tmp54_ = _tmp53_;
		_tmp54__length1 = 1;
		gtk_drag_source_set ((GtkWidget*) self, GDK_BUTTON1_MASK, _tmp54_, 1, GDK_ACTION_COPY);
		_tmp54_ = (g_free (_tmp54_), NULL);
		g_signal_connect_data ((GtkWidget*) self, "drag-begin", (GCallback) ____lambda40__gtk_widget_drag_begin, block6_data_ref (_data6_), (GClosureNotify) block6_data_unref, 0);
		g_signal_connect_object ((GtkWidget*) self, "drag-end", (GCallback) ____lambda41__gtk_widget_drag_end, self, 0);
		g_signal_connect_data ((GtkWidget*) self, "drag-data-get", (GCallback) ____lambda42__gtk_widget_drag_data_get, block6_data_ref (_data6_), (GClosureNotify) block6_data_unref, 0);
	}
	_g_object_unref0 (box);
	_g_object_unref0 (uri_match);
	_g_free0 (markup);
	block6_data_unref (_data6_);
	_data6_ = NULL;
	return self;
}


PantherWidgetsSearchItem* panther_widgets_search_item_new (PantherBackendApp* app, const gchar* search_term, gboolean action, const gchar* action_title) {
	return panther_widgets_search_item_construct (PANTHER_WIDGETS_TYPE_SEARCH_ITEM, app, search_term, action, action_title);
}


static void panther_widgets_search_item_real_destroy (GtkWidget* base) {
	PantherWidgetsSearchItem * self;
	GCancellable* _tmp0_ = NULL;
	self = (PantherWidgetsSearchItem*) base;
	GTK_WIDGET_CLASS (panther_widgets_search_item_parent_class)->destroy ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_button_get_type (), GtkButton));
	_tmp0_ = self->priv->cancellable;
	if (_tmp0_ != NULL) {
		GCancellable* _tmp1_ = NULL;
		_tmp1_ = self->priv->cancellable;
		g_cancellable_cancel (_tmp1_);
	}
}


PantherBackendApp* panther_widgets_search_item_get_app (PantherWidgetsSearchItem* self) {
	PantherBackendApp* result;
	PantherBackendApp* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_app;
	result = _tmp0_;
	return result;
}


static void panther_widgets_search_item_set_app (PantherWidgetsSearchItem* self, PantherBackendApp* value) {
	PantherBackendApp* _tmp0_ = NULL;
	PantherBackendApp* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_app);
	self->priv->_app = _tmp1_;
	g_object_notify ((GObject *) self, "app");
}


static void g_cclosure_user_marshal_BOOLEAN__VOID (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef gboolean (*GMarshalFunc_BOOLEAN__VOID) (gpointer data1, gpointer data2);
	register GMarshalFunc_BOOLEAN__VOID callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	gboolean v_return;
	cc = (GCClosure *) closure;
	g_return_if_fail (return_value != NULL);
	g_return_if_fail (n_param_values == 1);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_BOOLEAN__VOID) (marshal_data ? marshal_data : cc->callback);
	v_return = callback (data1, data2);
	g_value_set_boolean (return_value, v_return);
}


static void panther_widgets_search_item_class_init (PantherWidgetsSearchItemClass * klass) {
	panther_widgets_search_item_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (PantherWidgetsSearchItemPrivate));
	((GtkWidgetClass *) klass)->destroy = panther_widgets_search_item_real_destroy;
	G_OBJECT_CLASS (klass)->get_property = _vala_panther_widgets_search_item_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_panther_widgets_search_item_set_property;
	G_OBJECT_CLASS (klass)->finalize = panther_widgets_search_item_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), PANTHER_WIDGETS_SEARCH_ITEM_APP, g_param_spec_object ("app", "app", "app", PANTHER_BACKEND_TYPE_APP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_signal_new ("launch_app", PANTHER_WIDGETS_TYPE_SEARCH_ITEM, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_BOOLEAN__VOID, G_TYPE_BOOLEAN, 0);
}


static void panther_widgets_search_item_instance_init (PantherWidgetsSearchItem * self) {
	self->priv = PANTHER_WIDGETS_SEARCH_ITEM_GET_PRIVATE (self);
	self->priv->cancellable = NULL;
	self->dragging = FALSE;
	self->action = FALSE;
}


static void panther_widgets_search_item_finalize (GObject* obj) {
	PantherWidgetsSearchItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PANTHER_WIDGETS_TYPE_SEARCH_ITEM, PantherWidgetsSearchItem);
	_g_object_unref0 (self->priv->_app);
	_g_object_unref0 (self->priv->name_label);
	_g_object_unref0 (self->priv->icon);
	_g_object_unref0 (self->priv->cancellable);
	G_OBJECT_CLASS (panther_widgets_search_item_parent_class)->finalize (obj);
}


GType panther_widgets_search_item_get_type (void) {
	static volatile gsize panther_widgets_search_item_type_id__volatile = 0;
	if (g_once_init_enter (&panther_widgets_search_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PantherWidgetsSearchItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) panther_widgets_search_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PantherWidgetsSearchItem), 0, (GInstanceInitFunc) panther_widgets_search_item_instance_init, NULL };
		GType panther_widgets_search_item_type_id;
		panther_widgets_search_item_type_id = g_type_register_static (gtk_button_get_type (), "PantherWidgetsSearchItem", &g_define_type_info, 0);
		g_once_init_leave (&panther_widgets_search_item_type_id__volatile, panther_widgets_search_item_type_id);
	}
	return panther_widgets_search_item_type_id__volatile;
}


static void _vala_panther_widgets_search_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	PantherWidgetsSearchItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, PANTHER_WIDGETS_TYPE_SEARCH_ITEM, PantherWidgetsSearchItem);
	switch (property_id) {
		case PANTHER_WIDGETS_SEARCH_ITEM_APP:
		g_value_set_object (value, panther_widgets_search_item_get_app (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_panther_widgets_search_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	PantherWidgetsSearchItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, PANTHER_WIDGETS_TYPE_SEARCH_ITEM, PantherWidgetsSearchItem);
	switch (property_id) {
		case PANTHER_WIDGETS_SEARCH_ITEM_APP:
		panther_widgets_search_item_set_app (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



