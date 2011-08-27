// MESSAGE TEST_TYPES PACKING

#define MAVLINK_MSG_ID_TEST_TYPES 0

typedef struct __mavlink_test_types_t
{
 char c; ///< char
 char s[10]; ///< string
 uint8_t u8; ///< uint8_t
 uint16_t u16; ///< uint16_t
 uint32_t u32; ///< uint32_t
 uint64_t u64; ///< uint64_t
 int8_t s8; ///< int8_t
 int16_t s16; ///< int16_t
 int32_t s32; ///< int32_t
 int64_t s64; ///< int64_t
 float f; ///< float
 double d; ///< double
 uint8_t u8_array[3]; ///< uint8_t_array
 uint16_t u16_array[3]; ///< uint16_t_array
 uint32_t u32_array[3]; ///< uint32_t_array
 uint64_t u64_array[3]; ///< uint64_t_array
 int8_t s8_array[3]; ///< int8_t_array
 int16_t s16_array[3]; ///< int16_t_array
 int32_t s32_array[3]; ///< int32_t_array
 int64_t s64_array[3]; ///< int64_t_array
 float f_array[3]; ///< float_array
 double d_array[3]; ///< double_array
} mavlink_test_types_t;

#define MAVLINK_MSG_ID_TEST_TYPES_LEN 179
#define MAVLINK_MSG_ID_0_LEN 179

#define MAVLINK_MSG_TEST_TYPES_FIELD_S_LEN 10
#define MAVLINK_MSG_TEST_TYPES_FIELD_U8_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_U16_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_U32_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_U64_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_S8_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_S16_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_S32_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_S64_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_F_ARRAY_LEN 3
#define MAVLINK_MSG_TEST_TYPES_FIELD_D_ARRAY_LEN 3

#define MAVLINK_MESSAGE_INFO_TEST_TYPES { \
	"TEST_TYPES", \
	22, \
	{  { "c", MAVLINK_TYPE_CHAR, 0, 0, offsetof(mavlink_test_types_t, c) }, \
         { "s", MAVLINK_TYPE_CHAR, 10, 1, offsetof(mavlink_test_types_t, s) }, \
         { "u8", MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_test_types_t, u8) }, \
         { "u16", MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_test_types_t, u16) }, \
         { "u32", MAVLINK_TYPE_UINT32_T, 0, 14, offsetof(mavlink_test_types_t, u32) }, \
         { "u64", MAVLINK_TYPE_UINT64_T, 0, 18, offsetof(mavlink_test_types_t, u64) }, \
         { "s8", MAVLINK_TYPE_INT8_T, 0, 26, offsetof(mavlink_test_types_t, s8) }, \
         { "s16", MAVLINK_TYPE_INT16_T, 0, 27, offsetof(mavlink_test_types_t, s16) }, \
         { "s32", MAVLINK_TYPE_INT32_T, 0, 29, offsetof(mavlink_test_types_t, s32) }, \
         { "s64", MAVLINK_TYPE_INT64_T, 0, 33, offsetof(mavlink_test_types_t, s64) }, \
         { "f", MAVLINK_TYPE_FLOAT, 0, 41, offsetof(mavlink_test_types_t, f) }, \
         { "d", MAVLINK_TYPE_DOUBLE, 0, 45, offsetof(mavlink_test_types_t, d) }, \
         { "u8_array", MAVLINK_TYPE_UINT8_T, 3, 53, offsetof(mavlink_test_types_t, u8_array) }, \
         { "u16_array", MAVLINK_TYPE_UINT16_T, 3, 56, offsetof(mavlink_test_types_t, u16_array) }, \
         { "u32_array", MAVLINK_TYPE_UINT32_T, 3, 62, offsetof(mavlink_test_types_t, u32_array) }, \
         { "u64_array", MAVLINK_TYPE_UINT64_T, 3, 74, offsetof(mavlink_test_types_t, u64_array) }, \
         { "s8_array", MAVLINK_TYPE_INT8_T, 3, 98, offsetof(mavlink_test_types_t, s8_array) }, \
         { "s16_array", MAVLINK_TYPE_INT16_T, 3, 101, offsetof(mavlink_test_types_t, s16_array) }, \
         { "s32_array", MAVLINK_TYPE_INT32_T, 3, 107, offsetof(mavlink_test_types_t, s32_array) }, \
         { "s64_array", MAVLINK_TYPE_INT64_T, 3, 119, offsetof(mavlink_test_types_t, s64_array) }, \
         { "f_array", MAVLINK_TYPE_FLOAT, 3, 143, offsetof(mavlink_test_types_t, f_array) }, \
         { "d_array", MAVLINK_TYPE_DOUBLE, 3, 155, offsetof(mavlink_test_types_t, d_array) }, \
         } \
}


