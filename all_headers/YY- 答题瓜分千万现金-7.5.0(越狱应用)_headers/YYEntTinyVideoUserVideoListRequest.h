//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IEntRequest-Protocol.h"

@class NSString;

@interface YYEntTinyVideoUserVideoListRequest : NSObject <IEntRequest>
{
    _Bool _includeShenqu;
    unsigned long long _uid;
    unsigned long long _offset;
    unsigned long long _count;
}

+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(nonatomic) _Bool includeShenqu; // @synthesize includeShenqu=_includeShenqu;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (id)marshall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

