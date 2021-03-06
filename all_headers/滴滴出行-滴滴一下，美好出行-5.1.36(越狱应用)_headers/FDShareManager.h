//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ONEShareControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, ONEShareController;

@interface FDShareManager : NSObject <ONEShareControllerDelegate>
{
    ONEShareController *_shareController;
    NSMutableDictionary *_eventBlocks;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareManager;
@property(retain, nonatomic) NSMutableDictionary *eventBlocks; // @synthesize eventBlocks=_eventBlocks;
@property(retain, nonatomic) ONEShareController *shareController; // @synthesize shareController=_shareController;
- (void).cxx_destruct;
- (void)shareControllerShareFailed:(long long)arg1 withError:(id)arg2;
- (void)shareControllerShareCanceled:(long long)arg1;
- (void)shareControllerShareSuccess:(long long)arg1;
- (void)shareData:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3 onSelected:(CDUnknownBlockType)arg4;
- (void)shareData:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

