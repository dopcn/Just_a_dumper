//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNBaseModelObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface KBVideoAuthorResponseModule : QNBaseModelObject <NSCopying, NSCoding>
{
    _Bool _isFromHostTransView;
    NSString *_nickName;
    NSString *_avatarUrl;
    NSString *_desc;
    NSString *_quin;
    long long _videosCount;
}

+ (id)build:(CDUnknownBlockType)arg1;
+ (_Bool)isImmutable;
@property(nonatomic) _Bool isFromHostTransView; // @synthesize isFromHostTransView=_isFromHostTransView;
@property(nonatomic) long long videosCount; // @synthesize videosCount=_videosCount;
@property(copy, nonatomic) NSString *quin; // @synthesize quin=_quin;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (id)copyInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