/**
 * @brief Pack a test_types message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param c char
 * @param s string
 * @param u8 uint8_t
 * @param u16 uint16_t
 * @param u32 uint32_t
 * @param u64 uint64_t
 * @param s8 int8_t
 * @param s16 int16_t
 * @param s32 int32_t
 * @param s64 int64_t
 * @param f float
 * @param d double
 * @param u8_array uint8_t_array
 * @param u16_array uint16_t_array
 * @param u32_array uint32_t_array
 * @param u64_array uint64_t_array
 * @param s8_array int8_t_array
 * @param s16_array int16_t_array
 * @param s32_array int32_t_array
 * @param s64_array int64_t_array
 * @param f_array float_array
 * @param d_array double_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_types_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       char c, const char *s, uint8_t u8, uint16_t u16, uint32_t u32, uint64_t u64, int8_t s8, int16_t s16, int32_t s32, int64_t s64, float f, double d, const uint8_t *u8_array, const uint16_t *u16_array, const uint32_t *u32_array, const uint64_t *u64_array, const int8_t *s8_array, const int16_t *s16_array, const int32_t *s32_array, const int64_t *s64_array, const float *f_array, const double *d_array)
{
	msg->msgid = MAVLINK_MSG_ID_TEST_TYPES;

	put_char_by_index(msg, 0, c); // char
	put_char_array_by_index(msg, 1, s, 10); // string
	put_uint8_t_by_index(msg, 11, u8); // uint8_t
	put_uint16_t_by_index(msg, 12, u16); // uint16_t
	put_uint32_t_by_index(msg, 14, u32); // uint32_t
	put_uint64_t_by_index(msg, 18, u64); // uint64_t
	put_int8_t_by_index(msg, 26, s8); // int8_t
	put_int16_t_by_index(msg, 27, s16); // int16_t
	put_int32_t_by_index(msg, 29, s32); // int32_t
	put_int64_t_by_index(msg, 33, s64); // int64_t
	put_float_by_index(msg, 41, f); // float
	put_double_by_index(msg, 45, d); // double
	put_uint8_t_array_by_index(msg, 53, u8_array, 3); // uint8_t_array
	put_uint16_t_array_by_index(msg, 56, u16_array, 3); // uint16_t_array
	put_uint32_t_array_by_index(msg, 62, u32_array, 3); // uint32_t_array
	put_uint64_t_array_by_index(msg, 74, u64_array, 3); // uint64_t_array
	put_int8_t_array_by_index(msg, 98, s8_array, 3); // int8_t_array
	put_int16_t_array_by_index(msg, 101, s16_array, 3); // int16_t_array
	put_int32_t_array_by_index(msg, 107, s32_array, 3); // int32_t_array
	put_int64_t_array_by_index(msg, 119, s64_array, 3); // int64_t_array
	put_float_array_by_index(msg, 143, f_array, 3); // float_array
	put_double_array_by_index(msg, 155, d_array, 3); // double_array

	return mavlink_finalize_message(msg, system_id, component_id, 179, 91);
}

/**
 * @brief Pack a test_types message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param c char
 * @param s string
 * @param u8 uint8_t
 * @param u16 uint16_t
 * @param u32 uint32_t
 * @param u64 uint64_t
 * @param s8 int8_t
 * @param s16 int16_t
 * @param s32 int32_t
 * @param s64 int64_t
 * @param f float
 * @param d double
 * @param u8_array uint8_t_array
 * @param u16_array uint16_t_array
 * @param u32_array uint32_t_array
 * @param u64_array uint64_t_array
 * @param s8_array int8_t_array
 * @param s16_array int16_t_array
 * @param s32_array int32_t_array
 * @param s64_array int64_t_array
 * @param f_array float_array
 * @param d_array double_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_types_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           char c,const char *s,uint8_t u8,uint16_t u16,uint32_t u32,uint64_t u64,int8_t s8,int16_t s16,int32_t s32,int64_t s64,float f,double d,const uint8_t *u8_array,const uint16_t *u16_array,const uint32_t *u32_array,const uint64_t *u64_array,const int8_t *s8_array,const int16_t *s16_array,const int32_t *s32_array,const int64_t *s64_array,const float *f_array,const double *d_array)
{
	msg->msgid = MAVLINK_MSG_ID_TEST_TYPES;

	put_char_by_index(msg, 0, c); // char
	put_char_array_by_index(msg, 1, s, 10); // string
	put_uint8_t_by_index(msg, 11, u8); // uint8_t
	put_uint16_t_by_index(msg, 12, u16); // uint16_t
	put_uint32_t_by_index(msg, 14, u32); // uint32_t
	put_uint64_t_by_index(msg, 18, u64); // uint64_t
	put_int8_t_by_index(msg, 26, s8); // int8_t
	put_int16_t_by_index(msg, 27, s16); // int16_t
	put_int32_t_by_index(msg, 29, s32); // int32_t
	put_int64_t_by_index(msg, 33, s64); // int64_t
	put_float_by_index(msg, 41, f); // float
	put_double_by_index(msg, 45, d); // double
	put_uint8_t_array_by_index(msg, 53, u8_array, 3); // uint8_t_array
	put_uint16_t_array_by_index(msg, 56, u16_array, 3); // uint16_t_array
	put_uint32_t_array_by_index(msg, 62, u32_array, 3); // uint32_t_array
	put_uint64_t_array_by_index(msg, 74, u64_array, 3); // uint64_t_array
	put_int8_t_array_by_index(msg, 98, s8_array, 3); // int8_t_array
	put_int16_t_array_by_index(msg, 101, s16_array, 3); // int16_t_array
	put_int32_t_array_by_index(msg, 107, s32_array, 3); // int32_t_array
	put_int64_t_array_by_index(msg, 119, s64_array, 3); // int64_t_array
	put_float_array_by_index(msg, 143, f_array, 3); // float_array
	put_double_array_by_index(msg, 155, d_array, 3); // double_array

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 179, 91);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a test_types message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param c char
 * @param s string
 * @param u8 uint8_t
 * @param u16 uint16_t
 * @param u32 uint32_t
 * @param u64 uint64_t
 * @param s8 int8_t
 * @param s16 int16_t
 * @param s32 int32_t
 * @param s64 int64_t
 * @param f float
 * @param d double
 * @param u8_array uint8_t_array
 * @param u16_array uint16_t_array
 * @param u32_array uint32_t_array
 * @param u64_array uint64_t_array
 * @param s8_array int8_t_array
 * @param s16_array int16_t_array
 * @param s32_array int32_t_array
 * @param s64_array int64_t_array
 * @param f_array float_array
 * @param d_array double_array
 */
