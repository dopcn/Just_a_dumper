//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QAVTimeConsumeInfo : NSObject
{
    unsigned long long _enterroom_start;
    unsigned long long _enterroom_request_auth_key_and_int_svr_conn_info_start;
    unsigned long long _enterroom_net_channel_send_app_cmd_start;
    unsigned long long _enterroom_net_channel_send_app_cmd_end;
    unsigned long long _enterroom_request_auth_key_and_int_svr_conn_info_end;
    unsigned long long _enterroom_init_avsdk_core_start;
    unsigned long long _enterroom_init_avsdk_core_end;
    unsigned long long _enterroom_init_audio_device_start;
    unsigned long long _enterroom_init_audio_device_end;
    unsigned long long _enterroom_init_video_device_start;
    unsigned long long _enterroom_init_video_device_end;
    unsigned long long _enterroom_request_enter_room_start;
    unsigned long long _enterroom_connect_start;
    unsigned long long _enterroom_connect_end;
    unsigned long long _enterroom_send_request_enter_room_cmd_start;
    unsigned long long _enterroom_send_request_enter_room_cmd_end;
    unsigned long long _enterroom_request_enter_room_end;
    unsigned long long _enterroom_end;
    unsigned long long _requestview_start;
    unsigned long long _requestview_send_request_cmd_start;
    unsigned long long _requestview_send_request_cmd_end;
    unsigned long long _requestview_end;
    unsigned long long _recvdata_start;
    unsigned long long _recvdata_recv_first_udt_pkg;
    unsigned long long _recvdata_send_first_pkg_to_dec;
    unsigned long long _recvdata_decode_first_frame_end;
    unsigned long long _recvdata_discard_first_frame;
    unsigned long long _recvdata_end;
}

@property(nonatomic) unsigned long long recvdata_end; // @synthesize recvdata_end=_recvdata_end;
@property(nonatomic) unsigned long long recvdata_discard_first_frame; // @synthesize recvdata_discard_first_frame=_recvdata_discard_first_frame;
@property(nonatomic) unsigned long long recvdata_decode_first_frame_end; // @synthesize recvdata_decode_first_frame_end=_recvdata_decode_first_frame_end;
@property(nonatomic) unsigned long long recvdata_send_first_pkg_to_dec; // @synthesize recvdata_send_first_pkg_to_dec=_recvdata_send_first_pkg_to_dec;
@property(nonatomic) unsigned long long recvdata_recv_first_udt_pkg; // @synthesize recvdata_recv_first_udt_pkg=_recvdata_recv_first_udt_pkg;
@property(nonatomic) unsigned long long recvdata_start; // @synthesize recvdata_start=_recvdata_start;
@property(nonatomic) unsigned long long requestview_end; // @synthesize requestview_end=_requestview_end;
@property(nonatomic) unsigned long long requestview_send_request_cmd_end; // @synthesize requestview_send_request_cmd_end=_requestview_send_request_cmd_end;
@property(nonatomic) unsigned long long requestview_send_request_cmd_start; // @synthesize requestview_send_request_cmd_start=_requestview_send_request_cmd_start;
@property(nonatomic) unsigned long long requestview_start; // @synthesize requestview_start=_requestview_start;
@property(nonatomic) unsigned long long enterroom_end; // @synthesize enterroom_end=_enterroom_end;
@property(nonatomic) unsigned long long enterroom_request_enter_room_end; // @synthesize enterroom_request_enter_room_end=_enterroom_request_enter_room_end;
@property(nonatomic) unsigned long long enterroom_send_request_enter_room_cmd_end; // @synthesize enterroom_send_request_enter_room_cmd_end=_enterroom_send_request_enter_room_cmd_end;
@property(nonatomic) unsigned long long enterroom_send_request_enter_room_cmd_start; // @synthesize enterroom_send_request_enter_room_cmd_start=_enterroom_send_request_enter_room_cmd_start;
@property(nonatomic) unsigned long long enterroom_connect_end; // @synthesize enterroom_connect_end=_enterroom_connect_end;
@property(nonatomic) unsigned long long enterroom_connect_start; // @synthesize enterroom_connect_start=_enterroom_connect_start;
@property(nonatomic) unsigned long long enterroom_request_enter_room_start; // @synthesize enterroom_request_enter_room_start=_enterroom_request_enter_room_start;
@property(nonatomic) unsigned long long enterroom_init_video_device_end; // @synthesize enterroom_init_video_device_end=_enterroom_init_video_device_end;
@property(nonatomic) unsigned long long enterroom_init_video_device_start; // @synthesize enterroom_init_video_device_start=_enterroom_init_video_device_start;
@property(nonatomic) unsigned long long enterroom_init_audio_device_end; // @synthesize enterroom_init_audio_device_end=_enterroom_init_audio_device_end;
@property(nonatomic) unsigned long long enterroom_init_audio_device_start; // @synthesize enterroom_init_audio_device_start=_enterroom_init_audio_device_start;
@property(nonatomic) unsigned long long enterroom_init_avsdk_core_end; // @synthesize enterroom_init_avsdk_core_end=_enterroom_init_avsdk_core_end;
@property(nonatomic) unsigned long long enterroom_init_avsdk_core_start; // @synthesize enterroom_init_avsdk_core_start=_enterroom_init_avsdk_core_start;
@property(nonatomic) unsigned long long enterroom_request_auth_key_and_int_svr_conn_info_end; // @synthesize enterroom_request_auth_key_and_int_svr_conn_info_end=_enterroom_request_auth_key_and_int_svr_conn_info_end;
@property(nonatomic) unsigned long long enterroom_net_channel_send_app_cmd_end; // @synthesize enterroom_net_channel_send_app_cmd_end=_enterroom_net_channel_send_app_cmd_end;
@property(nonatomic) unsigned long long enterroom_net_channel_send_app_cmd_start; // @synthesize enterroom_net_channel_send_app_cmd_start=_enterroom_net_channel_send_app_cmd_start;
@property(nonatomic) unsigned long long enterroom_request_auth_key_and_int_svr_conn_info_start; // @synthesize enterroom_request_auth_key_and_int_svr_conn_info_start=_enterroom_request_auth_key_and_int_svr_conn_info_start;
@property(nonatomic) unsigned long long enterroom_start; // @synthesize enterroom_start=_enterroom_start;

@end

