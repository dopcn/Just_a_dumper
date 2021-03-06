//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDPStorage, NSMutableArray, NSString, TBCVideoPlayerReportItem, TBCVideoPlayerReportModel;

@interface TBCVideoPlayerReportManager : NSObject
{
    NSString *_uuid;
    NSString *_tid;
    NSString *_videoUrl;
    double _playDuration;
    NSMutableArray *_reportStorage;
    TBCVideoPlayerReportModel *_model;
    TBCVideoPlayerReportItem *_reportItem;
    IDPStorage *_diskStorage;
}

@property(retain, nonatomic) IDPStorage *diskStorage; // @synthesize diskStorage=_diskStorage;
@property(retain, nonatomic) TBCVideoPlayerReportItem *reportItem; // @synthesize reportItem=_reportItem;
@property(retain, nonatomic) TBCVideoPlayerReportModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *reportStorage; // @synthesize reportStorage=_reportStorage;
@property(nonatomic) double playDuration; // @synthesize playDuration=_playDuration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)loadingStartitem;
- (id)realStoppedItem;
- (id)finalErrorItem;
- (_Bool)isRealStoppedItem:(id)arg1;
- (_Bool)isFinalErrorItem:(id)arg1;
- (id)debugItemWithType:(unsigned long long)arg1;
- (void)calculateKPIInfo;
- (void)sendReport:(id)arg1;
- (void)saveReportToStorage;
- (id)dictForError:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)calculateAndSave;
- (void)addReportDebugItem:(id)arg1;
- (void)initialDebugInfo;
- (void)initialKPIInfo;
- (void)locatorEventHandler:(id)arg1;
- (void)accessLocation;
- (void)reportSimpleError:(id)arg1 source:(unsigned long long)arg2;
- (void)initialBaseInfo;
- (id)init;
- (void)dealloc;

@end

