/**
* 文件说明：格式转化
* 作者：wfcao
* 参考：baidu aip
*/

#ifndef __CONVERT_H_
#define __CONVERT_H_

#include <string>

#define CAOLIB_API __declspec(dllexport)
namespace Convert
{
	static const std::string base64_chars =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789+/";
	static inline bool is_base64(const char c);
	CAOLIB_API std::string base64_encode(const char * bytes_to_encode, unsigned int in_len);
	CAOLIB_API std::string base64_decode(std::string const & encoded_string);
}
#endif//__CONVERT_H_