//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JumpToNativeModelProtocol-Protocol.h"

@class NSDictionary, NSString, ShareModel;

@interface JDWatchJumpModel : NSObject <JumpToNativeModelProtocol>
{
    NSString *_des;
    NSDictionary *_params;
    ShareModel *_shareModel;
}

@property(retain, nonatomic) ShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool noAnimate;
@property(readonly) Class superclass;

@end

