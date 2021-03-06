//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKTableViewItem.h"

#import "TPKTableViewItemProtocol-Protocol.h"

@class NSString, RACSignal, TPKPOICommentViewModel;

@interface TPKPOIHeaderInfoTitleItem : TPKTableViewItem <TPKTableViewItemProtocol>
{
    _Bool _hideCellBottomLine;
    RACSignal *_titleSignal;
    TPKPOICommentViewModel *_commentViewModel;
    double _titleWidth;
    double _titleHeight;
    CDUnknownBlockType _didClickCommentCell;
}

@property(copy, nonatomic) CDUnknownBlockType didClickCommentCell; // @synthesize didClickCommentCell=_didClickCommentCell;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(retain, nonatomic) TPKPOICommentViewModel *commentViewModel; // @synthesize commentViewModel=_commentViewModel;
@property(retain, nonatomic) RACSignal *titleSignal; // @synthesize titleSignal=_titleSignal;
@property(nonatomic) _Bool hideCellBottomLine; // @synthesize hideCellBottomLine=_hideCellBottomLine;
- (void).cxx_destruct;
- (long long)selectionStyle;
- (void)setupFeedback:(id)arg1;
- (void)bindSignalWithInfoModel:(id)arg1 feedBack:(id)arg2;
- (id)initWithPOIInfo:(id)arg1 feedBack:(id)arg2;

// Remaining properties
@property(nonatomic) double cellBottomLineMargin;
@property(nonatomic) double cellTopLineMargin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideCellTopLine;
@property(readonly) Class superclass;

@end

