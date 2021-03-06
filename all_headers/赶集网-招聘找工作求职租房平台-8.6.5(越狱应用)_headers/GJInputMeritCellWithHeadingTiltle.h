//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJInputBaseCell.h"

@class NSArray, NSMutableArray, UILabel, UIView;

@interface GJInputMeritCellWithHeadingTiltle : GJInputBaseCell
{
    NSArray *_meritsArr;
    NSMutableArray *_selectMeritsArr;
    double _cellHeight;
    UIView *_lineView;
    UILabel *_errorMessageLabel;
}

@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSMutableArray *selectMeritsArr; // @synthesize selectMeritsArr=_selectMeritsArr;
@property(retain, nonatomic) NSArray *meritsArr; // @synthesize meritsArr=_meritsArr;
- (void).cxx_destruct;
- (struct CGSize)sizeWithFont:(id)arg1 withText:(id)arg2;
- (void)hiddenErrorView;
- (void)showErrorView;
- (void)setInputData:(id)arg1;
- (id)getInputData;
- (double)getHigh;
- (void)meritAction:(id)arg1;
- (void)reloadMeritsView;
- (void)initSubViews;
- (_Bool)checkData;
- (void)setCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

