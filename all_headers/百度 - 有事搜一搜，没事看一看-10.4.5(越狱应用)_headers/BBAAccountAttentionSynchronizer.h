//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_group;

@interface BBAAccountAttentionSynchronizer : NSObject
{
    _Bool _isSynchronizing;
    _Bool _hasSynchronized;
    NSString *_currentLoginUK;
    NSObject<OS_dispatch_group> *_handleGroup;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasSynchronized; // @synthesize hasSynchronized=_hasSynchronized;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *handleGroup; // @synthesize handleGroup=_handleGroup;
@property(copy, nonatomic) NSString *currentLoginUK; // @synthesize currentLoginUK=_currentLoginUK;
@property(nonatomic) _Bool isSynchronizing; // @synthesize isSynchronizing=_isSynchronizing;
- (void).cxx_destruct;
- (void)ba_updateSynchronizeTime:(double)arg1;
- (double)ba_preSynchronizeTime;
- (id)ba_extractAttentionModeslWithInfos:(id)arg1;
- (id)ba_extractTopModelsWithItemsInfo:(id)arg1 dataSign:(id)arg2;
- (void)ba_handleSynchronizedResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)ba_buildSynchronizedPostParams;
- (void)markHasFinishAttentionInterset;
- (void)synchronize;
- (id)init;
- (void)reset;

@end

