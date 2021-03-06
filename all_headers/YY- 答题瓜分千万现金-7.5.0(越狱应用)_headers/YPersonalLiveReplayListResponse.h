//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IEntResponse-Protocol.h"

@class NSArray, NSString;

@interface YPersonalLiveReplayListResponse : NSObject <IEntResponse>
{
    _Bool _isHasData;
    unsigned long long _result;
    long long _anchorId;
    NSArray *_replayList;
}

+ (id)objectUnmarshallFromData:(id)arg1;
+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(nonatomic) _Bool isHasData; // @synthesize isHasData=_isHasData;
@property(retain, nonatomic) NSArray *replayList; // @synthesize replayList=_replayList;
@property(nonatomic) long long anchorId; // @synthesize anchorId=_anchorId;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

