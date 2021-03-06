//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSData, NSDictionary, NSString, QZJNsQqradioProtocolAction, QZJNsQqradioProtocolGeoInfo, QZJNsQqradioProtocolLBSInfo, QZJNsQqradioProtocolLiveShowRoomExtendInfo, QZJNsQqradioProtocolOutShare, QZJNsQqradioProtocolPicture, QZJNsQqradioProtocolRecordPlayInfo, QZJNsQqradioProtocolUser;

@interface QZJNsQqradioProtocolLiveShowRoomInfo : JceObjectV2
{
}

+ (id)jceType;
+ (void)initialize;

// Remaining properties
@property(retain, nonatomic, getter=jce_roomID, setter=setJce_roomID:) NSString *jcev2_p_0_o_roomID; // @dynamic jcev2_p_0_o_roomID;
@property(retain, nonatomic, getter=jce_share, setter=setJce_share:) QZJNsQqradioProtocolOutShare *jcev2_p_10_o_share; // @dynamic jcev2_p_10_o_share;
@property(nonatomic, getter=jce_score, setter=setJce_score:) int jcev2_p_11_o_score; // @dynamic jcev2_p_11_o_score;
@property(nonatomic, getter=jce_roomStatus, setter=setJce_roomStatus:) int jcev2_p_12_o_roomStatus; // @dynamic jcev2_p_12_o_roomStatus;
@property(retain, nonatomic, getter=jce_fileName, setter=setJce_fileName:) NSString *jcev2_p_13_o_fileName; // @dynamic jcev2_p_13_o_fileName;
@property(nonatomic, getter=jce_appointTime, setter=setJce_appointTime:) long long jcev2_p_14_o_appointTime; // @dynamic jcev2_p_14_o_appointTime;
@property(nonatomic, getter=jce_appointNum, setter=setJce_appointNum:) long long jcev2_p_15_o_appointNum; // @dynamic jcev2_p_15_o_appointNum;
@property(nonatomic, getter=jce_duration, setter=setJce_duration:) long long jcev2_p_16_o_duration; // @dynamic jcev2_p_16_o_duration;
@property(nonatomic, getter=jce_increaseFansNum, setter=setJce_increaseFansNum:) long long jcev2_p_17_o_increaseFansNum; // @dynamic jcev2_p_17_o_increaseFansNum;
@property(nonatomic, getter=jce_isEnableStartAppointLiveShow, setter=setJce_isEnableStartAppointLiveShow:) int jcev2_p_18_o_isEnableStartAppointLiveShow; // @dynamic jcev2_p_18_o_isEnableStartAppointLiveShow;
@property(nonatomic, getter=jce_cameraType, setter=setJce_cameraType:) int jcev2_p_19_o_cameraType; // @dynamic jcev2_p_19_o_cameraType;
@property(retain, nonatomic, getter=jce_roomName, setter=setJce_roomName:) NSString *jcev2_p_1_o_roomName; // @dynamic jcev2_p_1_o_roomName;
@property(nonatomic, getter=jce_enableGif, setter=setJce_enableGif:) int jcev2_p_20_o_enableGif; // @dynamic jcev2_p_20_o_enableGif;
@property(nonatomic, getter=jce_disableComment, setter=setJce_disableComment:) int jcev2_p_21_o_disableComment; // @dynamic jcev2_p_21_o_disableComment;
@property(nonatomic, getter=jce_roomRight, setter=setJce_roomRight:) long long jcev2_p_22_o_roomRight; // @dynamic jcev2_p_22_o_roomRight;
@property(retain, nonatomic, getter=jce_liveShowRoomExtendInfo, setter=setJce_liveShowRoomExtendInfo:) QZJNsQqradioProtocolLiveShowRoomExtendInfo *jcev2_p_23_o_liveShowRoomExtendInfo; // @dynamic jcev2_p_23_o_liveShowRoomExtendInfo;
@property(retain, nonatomic, getter=jce_multiVideoStreamUrl, setter=setJce_multiVideoStreamUrl:) NSString *jcev2_p_24_o_multiVideoStreamUrl; // @dynamic jcev2_p_24_o_multiVideoStreamUrl;
@property(nonatomic, getter=jce_isRecordVideo, setter=setJce_isRecordVideo:) int jcev2_p_25_o_isRecordVideo; // @dynamic jcev2_p_25_o_isRecordVideo;
@property(retain, nonatomic, getter=jce_recordPlayInfo, setter=setJce_recordPlayInfo:) QZJNsQqradioProtocolRecordPlayInfo *jcev2_p_26_o_recordPlayInfo; // @dynamic jcev2_p_26_o_recordPlayInfo;
@property(nonatomic, getter=jce_beignTime, setter=setJce_beignTime:) long long jcev2_p_27_o_beignTime; // @dynamic jcev2_p_27_o_beignTime;
@property(retain, nonatomic, getter=jce_videoRtmpUrl, setter=setJce_videoRtmpUrl:) NSString *jcev2_p_28_o_videoRtmpUrl; // @dynamic jcev2_p_28_o_videoRtmpUrl;
@property(retain, nonatomic, getter=jce_upStreamEngine, setter=setJce_upStreamEngine:) NSString *jcev2_p_29_o_upStreamEngine; // @dynamic jcev2_p_29_o_upStreamEngine;
@property(retain, nonatomic, getter=jce_owner, setter=setJce_owner:) QZJNsQqradioProtocolUser *jcev2_p_2_o_owner; // @dynamic jcev2_p_2_o_owner;
@property(retain, nonatomic, getter=jce_roomCreateQua, setter=setJce_roomCreateQua:) NSString *jcev2_p_30_o_roomCreateQua; // @dynamic jcev2_p_30_o_roomCreateQua;
@property(retain, nonatomic, getter=jce_videoHlsUrlMap, setter=setJce_videoHlsUrlMap:) NSDictionary *jcev2_p_31_o_videoHlsUrlMap__b0x9i_M09ONSNumberONSString; // @dynamic jcev2_p_31_o_videoHlsUrlMap__b0x9i_M09ONSNumberONSString;
@property(nonatomic, getter=jce_serverTimestamp, setter=setJce_serverTimestamp:) int jcev2_p_32_o_serverTimestamp; // @dynamic jcev2_p_32_o_serverTimestamp;
@property(nonatomic, getter=jce_serverClientTime, setter=setJce_serverClientTime:) int jcev2_p_33_o_serverClientTime; // @dynamic jcev2_p_33_o_serverClientTime;
@property(nonatomic, getter=jce_cameraStatus, setter=setJce_cameraStatus:) int jcev2_p_34_o_cameraStatus; // @dynamic jcev2_p_34_o_cameraStatus;
@property(retain, nonatomic, getter=jce_taglist, setter=setJce_taglist:) NSArray *jcev2_p_35_o_taglist__b0x9i_VONSString; // @dynamic jcev2_p_35_o_taglist__b0x9i_VONSString;
@property(nonatomic, getter=jce_isRoomAdmin, setter=setJce_isRoomAdmin:) BOOL jcev2_p_36_o_isRoomAdmin; // @dynamic jcev2_p_36_o_isRoomAdmin;
@property(nonatomic, getter=jce_roomRightV2, setter=setJce_roomRightV2:) long long jcev2_p_37_o_roomRightV2; // @dynamic jcev2_p_37_o_roomRightV2;
@property(nonatomic, getter=jce_appointStatus, setter=setJce_appointStatus:) int jcev2_p_38_o_appointStatus; // @dynamic jcev2_p_38_o_appointStatus;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QZJNsQqradioProtocolAction *jcev2_p_39_o_action; // @dynamic jcev2_p_39_o_action;
@property(retain, nonatomic, getter=jce_cover, setter=setJce_cover:) QZJNsQqradioProtocolPicture *jcev2_p_3_o_cover; // @dynamic jcev2_p_3_o_cover;
@property(retain, nonatomic, getter=jce_roomDesc, setter=setJce_roomDesc:) NSString *jcev2_p_40_o_roomDesc; // @dynamic jcev2_p_40_o_roomDesc;
@property(retain, nonatomic, getter=jce_backupRtmpUrl, setter=setJce_backupRtmpUrl:) NSArray *jcev2_p_41_o_backupRtmpUrl__b0x9i_VONSString; // @dynamic jcev2_p_41_o_backupRtmpUrl__b0x9i_VONSString;
@property(nonatomic, getter=jce_roomFeedDel, setter=setJce_roomFeedDel:) int jcev2_p_42_o_roomFeedDel; // @dynamic jcev2_p_42_o_roomFeedDel;
@property(retain, nonatomic, getter=jce_ugcId, setter=setJce_ugcId:) NSString *jcev2_p_43_o_ugcId; // @dynamic jcev2_p_43_o_ugcId;
@property(retain, nonatomic, getter=jce_upstreamChannelId, setter=setJce_upstreamChannelId:) NSString *jcev2_p_44_o_upstreamChannelId; // @dynamic jcev2_p_44_o_upstreamChannelId;
@property(retain, nonatomic, getter=jce_upstreamUrl, setter=setJce_upstreamUrl:) NSString *jcev2_p_45_o_upstreamUrl; // @dynamic jcev2_p_45_o_upstreamUrl;
@property(nonatomic, getter=jce_audioBeginTimestamp, setter=setJce_audioBeginTimestamp:) unsigned int jcev2_p_46_o_audioBeginTimestamp; // @dynamic jcev2_p_46_o_audioBeginTimestamp;
@property(nonatomic, getter=jce_supportRotate, setter=setJce_supportRotate:) _Bool jcev2_p_47_o_supportRotate; // @dynamic jcev2_p_47_o_supportRotate;
@property(nonatomic, getter=jce_useUrlType, setter=setJce_useUrlType:) int jcev2_p_48_o_useUrlType; // @dynamic jcev2_p_48_o_useUrlType;
@property(nonatomic, getter=jce_micOpenType, setter=setJce_micOpenType:) int jcev2_p_49_o_micOpenType; // @dynamic jcev2_p_49_o_micOpenType;
@property(retain, nonatomic, getter=jce_backgroundPic, setter=setJce_backgroundPic:) QZJNsQqradioProtocolPicture *jcev2_p_4_o_backgroundPic; // @dynamic jcev2_p_4_o_backgroundPic;
@property(retain, nonatomic, getter=jce_vecUid, setter=setJce_vecUid:) NSArray *jcev2_p_50_o_vecUid__b0x9i_VONSString; // @dynamic jcev2_p_50_o_vecUid__b0x9i_VONSString;
@property(nonatomic, getter=jce_showType, setter=setJce_showType:) int jcev2_p_51_o_showType; // @dynamic jcev2_p_51_o_showType;
@property(nonatomic, getter=jce_isEnableRecommend, setter=setJce_isEnableRecommend:) BOOL jcev2_p_52_o_isEnableRecommend; // @dynamic jcev2_p_52_o_isEnableRecommend;
@property(retain, nonatomic, getter=jce_lbsInfo, setter=setJce_lbsInfo:) QZJNsQqradioProtocolLBSInfo *jcev2_p_53_o_lbsInfo; // @dynamic jcev2_p_53_o_lbsInfo;
@property(retain, nonatomic, getter=jce_lightspot, setter=setJce_lightspot:) NSData *jcev2_p_54_o_lightspot; // @dynamic jcev2_p_54_o_lightspot;
@property(nonatomic, getter=jce_bIsInActivity, setter=setJce_bIsInActivity:) _Bool jcev2_p_55_o_bIsInActivity; // @dynamic jcev2_p_55_o_bIsInActivity;
@property(nonatomic, getter=jce_anchorEnableMic, setter=setJce_anchorEnableMic:) int jcev2_p_56_o_anchorEnableMic; // @dynamic jcev2_p_56_o_anchorEnableMic;
@property(nonatomic, getter=jce_anchorIncome, setter=setJce_anchorIncome:) int jcev2_p_57_o_anchorIncome; // @dynamic jcev2_p_57_o_anchorIncome;
@property(retain, nonatomic, getter=jce_gameDetailInfo, setter=setJce_gameDetailInfo:) NSData *jcev2_p_58_o_gameDetailInfo; // @dynamic jcev2_p_58_o_gameDetailInfo;
@property(nonatomic, getter=jce_totalNum, setter=setJce_totalNum:) long long jcev2_p_5_o_totalNum; // @dynamic jcev2_p_5_o_totalNum;
@property(nonatomic, getter=jce_onlineNum, setter=setJce_onlineNum:) long long jcev2_p_6_o_onlineNum; // @dynamic jcev2_p_6_o_onlineNum;
@property(retain, nonatomic, getter=jce_location, setter=setJce_location:) QZJNsQqradioProtocolGeoInfo *jcev2_p_7_o_location; // @dynamic jcev2_p_7_o_location;
@property(nonatomic, getter=jce_streamType, setter=setJce_streamType:) int jcev2_p_8_o_streamType; // @dynamic jcev2_p_8_o_streamType;
@property(retain, nonatomic, getter=jce_giftSenders, setter=setJce_giftSenders:) NSArray *jcev2_p_9_o_giftSenders__b0x9i_VOQZJNsQqradioProtocolGiftSender; // @dynamic jcev2_p_9_o_giftSenders__b0x9i_VOQZJNsQqradioProtocolGiftSender;

@end

