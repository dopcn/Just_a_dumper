//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHMediaSourceManager.h"

@class SVPDownloadRequest;

@interface SHVideoSourceManager : SHMediaSourceManager
{
    unsigned long long _currentRequestId;
    SVPDownloadRequest *_requestItem;
}

@property(retain, nonatomic) SVPDownloadRequest *requestItem; // @synthesize requestItem=_requestItem;
@property(nonatomic) unsigned long long currentRequestId; // @synthesize currentRequestId=_currentRequestId;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)loadLiveVideoDetailInfo:(id)arg1;
- (void)loadVideoDetailInfo:(id)arg1;
- (void)loadVideoItemWidthMedia:(id)arg1;
- (void)resetData;
- (void)dealloc;

@end

