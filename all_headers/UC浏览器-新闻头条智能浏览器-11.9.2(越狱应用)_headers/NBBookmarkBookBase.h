//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NBNetworkResData-Protocol.h"
#import "UCJSONSerializeProtocol-Protocol.h"

@class NBBookmarkBookInfo, NSString;

@interface NBBookmarkBookBase : NSObject <UCJSONSerializeProtocol, NBNetworkResData>
{
    long long _id;
    long long _vertical_type;
    NBBookmarkBookInfo *_data;
}

+ (id)ignoreProperty;
@property(retain, nonatomic) NBBookmarkBookInfo *data; // @synthesize data=_data;
@property(nonatomic) long long vertical_type; // @synthesize vertical_type=_vertical_type;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

