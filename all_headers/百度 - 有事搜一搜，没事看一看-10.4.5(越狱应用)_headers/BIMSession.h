//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BIMBaseModel.h"

@class NSNumber, NSString;
@protocol BIMChatObject;

@interface BIMSession : BIMBaseModel
{
    long long _status;
    long long _type;
    long long _child_type;
    NSString *_photoUrl;
    NSString *_name;
    long long _is_upmark;
    long long _upmark_time;
    NSString *_sessionId;
    NSNumber *_target;
    NSNumber *_category;
    NSString *_message;
    NSNumber *_unreadCount;
    NSNumber *_updateTime;
    NSNumber *_pa_uid;
    NSNumber *_bd_uid;
    NSNumber *_chatType;
    id <BIMChatObject> _chatObject;
    NSNumber *_classifyType;
    NSString *_classifyTitle;
    NSString *_classifyAvatar;
    NSNumber *_classifyShow;
    NSNumber *_session_status;
    NSNumber *_session_type;
    NSNumber *_session_child_type;
    NSString *_sessionFile;
    NSNumber *_msgid;
    NSNumber *_cacheStatus;
}

@property(retain, nonatomic) NSNumber *cacheStatus; // @synthesize cacheStatus=_cacheStatus;
@property(retain, nonatomic) NSNumber *msgid; // @synthesize msgid=_msgid;
@property(retain, nonatomic) NSString *sessionFile; // @synthesize sessionFile=_sessionFile;
@property(retain, nonatomic) NSNumber *session_child_type; // @synthesize session_child_type=_session_child_type;
@property(retain, nonatomic) NSNumber *session_type; // @synthesize session_type=_session_type;
@property(retain, nonatomic) NSNumber *session_status; // @synthesize session_status=_session_status;
@property(retain, nonatomic) NSNumber *classifyShow; // @synthesize classifyShow=_classifyShow;
@property(retain, nonatomic) NSString *classifyAvatar; // @synthesize classifyAvatar=_classifyAvatar;
@property(retain, nonatomic) NSString *classifyTitle; // @synthesize classifyTitle=_classifyTitle;
@property(retain, nonatomic) NSNumber *classifyType; // @synthesize classifyType=_classifyType;
@property(retain, nonatomic) id <BIMChatObject> chatObject; // @synthesize chatObject=_chatObject;
@property(retain, nonatomic) NSNumber *chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSNumber *bd_uid; // @synthesize bd_uid=_bd_uid;
@property(retain, nonatomic) NSNumber *pa_uid; // @synthesize pa_uid=_pa_uid;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSNumber *unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(retain, nonatomic) NSNumber *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
- (void).cxx_destruct;
@property(nonatomic) long long upmark_time; // @synthesize upmark_time=_upmark_time;
@property(nonatomic) long long is_upmark; // @synthesize is_upmark=_is_upmark;
@property(nonatomic) long long child_type; // @synthesize child_type=_child_type;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)init;

@end

