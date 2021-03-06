//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMCommonCell.h"

#import "NMCheckBoxDelegate-Protocol.h"

@class NMCheckBox, NMContentTagView, NMDjProgram, UIImageView, UILabel;
@protocol NMDjRadioPurchaseProgramCellDelegate;

@interface NMDjRadioPurchaseProgramCell : NMCommonCell <NMCheckBoxDelegate>
{
    NMCheckBox *_checkBox;
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_createTimeLabel;
    UIImageView *_playIconView;
    UILabel *_playLabel;
    UIImageView *_durationIconView;
    UILabel *_durationLabel;
    NMContentTagView *_feeIconView;
    NMDjProgram *_djProgram;
    long long _maxIndex;
    id <NMDjRadioPurchaseProgramCellDelegate> _delegate;
}

+ (double)heightForData:(id)arg1 maxIndex:(long long)arg2;
+ (double)leftPadding;
+ (double)indexWidth:(long long)arg1;
@property(nonatomic) __weak id <NMDjRadioPurchaseProgramCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxIndex; // @synthesize maxIndex=_maxIndex;
@property(retain, nonatomic) NMDjProgram *djProgram; // @synthesize djProgram=_djProgram;
- (void).cxx_destruct;
@property(nonatomic) _Bool isChecked;
- (void)checkBox:(id)arg1 checked:(_Bool)arg2;
- (void)cellClicked;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

