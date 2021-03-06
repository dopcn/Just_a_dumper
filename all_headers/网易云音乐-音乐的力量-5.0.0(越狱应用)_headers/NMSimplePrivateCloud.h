//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NMSimplePrivateCloud : NSObject <NSCopying>
{
    NSString *_artistName;
    NSString *_albumName;
    NSString *_coverPicId;
    NSString *_ownerUserId;
    NSString *_ownerUserName;
    NSString *_songName;
}

@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *ownerUserName; // @synthesize ownerUserName=_ownerUserName;
@property(retain, nonatomic) NSString *ownerUserId; // @synthesize ownerUserId=_ownerUserId;
@property(retain, nonatomic) NSString *coverPicId; // @synthesize coverPicId=_coverPicId;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void).cxx_destruct;
- (id)proxyForJson;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithMyPrivateCloud:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

