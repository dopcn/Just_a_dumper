//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, QYUCardBaseCell, QYUCardCellStyle;

@interface QYUPhoneDefaultBottomBannerView : UIView
{
    UIView *_bottomView;
    NSMutableArray *_bottomBtns;
    NSArray *_bottomItemArray;
    UIView *_bottomViewTopLine;
    QYUCardCellStyle *_cellStyle;
    QYUCardBaseCell *_baseCell;
    long long _nRank;
}

+ (double)getCellBottomHeightByCardData:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bottomBtnClicked:(id)arg1;
- (void)setBottomData;
- (void)setCellStyle:(id)arg1 bisonObjects:(id)arg2 baseCell:(id)arg3 eventRank:(long long)arg4;
- (void)setCellModel:(id)arg1 baseCell:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

