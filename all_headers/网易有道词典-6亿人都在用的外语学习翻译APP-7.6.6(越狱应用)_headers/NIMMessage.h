//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NIMAntiSpamOption, NIMMessageApnsMemberOption, NIMMessageSetting, NIMSession, NSDictionary, NSString;
@protocol NIMMessageObject;

@interface NIMMessage : NSObject
{
    _Bool _isPlayed;
    _Bool _ignoreUnreadCountWhenDeleted;
    _Bool _markAsResend;
    long long _status;
    NIMSession *_session;
    long long _messageType;
    NSString *_from;
    NSString *_messageId;
    NSString *_text;
    id <NIMMessageObject> _messageObject;
    NIMMessageSetting *_setting;
    NIMAntiSpamOption *_antiSpamOption;
    NSString *_apnsContent;
    NSDictionary *_apnsPayload;
    NIMMessageApnsMemberOption *_apnsMemberOption;
    NSDictionary *_remoteExt;
    NSDictionary *_localExt;
    id _messageExt;
    double _timestamp;
    long long _serialID;
    NSString *_serverID;
    long long _subStatus;
    NSString *_rawAttachContent;
    long long _clientType;
    NSString *_senderName;
}

@property(nonatomic) _Bool markAsResend; // @synthesize markAsResend=_markAsResend;
@property(nonatomic) _Bool ignoreUnreadCountWhenDeleted; // @synthesize ignoreUnreadCountWhenDeleted=_ignoreUnreadCountWhenDeleted;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *rawAttachContent; // @synthesize rawAttachContent=_rawAttachContent;
@property(nonatomic) long long subStatus; // @synthesize subStatus=_subStatus;
@property(copy, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(nonatomic) long long serialID; // @synthesize serialID=_serialID;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) id messageExt; // @synthesize messageExt=_messageExt;
@property(copy, nonatomic) NSDictionary *localExt; // @synthesize localExt=_localExt;
@property(copy, nonatomic) NSDictionary *remoteExt; // @synthesize remoteExt=_remoteExt;
@property(retain, nonatomic) NIMMessageApnsMemberOption *apnsMemberOption; // @synthesize apnsMemberOption=_apnsMemberOption;
@property(copy, nonatomic) NSDictionary *apnsPayload; // @synthesize apnsPayload=_apnsPayload;
@property(copy, nonatomic) NSString *apnsContent; // @synthesize apnsContent=_apnsContent;
@property(retain, nonatomic) NIMAntiSpamOption *antiSpamOption; // @synthesize antiSpamOption=_antiSpamOption;
@property(retain, nonatomic) NIMMessageSetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) id <NIMMessageObject> messageObject; // @synthesize messageObject=_messageObject;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NIMSession *session; // @synthesize session=_session;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)shouldPersist;
- (_Bool)shouldCountUnread;
- (void)saveDataAfterReceiving:(_Bool)arg1;
@property(readonly, nonatomic) long long senderClientType;
- (void)updateSubStatusAndAutoRefresh:(long long)arg1;
- (long long)status:(long long)arg1 flag:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isRemoteRead;
@property(nonatomic) _Bool tryDownloadOnce;
@property(nonatomic) _Bool isReceivedMsg;
@property(readonly, nonatomic) _Bool isDeleted;
@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(nonatomic) _Bool isDeliveried;
@property(readonly, nonatomic) _Bool isOutgoingMsg;
@property(readonly, nonatomic) long long attachmentDownloadState;
@property(readonly, nonatomic) long long deliveryState;
- (_Bool)needUploadAttachment;
- (id)prepareForDownLoad;
- (id)prepareForReSend;
- (id)prepareForSend;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (struct Property)toRevokeProperty;

@end

