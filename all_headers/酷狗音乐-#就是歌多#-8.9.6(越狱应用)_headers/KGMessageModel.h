//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface KGMessageModel : NSObject
{
    _Bool _denyByYourPartner;
    int _msgType;
    int _arep;
    long long _msgId;
    NSString *_addtime;
    NSString *_tag;
    NSString *_uid;
    NSDictionary *_message;
    unsigned long long _status;
    NSString *_bzType;
}

+ (id)operateWithHistoryDic:(id)arg1;
@property(nonatomic) int arep; // @synthesize arep=_arep;
@property(copy, nonatomic) NSString *bzType; // @synthesize bzType=_bzType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool denyByYourPartner; // @synthesize denyByYourPartner=_denyByYourPartner;
@property(retain, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *addtime; // @synthesize addtime=_addtime;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

