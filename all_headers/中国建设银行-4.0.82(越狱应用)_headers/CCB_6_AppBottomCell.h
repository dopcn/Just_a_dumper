//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

@class CCBRoundButton;

@interface CCB_6_AppBottomCell : CCBFormCell
{
    CCBRoundButton *_revertBtn;
    CCBRoundButton *_detailBtn;
    CDUnknownBlockType _onClickRevert;
    CDUnknownBlockType _onClickDetail;
}

+ (double)cellHeightAppBottomCell;
@property(copy, nonatomic) CDUnknownBlockType onClickDetail; // @synthesize onClickDetail=_onClickDetail;
@property(copy, nonatomic) CDUnknownBlockType onClickRevert; // @synthesize onClickRevert=_onClickRevert;
@property(retain, nonatomic) CCBRoundButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) CCBRoundButton *revertBtn; // @synthesize revertBtn=_revertBtn;
- (void).cxx_destruct;
- (void)clickDetail;
- (void)clickRevertButton;
- (void)setFormItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