static inline void mavlink_msg_test_types_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           char c,const char *s,uint8_t u8,uint16_t u16,uint32_t u32,uint64_t u64,int8_t s8,int16_t s16,int32_t s32,int64_t s64,float f,double d,const uint8_t *u8_array,const uint16_t *u16_array,const uint32_t *u32_array,const uint64_t *u64_array,const int8_t *s8_array,const int16_t *s16_array,const int32_t *s32_array,const int64_t *s64_array,const float *f_array,const double *d_array)
{
	msg->msgid = MAVLINK_MSG_ID_TEST_TYPES;

	put_char_by_index(msg, 0, c); // char
	put_char_array_by_index(msg, 1, s, 10); // string
	put_uint8_t_by_index(msg, 11, u8); // uint8_t
	put_uint16_t_by_index(msg, 12, u16); // uint16_t
	put_uint32_t_by_index(msg, 14, u32); // uint32_t
	put_uint64_t_by_index(msg, 18, u64); // uint64_t
	put_int8_t_by_index(msg, 26, s8); // int8_t
	put_int16_t_by_index(msg, 27, s16); // int16_t
	put_int32_t_by_index(msg, 29, s32); // int32_t
	put_int64_t_by_index(msg, 33, s64); // int64_t
	put_float_by_index(msg, 41, f); // float
	put_double_by_index(msg, 45, d); // double
	put_uint8_t_array_by_index(msg, 53, u8_array, 3); // uint8_t_array
	put_uint16_t_array_by_index(msg, 56, u16_array, 3); // uint16_t_array
	put_uint32_t_array_by_index(msg, 62, u32_array, 3); // uint32_t_array
	put_uint64_t_array_by_index(msg, 74, u64_array, 3); // uint64_t_array
	put_int8_t_array_by_index(msg, 98, s8_array, 3); // int8_t_array
	put_int16_t_array_by_index(msg, 101, s16_array, 3); // int16_t_array
	put_int32_t_array_by_index(msg, 107, s32_array, 3); // int32_t_array
	put_int64_t_array_by_index(msg, 119, s64_array, 3); // int64_t_array
	put_float_array_by_index(msg, 143, f_array, 3); // float_array
	put_double_array_by_index(msg, 155, d_array, 3); // double_array

	mavlink_finalize_message_chan_send(msg, chan, 179, 91);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a test_types struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_types C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_types_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_types_t* test_types)
{
	return mavlink_msg_test_types_pack(system_id, component_id, msg, test_types->c, test_types->s, test_types->u8, test_types->u16, test_types->u32, test_types->u64, test_types->s8, test_types->s16, test_types->s32, test_types->s64, test_types->f, test_types->d, test_types->u8_array, test_types->u16_array, test_types->u32_array, test_types->u64_array, test_types->s8_array, test_types->s16_array, test_types->s32_array, test_types->s64_array, test_types->f_array, test_types->d_array);
}

