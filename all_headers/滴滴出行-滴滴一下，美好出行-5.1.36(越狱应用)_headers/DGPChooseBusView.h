//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DGCFixedRowHeightTableContainerView.h"

@class DGPTransferSegmentModel, DGPTransferSolutionListModel, DGPTransferViewModel, UILabel, UIView;

@interface DGPChooseBusView : DGCFixedRowHeightTableContainerView
{
    _Bool _isForCurrentTime;
    DGPTransferSolutionListModel *_listModel;
    DGPTransferViewModel *_segmentViewModel;
    CDUnknownBlockType _chooseBusAction;
    DGPTransferSegmentModel *_segmentModel;
    long long _transitIndex;
    long long _segmentIndex;
    UIView *_titleBackgroundView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleBackgroundView; // @synthesize titleBackgroundView=_titleBackgroundView;
@property(nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(nonatomic) long long transitIndex; // @synthesize transitIndex=_transitIndex;
@property(nonatomic) _Bool isForCurrentTime; // @synthesize isForCurrentTime=_isForCurrentTime;
@property(retain, nonatomic) DGPTransferSegmentModel *segmentModel; // @synthesize segmentModel=_segmentModel;
@property(copy, nonatomic) CDUnknownBlockType chooseBusAction; // @synthesize chooseBusAction=_chooseBusAction;
@property(retain, nonatomic) DGPTransferViewModel *segmentViewModel; // @synthesize segmentViewModel=_segmentViewModel;
@property(retain, nonatomic) DGPTransferSolutionListModel *listModel; // @synthesize listModel=_listModel;
- (void).cxx_destruct;
- (void)didSelectModel:(id)arg1;
- (id)constructDataArray;
- (void)reloadData;
- (void)updateWithModel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configConstraints;
- (void)setupTableView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

