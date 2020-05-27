#ifndef MS_PAYLOAD_CHANNEL_NOTIFICATION_HPP
#define MS_PAYLOAD_CHANNEL_NOTIFICATION_HPP

#include "common.hpp"
#include <json.hpp>
#include <string>
#include <unordered_map>

using json = nlohmann::json;

namespace PayloadChannel
{
	class Notification
	{
	public:
		enum class EventId
		{
			DATA_PRODUCER_SEND = 1
		};

	private:
		static std::unordered_map<std::string, EventId> string2EventId;

	public:
		Notification(json& jsonNotification);
		virtual ~Notification();

	public:
		void SetPayload(const uint8_t* payload, size_t payloadLen);

	public:
		// Passed by argument.
		std::string event;
		EventId eventId;
		json internal;
		json data;
		const uint8_t* payload{ nullptr };
		size_t payloadLen{ 0u };
	};
} // namespace PayloadChannel

#endif
