//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOTBaseCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface WBOTSettingCell : WBOTBaseCell
{
    UIView *_settingCellRedPotView;
    NSString *_settingCellTitleString;
    NSString *_settingCellSubTitleString;
    UILabel *_settingCellTitleLabel;
    UILabel *_settingCellNeedWholeLabel;
    UIImageView *_settingCellImage;
}

@property(nonatomic) UIImageView *settingCellImage; // @synthesize settingCellImage=_settingCellImage;
@property(nonatomic) UILabel *settingCellNeedWholeLabel; // @synthesize settingCellNeedWholeLabel=_settingCellNeedWholeLabel;
@property(nonatomic) UILabel *settingCellTitleLabel; // @synthesize settingCellTitleLabel=_settingCellTitleLabel;
@property(copy, nonatomic) NSString *settingCellSubTitleString; // @synthesize settingCellSubTitleString=_settingCellSubTitleString;
@property(copy, nonatomic) NSString *settingCellTitleString; // @synthesize settingCellTitleString=_settingCellTitleString;
@property(nonatomic) UIView *settingCellRedPotView; // @synthesize settingCellRedPotView=_settingCellRedPotView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

