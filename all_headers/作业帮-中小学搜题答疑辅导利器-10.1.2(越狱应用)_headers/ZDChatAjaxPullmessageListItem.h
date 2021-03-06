//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSString;
@protocol Optional;

@interface ZDChatAjaxPullmessageListItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _hasChatColorPrivilege;
    long long _uid;
    long long _touid;
    long long _id;
    NSString *_content;
    NSString *_uname;
    long long _privilegeType;
    long long _privilegeSubtype;
    long long _type;
    long long _createTime;
    NSString *_avatar;
}

@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long privilegeSubtype; // @synthesize privilegeSubtype=_privilegeSubtype;
@property(nonatomic) long long privilegeType; // @synthesize privilegeType=_privilegeType;
@property(copy, nonatomic) NSString *uname; // @synthesize uname=_uname;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(nonatomic) long long touid; // @synthesize touid=_touid;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long hasChatColorPrivilege; // @synthesize hasChatColorPrivilege=_hasChatColorPrivilege;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

