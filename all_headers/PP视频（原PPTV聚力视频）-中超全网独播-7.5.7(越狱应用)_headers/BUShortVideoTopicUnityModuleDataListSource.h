//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUChangeNextGroupModuleDataListSource.h"

#import "PPDataControllerDelegate-Protocol.h"

@class BUShortVideoAuthor, BUShortVideoAuthorDataController, BUShortVideoTopicUnityModuleInfo, ChannelDetail, NSString, PPDetailDataController;

@interface BUShortVideoTopicUnityModuleDataListSource : BUChangeNextGroupModuleDataListSource <PPDataControllerDelegate>
{
    long long _loadingPage;
    BUShortVideoAuthor *_author;
    ChannelDetail *_chnDetail;
    BUShortVideoAuthorDataController *_shortVideoDataController;
    PPDetailDataController *_longVideoDataController;
    BUShortVideoAuthor *_loadingAuthor;
    BUShortVideoTopicUnityModuleInfo *_loadingInfo;
}

@property(retain, nonatomic) BUShortVideoTopicUnityModuleInfo *loadingInfo; // @synthesize loadingInfo=_loadingInfo;
@property(retain, nonatomic) BUShortVideoAuthor *loadingAuthor; // @synthesize loadingAuthor=_loadingAuthor;
@property(retain, nonatomic) PPDetailDataController *longVideoDataController; // @synthesize longVideoDataController=_longVideoDataController;
@property(retain, nonatomic) BUShortVideoAuthorDataController *shortVideoDataController; // @synthesize shortVideoDataController=_shortVideoDataController;
@property(retain, nonatomic) ChannelDetail *chnDetail; // @synthesize chnDetail=_chnDetail;
@property(retain, nonatomic) BUShortVideoAuthor *author; // @synthesize author=_author;
@property(nonatomic) long long loadingPage; // @synthesize loadingPage=_loadingPage;
- (void).cxx_destruct;
- (void)loadingData:(id)arg1 failedWithError:(id)arg2;
- (void)loadingDataFinished:(id)arg1;
- (void)cancelRequestModuleDataListForModule:(id)arg1;
- (void)requestLongVideoWithVid:(id)arg1;
- (void)requestModuleDataListForModule:(id)arg1;
- (void)changeToPage:(long long)arg1 forMouduleData:(id)arg2;
- (void)setFirstPageWithModuleData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

