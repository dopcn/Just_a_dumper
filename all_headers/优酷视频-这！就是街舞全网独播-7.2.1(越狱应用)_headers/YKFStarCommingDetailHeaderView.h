//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "APBCHoveringPlayerCellProtocol-Protocol.h"

@class NSString, YKFStarArrivalHeaderView, YKFStarArrivalStarInfoCell, YKFStarArrivalStarInfoViewModel, YKFStarArrivalWarmUpVideoViewModel;

@interface YKFStarCommingDetailHeaderView : UIView <APBCHoveringPlayerCellProtocol>
{
    CDUnknownBlockType _playActionBlock;
    YKFStarArrivalStarInfoCell *_infoCell;
    YKFStarArrivalStarInfoViewModel *_infoVM;
    YKFStarArrivalHeaderView *_videoCell;
    YKFStarArrivalWarmUpVideoViewModel *_videoVM;
}

@property(retain, nonatomic) YKFStarArrivalWarmUpVideoViewModel *videoVM; // @synthesize videoVM=_videoVM;
@property(retain, nonatomic) YKFStarArrivalHeaderView *videoCell; // @synthesize videoCell=_videoCell;
@property(retain, nonatomic) YKFStarArrivalStarInfoViewModel *infoVM; // @synthesize infoVM=_infoVM;
@property(retain, nonatomic) YKFStarArrivalStarInfoCell *infoCell; // @synthesize infoCell=_infoCell;
@property(copy, nonatomic) CDUnknownBlockType playActionBlock; // @synthesize playActionBlock=_playActionBlock;
- (void).cxx_destruct;
- (void)requestPlayResourceWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updatePlayState:(unsigned long long)arg1 playTime:(float)arg2;
- (_Bool)supportHoveringPlay;
- (id)playerLayer;
- (void)userAddFandomStateChanged:(_Bool)arg1;
- (void)updateHeaderViewWithDetailsPO:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