/**
 * @brief Send a test_types message
 * @param chan MAVLink channel to send the message
 *
 * @param c char
 * @param s string
 * @param u8 uint8_t
 * @param u16 uint16_t
 * @param u32 uint32_t
 * @param u64 uint64_t
 * @param s8 int8_t
 * @param s16 int16_t
 * @param s32 int32_t
 * @param s64 int64_t
 * @param f float
 * @param d double
 * @param u8_array uint8_t_array
 * @param u16_array uint16_t_array
 * @param u32_array uint32_t_array
 * @param u64_array uint64_t_array
 * @param s8_array int8_t_array
 * @param s16_array int16_t_array
 * @param s32_array int32_t_array
 * @param s64_array int64_t_array
 * @param f_array float_array
 * @param d_array double_array
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_types_send(mavlink_channel_t chan, char c, const char *s, uint8_t u8, uint16_t u16, uint32_t u32, uint64_t u64, int8_t s8, int16_t s16, int32_t s32, int64_t s64, float f, double d, const uint8_t *u8_array, const uint16_t *u16_array, const uint32_t *u32_array, const uint64_t *u64_array, const int8_t *s8_array, const int16_t *s16_array, const int32_t *s32_array, const int64_t *s64_array, const float *f_array, const double *d_array)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 179);
	mavlink_msg_test_types_pack_chan_send(chan, msg, c, s, u8, u16, u32, u64, s8, s16, s32, s64, f, d, u8_array, u16_array, u32_array, u64_array, s8_array, s16_array, s32_array, s64_array, f_array, d_array);
}

#endif

// MESSAGE TEST_TYPES UNPACKING


/**
 * @brief Get field c from test_types message
 *
 * @return char
 */
static inline char mavlink_msg_test_types_get_c(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_char(msg,  0);
}

/**
 * @brief Get field s from test_types message
 *
 * @return string
 */
static inline uint16_t mavlink_msg_test_types_get_s(const mavlink_message_t* msg, char *s)
{
	return MAVLINK_MSG_RETURN_char_array(msg, s, 10,  1);
}

/**
 * @brief Get field u8 from test_types message
 *
 * @return uint8_t
 */
