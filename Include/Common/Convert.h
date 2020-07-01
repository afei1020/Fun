/**
* 文件说明：格式转化
* 作者：wfcao
* 参考：baidu aip
*/

#ifndef __CONVERT_H_
#define __CONVERT_H_

#include <string>

#define CAOLIB_API __declspec(dllexport)
namespace cao_api
{
	class CAOLIB_API CConvert
	{
	public:
		std::string base64_encode(const char * bytes_to_encode, unsigned int in_len);
		std::string base64_decode(std::string const & encoded_string);
	private:
		inline bool is_base64(const char c);
	private:
		const std::string base64_chars ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	};
}
#endif//__CONVERT_H_