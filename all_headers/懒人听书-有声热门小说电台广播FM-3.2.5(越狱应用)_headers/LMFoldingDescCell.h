//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMRBaseTableViewCell.h"

#import "DTAttributedTextContentViewDelegate-Protocol.h"
#import "DTLazyImageViewDelegate-Protocol.h"

@class DTAttributedLabel, NSDictionary, NSString, UIButton, UIFont, UIView;
@protocol LMFoldingDescCellDelegate;

@interface LMFoldingDescCell : LMRBaseTableViewCell <DTAttributedTextContentViewDelegate, DTLazyImageViewDelegate>
{
    _Bool _isSpreadOut;
    CDUnknownBlockType _spreadOutBlock;
    id _dataSource;
    double _cellHeight;
    id <LMFoldingDescCellDelegate> _delegate;
    long long _foldingNum;
    DTAttributedLabel *_descLabel;
    UIButton *_showAllBtn;
    UIFont *_font14;
    NSDictionary *_attribute;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) NSDictionary *attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) UIFont *font14; // @synthesize font14=_font14;
@property(retain, nonatomic) UIButton *showAllBtn; // @synthesize showAllBtn=_showAllBtn;
@property(retain, nonatomic) DTAttributedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) long long foldingNum; // @synthesize foldingNum=_foldingNum;
@property(nonatomic) id <LMFoldingDescCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool isSpreadOut; // @synthesize isSpreadOut=_isSpreadOut;
@property(copy, nonatomic) CDUnknownBlockType spreadOutBlock; // @synthesize spreadOutBlock=_spreadOutBlock;
- (void).cxx_destruct;
- (void)linkPushed:(id)arg1;
- (id)attributedTextContentView:(id)arg1 viewForAttributedString:(id)arg2 frame:(struct CGRect)arg3;
- (struct _NSRange)getMaxRangeWithLines:(id)arg1;
- (id)stirngHandleSpaceChar:(id)arg1;
- (void)onTapGestureTapEvent:(id)arg1;
- (void)handleDescWithDescString:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)setDescText:(id)arg1;
- (id)attributesForUserText;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)configAutoLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

