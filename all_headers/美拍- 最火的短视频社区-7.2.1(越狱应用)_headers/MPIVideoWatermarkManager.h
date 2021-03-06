//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPIVideoSave;
@protocol OS_dispatch_queue;

@interface MPIVideoWatermarkManager : NSObject
{
    _Bool _isEditing;
    NSObject<OS_dispatch_queue> *_watermarkQueue;
    MPIVideoSave *_saveHelper;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) MPIVideoSave *saveHelper; // @synthesize saveHelper=_saveHelper;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *watermarkQueue; // @synthesize watermarkQueue=_watermarkQueue;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)tempVideoPathOfSavingToAblum:(id)arg1;
- (void)asyncAddWatermark;
- (void)setupObserver;
- (void)addWatermarkToVideo:(id)arg1 outputFilePath:(id)arg2 watermark:(id)arg3;
- (id)init;

@end