static inline uint8_t mavlink_msg_test_types_get_u8(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field u16 from test_types message
 *
 * @return uint16_t
 */
static inline uint16_t mavlink_msg_test_types_get_u16(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field u32 from test_types message
 *
 * @return uint32_t
 */
static inline uint32_t mavlink_msg_test_types_get_u32(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint32_t(msg,  14);
}

/**
 * @brief Get field u64 from test_types message
 *
 * @return uint64_t
 */
static inline uint64_t mavlink_msg_test_types_get_u64(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint64_t(msg,  18);
}

/**
 * @brief Get field s8 from test_types message
 *
 * @return int8_t
 */
static inline int8_t mavlink_msg_test_types_get_s8(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int8_t(msg,  26);
}

/**
 * @brief Get field s16 from test_types message
 *
 * @return int16_t
 */
static inline int16_t mavlink_msg_test_types_get_s16(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int16_t(msg,  27);
}

/**
 * @brief Get field s32 from test_types message
 *
 * @return int32_t
 */
static inline int32_t mavlink_msg_test_types_get_s32(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int32_t(msg,  29);
}

/**
 * @brief Get field s64 from test_types message
 *
 * @return int64_t
 */
static inline int64_t mavlink_msg_test_types_get_s64(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int64_t(msg,  33);
}

/**
 * @brief Get field f from test_types message
 *
 * @return float
 */
static inline float mavlink_msg_test_types_get_f(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  41);
}

/**
 * @brief Get field d from test_types message
 *
 * @return double
 */
static inline double mavlink_msg_test_types_get_d(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_double(msg,  45);
}

/**
 * @brief Get field u8_array from test_types message
 *
 * @return uint8_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_u8_array(const mavlink_message_t* msg, uint8_t *u8_array)
{
	return MAVLINK_MSG_RETURN_uint8_t_array(msg, u8_array, 3,  53);
}

/**
 * @brief Get field u16_array from test_types message
 *
 * @return uint16_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_u16_array(const mavlink_message_t* msg, uint16_t *u16_array)
{
	return MAVLINK_MSG_RETURN_uint16_t_array(msg, u16_array, 3,  56);
}

/**
 * @brief Get field u32_array from test_types message
 *
 * @return uint32_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_u32_array(const mavlink_message_t* msg, uint32_t *u32_array)
{
	return MAVLINK_MSG_RETURN_uint32_t_array(msg, u32_array, 3,  62);
}

/**
 * @brief Get field u64_array from test_types message
 *
 * @return uint64_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_u64_array(const mavlink_message_t* msg, uint64_t *u64_array)
{
	return MAVLINK_MSG_RETURN_uint64_t_array(msg, u64_array, 3,  74);
}

/**
 * @brief Get field s8_array from test_types message
 *
 * @return int8_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_s8_array(const mavlink_message_t* msg, int8_t *s8_array)
{
	return MAVLINK_MSG_RETURN_int8_t_array(msg, s8_array, 3,  98);
}

/**
 * @brief Get field s16_array from test_types message
 *
 * @return int16_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_s16_array(const mavlink_message_t* msg, int16_t *s16_array)
{
	return MAVLINK_MSG_RETURN_int16_t_array(msg, s16_array, 3,  101);
}

/**
 * @brief Get field s32_array from test_types message
 *
 * @return int32_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_s32_array(const mavlink_message_t* msg, int32_t *s32_array)
{
	return MAVLINK_MSG_RETURN_int32_t_array(msg, s32_array, 3,  107);
}

/**
 * @brief Get field s64_array from test_types message
 *
 * @return int64_t_array
 */
static inline uint16_t mavlink_msg_test_types_get_s64_array(const mavlink_message_t* msg, int64_t *s64_array)
{
	return MAVLINK_MSG_RETURN_int64_t_array(msg, s64_array, 3,  119);
}

/**
 * @brief Get field f_array from test_types message
 *
 * @return float_array
 */
static inline uint16_t mavlink_msg_test_types_get_f_array(const mavlink_message_t* msg, float *f_array)
{
	return MAVLINK_MSG_RETURN_float_array(msg, f_array, 3,  143);
}

/**
 * @brief Get field d_array from test_types message
 *
 * @return double_array
 */
static inline uint16_t mavlink_msg_test_types_get_d_array(const mavlink_message_t* msg, double *d_array)
{
	return MAVLINK_MSG_RETURN_double_array(msg, d_array, 3,  155);
}

/**
 * @brief Decode a test_types message into a struct
 *
 * @param msg The message to decode
 * @param test_types C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_types_decode(const mavlink_message_t* msg, mavlink_test_types_t* test_types)
{
#if MAVLINK_NEED_BYTE_SWAP
	test_types->c = mavlink_msg_test_types_get_c(msg);
	mavlink_msg_test_types_get_s(msg, test_types->s);
	test_types->u8 = mavlink_msg_test_types_get_u8(msg);
	test_types->u16 = mavlink_msg_test_types_get_u16(msg);
	test_types->u32 = mavlink_msg_test_types_get_u32(msg);
	test_types->u64 = mavlink_msg_test_types_get_u64(msg);
	test_types->s8 = mavlink_msg_test_types_get_s8(msg);
	test_types->s16 = mavlink_msg_test_types_get_s16(msg);
	test_types->s32 = mavlink_msg_test_types_get_s32(msg);
	test_types->s64 = mavlink_msg_test_types_get_s64(msg);
	test_types->f = mavlink_msg_test_types_get_f(msg);
	test_types->d = mavlink_msg_test_types_get_d(msg);
	mavlink_msg_test_types_get_u8_array(msg, test_types->u8_array);
	mavlink_msg_test_types_get_u16_array(msg, test_types->u16_array);
	mavlink_msg_test_types_get_u32_array(msg, test_types->u32_array);
	mavlink_msg_test_types_get_u64_array(msg, test_types->u64_array);
	mavlink_msg_test_types_get_s8_array(msg, test_types->s8_array);
	mavlink_msg_test_types_get_s16_array(msg, test_types->s16_array);
	mavlink_msg_test_types_get_s32_array(msg, test_types->s32_array);
	mavlink_msg_test_types_get_s64_array(msg, test_types->s64_array);
	mavlink_msg_test_types_get_f_array(msg, test_types->f_array);
	mavlink_msg_test_types_get_d_array(msg, test_types->d_array);
#else
	memcpy(test_types, MAVLINK_PAYLOAD(msg), 179);
#endif
}
