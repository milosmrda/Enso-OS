/* result-set.c generated by valac 0.30.1, the Vala compiler
 * generated from result-set.vala, do not modify */

/*
 * Copyright (C) 2010 Michal Hruby <michal.mhr@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by Michal Hruby <michal.mhr@gmail.com>
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define SYNAPSE_TYPE_RESULT_SET (synapse_result_set_get_type ())
#define SYNAPSE_RESULT_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_RESULT_SET, SynapseResultSet))
#define SYNAPSE_RESULT_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SYNAPSE_TYPE_RESULT_SET, SynapseResultSetClass))
#define SYNAPSE_IS_RESULT_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_RESULT_SET))
#define SYNAPSE_IS_RESULT_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SYNAPSE_TYPE_RESULT_SET))
#define SYNAPSE_RESULT_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SYNAPSE_TYPE_RESULT_SET, SynapseResultSetClass))

typedef struct _SynapseResultSet SynapseResultSet;
typedef struct _SynapseResultSetClass SynapseResultSetClass;
typedef struct _SynapseResultSetPrivate SynapseResultSetPrivate;

#define SYNAPSE_TYPE_MATCH (synapse_match_get_type ())
#define SYNAPSE_MATCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_MATCH, SynapseMatch))
#define SYNAPSE_IS_MATCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_MATCH))
#define SYNAPSE_MATCH_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYNAPSE_TYPE_MATCH, SynapseMatchIface))

typedef struct _SynapseMatch SynapseMatch;
typedef struct _SynapseMatchIface SynapseMatchIface;

#define SYNAPSE_TYPE_QUERY_FLAGS (synapse_query_flags_get_type ())

#define SYNAPSE_TYPE_MATCH_TYPE (synapse_match_type_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SYNAPSE_TYPE_URI_MATCH (synapse_uri_match_get_type ())
#define SYNAPSE_URI_MATCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_URI_MATCH, SynapseUriMatch))
#define SYNAPSE_IS_URI_MATCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_URI_MATCH))
#define SYNAPSE_URI_MATCH_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SYNAPSE_TYPE_URI_MATCH, SynapseUriMatchIface))

typedef struct _SynapseUriMatch SynapseUriMatch;
typedef struct _SynapseUriMatchIface SynapseUriMatchIface;

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

struct _SynapseResultSet {
	GObject parent_instance;
	SynapseResultSetPrivate * priv;
	GeeMap* matches;
	GeeSet* uris;
};

struct _SynapseResultSetClass {
	GObjectClass parent_class;
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


static gpointer synapse_result_set_parent_class = NULL;
static GeeTraversableIface* synapse_result_set_gee_traversable_parent_iface = NULL;
static GeeIterableIface* synapse_result_set_gee_iterable_parent_iface = NULL;

GType synapse_result_set_get_type (void) G_GNUC_CONST;
GType synapse_query_flags_get_type (void) G_GNUC_CONST;
GType synapse_match_type_get_type (void) G_GNUC_CONST;
GType synapse_match_get_type (void) G_GNUC_CONST;
enum  {
	SYNAPSE_RESULT_SET_DUMMY_PROPERTY,
	SYNAPSE_RESULT_SET_ELEMENT_TYPE,
	SYNAPSE_RESULT_SET_SIZE,
	SYNAPSE_RESULT_SET_KEYS,
	SYNAPSE_RESULT_SET_ENTRIES
};
SynapseResultSet* synapse_result_set_new (void);
SynapseResultSet* synapse_result_set_construct (GType object_type);
static GeeIterator* synapse_result_set_real_iterator (GeeIterable* base);
static gboolean synapse_result_set_real_foreach (GeeTraversable* base, GeeForallFunc func, void* func_target);
void synapse_result_set_add (SynapseResultSet* self, SynapseMatch* match, gint relevancy);
GType synapse_uri_match_get_type (void) G_GNUC_CONST;
const gchar* synapse_uri_match_get_uri (SynapseUriMatch* self);
void synapse_result_set_add_all (SynapseResultSet* self, SynapseResultSet* rs);
gboolean synapse_result_set_contains_uri (SynapseResultSet* self, const gchar* uri);
GeeList* synapse_result_set_get_sorted_list (SynapseResultSet* self);
static gint __lambda7_ (SynapseResultSet* self, GeeMapEntry* a, GeeMapEntry* b);
const gchar* synapse_match_get_title (SynapseMatch* self);
static gint ___lambda7__gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self);
gint synapse_result_set_get_size (SynapseResultSet* self);
GeeSet* synapse_result_set_get_keys (SynapseResultSet* self);
GeeSet* synapse_result_set_get_entries (SynapseResultSet* self);
static GObject * synapse_result_set_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void synapse_result_set_finalize (GObject* obj);
static void _vala_synapse_result_set_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);


SynapseResultSet* synapse_result_set_construct (GType object_type) {
	SynapseResultSet * self = NULL;
	self = (SynapseResultSet*) g_object_new (object_type, NULL);
	return self;
}


SynapseResultSet* synapse_result_set_new (void) {
	return synapse_result_set_construct (SYNAPSE_TYPE_RESULT_SET);
}


static GeeIterator* synapse_result_set_real_iterator (GeeIterable* base) {
	SynapseResultSet * self;
	GeeIterator* result = NULL;
	GeeMap* _tmp0_ = NULL;
	GeeIterator* _tmp1_ = NULL;
	self = (SynapseResultSet*) base;
	_tmp0_ = self->matches;
	_tmp1_ = gee_iterable_iterator ((GeeIterable*) _tmp0_);
	result = _tmp1_;
	return result;
}


static gboolean synapse_result_set_real_foreach (GeeTraversable* base, GeeForallFunc func, void* func_target) {
	SynapseResultSet * self;
	gboolean result = FALSE;
	GeeMap* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
	GeeForallFunc _tmp4_ = NULL;
	void* _tmp4__target = NULL;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	self = (SynapseResultSet*) base;
	_tmp0_ = self->matches;
	_tmp1_ = gee_map_get_keys (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp4_ = func;
	_tmp4__target = func_target;
	_tmp5_ = gee_traversable_foreach ((GeeTraversable*) _tmp3_, _tmp4_, _tmp4__target);
	_tmp6_ = _tmp5_;
	_g_object_unref0 (_tmp3_);
	result = _tmp6_;
	return result;
}


void synapse_result_set_add (SynapseResultSet* self, SynapseMatch* match, gint relevancy) {
	GeeMap* _tmp0_ = NULL;
	SynapseMatch* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	SynapseMatch* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (match != NULL);
	_tmp0_ = self->matches;
	_tmp1_ = match;
	_tmp2_ = relevancy;
	gee_map_set (_tmp0_, _tmp1_, (gpointer) ((gintptr) _tmp2_));
	_tmp3_ = match;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, SYNAPSE_TYPE_URI_MATCH)) {
		const gchar* uri = NULL;
		SynapseMatch* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		gboolean _tmp7_ = FALSE;
		const gchar* _tmp8_ = NULL;
		_tmp4_ = match;
		_tmp5_ = synapse_uri_match_get_uri (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, SYNAPSE_TYPE_URI_MATCH) ? ((SynapseUriMatch*) _tmp4_) : NULL);
		_tmp6_ = _tmp5_;
		uri = _tmp6_;
		_tmp8_ = uri;
		if (_tmp8_ != NULL) {
			const gchar* _tmp9_ = NULL;
			_tmp9_ = uri;
			_tmp7_ = g_strcmp0 (_tmp9_, "") != 0;
		} else {
			_tmp7_ = FALSE;
		}
		if (_tmp7_) {
			GeeSet* _tmp10_ = NULL;
			const gchar* _tmp11_ = NULL;
			_tmp10_ = self->uris;
			_tmp11_ = uri;
			gee_collection_add ((GeeCollection*) _tmp10_, _tmp11_);
		}
	}
}


void synapse_result_set_add_all (SynapseResultSet* self, SynapseResultSet* rs) {
	SynapseResultSet* _tmp0_ = NULL;
	GeeMap* _tmp1_ = NULL;
	SynapseResultSet* _tmp2_ = NULL;
	GeeMap* _tmp3_ = NULL;
	GeeSet* _tmp4_ = NULL;
	SynapseResultSet* _tmp5_ = NULL;
	GeeSet* _tmp6_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = rs;
	if (_tmp0_ == NULL) {
		return;
	}
	_tmp1_ = self->matches;
	_tmp2_ = rs;
	_tmp3_ = _tmp2_->matches;
	gee_map_set_all (_tmp1_, _tmp3_);
	_tmp4_ = self->uris;
	_tmp5_ = rs;
	_tmp6_ = _tmp5_->uris;
	gee_collection_add_all ((GeeCollection*) _tmp4_, (GeeCollection*) _tmp6_);
}


gboolean synapse_result_set_contains_uri (SynapseResultSet* self, const gchar* uri) {
	gboolean result = FALSE;
	GeeSet* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (uri != NULL, FALSE);
	_tmp0_ = self->uris;
	_tmp1_ = uri;
	_tmp2_ = gee_collection_contains ((GeeCollection*) _tmp0_, _tmp1_);
	result = _tmp2_;
	return result;
}


static gint __lambda7_ (SynapseResultSet* self, GeeMapEntry* a, GeeMapEntry* b) {
	gint result = 0;
	GeeMapEntry* e1 = NULL;
	GeeMapEntry* _tmp0_ = NULL;
	GeeMapEntry* e2 = NULL;
	GeeMapEntry* _tmp1_ = NULL;
	gint relevancy_delta = 0;
	GeeMapEntry* _tmp2_ = NULL;
	gconstpointer _tmp3_ = NULL;
	gint _tmp4_ = 0;
	GeeMapEntry* _tmp5_ = NULL;
	gconstpointer _tmp6_ = NULL;
	gint _tmp7_ = 0;
	gint _tmp8_ = 0;
	g_return_val_if_fail (a != NULL, 0);
	g_return_val_if_fail (b != NULL, 0);
	_tmp0_ = a;
	e1 = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_MAP_TYPE_ENTRY, GeeMapEntry);
	_tmp1_ = b;
	e2 = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, GEE_MAP_TYPE_ENTRY, GeeMapEntry);
	_tmp2_ = e2;
	_tmp3_ = gee_map_entry_get_value (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = e1;
	_tmp6_ = gee_map_entry_get_value (_tmp5_);
	_tmp7_ = _tmp6_;
	relevancy_delta = ((gint) ((gintptr) _tmp4_)) - ((gint) ((gintptr) _tmp7_));
	_tmp8_ = relevancy_delta;
	if (_tmp8_ != 0) {
		result = relevancy_delta;
		return result;
	} else {
		GeeMapEntry* _tmp9_ = NULL;
		gconstpointer _tmp10_ = NULL;
		SynapseMatch* _tmp11_ = NULL;
		const gchar* _tmp12_ = NULL;
		const gchar* _tmp13_ = NULL;
		GeeMapEntry* _tmp14_ = NULL;
		gconstpointer _tmp15_ = NULL;
		SynapseMatch* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
		const gchar* _tmp18_ = NULL;
		gint _tmp19_ = 0;
		_tmp9_ = e1;
		_tmp10_ = gee_map_entry_get_key (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = synapse_match_get_title ((SynapseMatch*) _tmp11_);
		_tmp13_ = _tmp12_;
		_tmp14_ = e2;
		_tmp15_ = gee_map_entry_get_key (_tmp14_);
		_tmp16_ = _tmp15_;
		_tmp17_ = synapse_match_get_title ((SynapseMatch*) _tmp16_);
		_tmp18_ = _tmp17_;
		_tmp19_ = g_ascii_strcasecmp (_tmp13_, _tmp18_);
		result = _tmp19_;
		return result;
	}
}


static gint ___lambda7__gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self) {
	gint result;
	result = __lambda7_ ((SynapseResultSet*) self, (GeeMapEntry*) a, (GeeMapEntry*) b);
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GeeList* synapse_result_set_get_sorted_list (SynapseResultSet* self) {
	GeeList* result = NULL;
	GeeArrayList* l = NULL;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	GeeMap* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
	GeeSet* _tmp4_ = NULL;
	GeeSet* _tmp5_ = NULL;
	GeeArrayList* _tmp6_ = NULL;
	GeeArrayList* sorted_list = NULL;
	GeeArrayList* _tmp7_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = gee_array_list_new (GEE_MAP_TYPE_ENTRY, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	l = _tmp0_;
	_tmp1_ = l;
	_tmp2_ = self->matches;
	_tmp3_ = gee_map_get_entries (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = _tmp4_;
	gee_array_list_add_all (_tmp1_, (GeeCollection*) _tmp5_);
	_g_object_unref0 (_tmp5_);
	_tmp6_ = l;
	gee_list_sort ((GeeList*) _tmp6_, ___lambda7__gcompare_data_func, g_object_ref (self), g_object_unref);
	_tmp7_ = gee_array_list_new (SYNAPSE_TYPE_MATCH, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	sorted_list = _tmp7_;
	{
		GeeArrayList* _m_list = NULL;
		GeeArrayList* _tmp8_ = NULL;
		GeeArrayList* _tmp9_ = NULL;
		gint _m_size = 0;
		GeeArrayList* _tmp10_ = NULL;
		gint _tmp11_ = 0;
		gint _tmp12_ = 0;
		gint _m_index = 0;
		_tmp8_ = l;
		_tmp9_ = _g_object_ref0 (_tmp8_);
		_m_list = _tmp9_;
		_tmp10_ = _m_list;
		_tmp11_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp10_);
		_tmp12_ = _tmp11_;
		_m_size = _tmp12_;
		_m_index = -1;
		while (TRUE) {
			gint _tmp13_ = 0;
			gint _tmp14_ = 0;
			gint _tmp15_ = 0;
			GeeMapEntry* m = NULL;
			GeeArrayList* _tmp16_ = NULL;
			gint _tmp17_ = 0;
			gpointer _tmp18_ = NULL;
			GeeArrayList* _tmp19_ = NULL;
			GeeMapEntry* _tmp20_ = NULL;
			gconstpointer _tmp21_ = NULL;
			SynapseMatch* _tmp22_ = NULL;
			_tmp13_ = _m_index;
			_m_index = _tmp13_ + 1;
			_tmp14_ = _m_index;
			_tmp15_ = _m_size;
			if (!(_tmp14_ < _tmp15_)) {
				break;
			}
			_tmp16_ = _m_list;
			_tmp17_ = _m_index;
			_tmp18_ = gee_abstract_list_get ((GeeAbstractList*) _tmp16_, _tmp17_);
			m = (GeeMapEntry*) _tmp18_;
			_tmp19_ = sorted_list;
			_tmp20_ = m;
			_tmp21_ = gee_map_entry_get_key (_tmp20_);
			_tmp22_ = _tmp21_;
			gee_abstract_collection_add ((GeeAbstractCollection*) _tmp19_, (SynapseMatch*) _tmp22_);
			_g_object_unref0 (m);
		}
		_g_object_unref0 (_m_list);
	}
	result = (GeeList*) sorted_list;
	_g_object_unref0 (l);
	return result;
}


static GType synapse_result_set_real_get_element_type (GeeTraversable* base) {
	GType result;
	SynapseResultSet* self;
	GeeMap* _tmp0_ = NULL;
	GType _tmp1_ = 0UL;
	GType _tmp2_ = 0UL;
	self = (SynapseResultSet*) base;
	_tmp0_ = self->matches;
	_tmp1_ = gee_traversable_get_element_type ((GeeTraversable*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


gint synapse_result_set_get_size (SynapseResultSet* self) {
	gint result;
	GeeMap* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->matches;
	_tmp1_ = gee_map_get_size (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


GeeSet* synapse_result_set_get_keys (SynapseResultSet* self) {
	GeeSet* result;
	GeeMap* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->matches;
	_tmp1_ = gee_map_get_keys (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


GeeSet* synapse_result_set_get_entries (SynapseResultSet* self) {
	GeeSet* result;
	GeeMap* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->matches;
	_tmp1_ = gee_map_get_entries (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


static GObject * synapse_result_set_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	SynapseResultSet * self;
	GeeHashMap* _tmp0_ = NULL;
	GeeHashSet* _tmp1_ = NULL;
	parent_class = G_OBJECT_CLASS (synapse_result_set_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SYNAPSE_TYPE_RESULT_SET, SynapseResultSet);
	_tmp0_ = gee_hash_map_new (SYNAPSE_TYPE_MATCH, (GBoxedCopyFunc) g_object_ref, g_object_unref, G_TYPE_INT, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->matches);
	self->matches = (GeeMap*) _tmp0_;
	_tmp1_ = gee_hash_set_new (G_TYPE_STRING, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->uris);
	self->uris = (GeeSet*) _tmp1_;
	return obj;
}


static void synapse_result_set_class_init (SynapseResultSetClass * klass) {
	synapse_result_set_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->get_property = _vala_synapse_result_set_get_property;
	G_OBJECT_CLASS (klass)->constructor = synapse_result_set_constructor;
	G_OBJECT_CLASS (klass)->finalize = synapse_result_set_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_ELEMENT_TYPE, g_param_spec_gtype ("element-type", "element-type", "element-type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_SIZE, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_KEYS, g_param_spec_object ("keys", "keys", "keys", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_ENTRIES, g_param_spec_object ("entries", "entries", "entries", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static GType synapse_result_set_gee_traversable_get_g_type (SynapseResultSet* self) {
	return SYNAPSE_TYPE_MATCH;
}


static GBoxedCopyFunc synapse_result_set_gee_traversable_get_g_dup_func (SynapseResultSet* self) {
	return g_object_ref;
}


static GDestroyNotify synapse_result_set_gee_traversable_get_g_destroy_func (SynapseResultSet* self) {
	return g_object_unref;
}


static void synapse_result_set_gee_traversable_interface_init (GeeTraversableIface * iface) {
	synapse_result_set_gee_traversable_parent_iface = g_type_interface_peek_parent (iface);
	iface->foreach = (gboolean (*)(GeeTraversable*, GeeForallFunc, void*)) synapse_result_set_real_foreach;
	iface->get_g_type = (GType(*)(GeeTraversable*)) synapse_result_set_gee_traversable_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc(*)(GeeTraversable*)) synapse_result_set_gee_traversable_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify(*)(GeeTraversable*)) synapse_result_set_gee_traversable_get_g_destroy_func;
	iface->get_element_type = synapse_result_set_real_get_element_type;
}


static GType synapse_result_set_gee_iterable_get_g_type (SynapseResultSet* self) {
	return GEE_MAP_TYPE_ENTRY;
}


static GBoxedCopyFunc synapse_result_set_gee_iterable_get_g_dup_func (SynapseResultSet* self) {
	return g_object_ref;
}


static GDestroyNotify synapse_result_set_gee_iterable_get_g_destroy_func (SynapseResultSet* self) {
	return g_object_unref;
}


static void synapse_result_set_gee_iterable_interface_init (GeeIterableIface * iface) {
	synapse_result_set_gee_iterable_parent_iface = g_type_interface_peek_parent (iface);
	iface->iterator = (GeeIterator* (*)(GeeIterable*)) synapse_result_set_real_iterator;
	iface->get_g_type = (GType(*)(GeeIterable*)) synapse_result_set_gee_iterable_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc(*)(GeeIterable*)) synapse_result_set_gee_iterable_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify(*)(GeeIterable*)) synapse_result_set_gee_iterable_get_g_destroy_func;
}


static void synapse_result_set_instance_init (SynapseResultSet * self) {
}


static void synapse_result_set_finalize (GObject* obj) {
	SynapseResultSet * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SYNAPSE_TYPE_RESULT_SET, SynapseResultSet);
	_g_object_unref0 (self->matches);
	_g_object_unref0 (self->uris);
	G_OBJECT_CLASS (synapse_result_set_parent_class)->finalize (obj);
}


GType synapse_result_set_get_type (void) {
	static volatile gsize synapse_result_set_type_id__volatile = 0;
	if (g_once_init_enter (&synapse_result_set_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SynapseResultSetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) synapse_result_set_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SynapseResultSet), 0, (GInstanceInitFunc) synapse_result_set_instance_init, NULL };
		static const GInterfaceInfo gee_traversable_info = { (GInterfaceInitFunc) synapse_result_set_gee_traversable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo gee_iterable_info = { (GInterfaceInitFunc) synapse_result_set_gee_iterable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType synapse_result_set_type_id;
		synapse_result_set_type_id = g_type_register_static (G_TYPE_OBJECT, "SynapseResultSet", &g_define_type_info, 0);
		g_type_add_interface_static (synapse_result_set_type_id, GEE_TYPE_TRAVERSABLE, &gee_traversable_info);
		g_type_add_interface_static (synapse_result_set_type_id, GEE_TYPE_ITERABLE, &gee_iterable_info);
		g_once_init_leave (&synapse_result_set_type_id__volatile, synapse_result_set_type_id);
	}
	return synapse_result_set_type_id__volatile;
}


static void _vala_synapse_result_set_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SynapseResultSet * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SYNAPSE_TYPE_RESULT_SET, SynapseResultSet);
	switch (property_id) {
		case SYNAPSE_RESULT_SET_ELEMENT_TYPE:
		g_value_set_gtype (value, gee_traversable_get_element_type ((GeeTraversable*) self));
		break;
		case SYNAPSE_RESULT_SET_SIZE:
		g_value_set_int (value, synapse_result_set_get_size (self));
		break;
		case SYNAPSE_RESULT_SET_KEYS:
		g_value_take_object (value, synapse_result_set_get_keys (self));
		break;
		case SYNAPSE_RESULT_SET_ENTRIES:
		g_value_take_object (value, synapse_result_set_get_entries (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


