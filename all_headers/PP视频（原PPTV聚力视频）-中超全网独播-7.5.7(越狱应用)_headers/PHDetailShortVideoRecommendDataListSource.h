//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PCModuleDataListSource-Protocol.h"
#import "PPDataControllerDelegate-Protocol.h"

@class BUShortVideoRecommendDataController, NSString;
@protocol PCModuleDataListSourceDelegate;

@interface PHDetailShortVideoRecommendDataListSource : NSObject <PPDataControllerDelegate, PCModuleDataListSource>
{
    id <PCModuleDataListSourceDelegate> _delegate;
    NSString *_newsId;
    BUShortVideoRecommendDataController *_shortVideoRecommendDataController;
}

@property(retain, nonatomic) BUShortVideoRecommendDataController *shortVideoRecommendDataController; // @synthesize shortVideoRecommendDataController=_shortVideoRecommendDataController;
@property(copy, nonatomic) NSString *newsId; // @synthesize newsId=_newsId;
@property(nonatomic) __weak id <PCModuleDataListSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadingData:(id)arg1 failedWithError:(id)arg2;
- (void)loadingDataFinished:(id)arg1;
- (void)requestModuleDataListForModule:(id)arg1;
- (id)initWithPageModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

