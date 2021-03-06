//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FMComponentCellProtocol-Protocol.h"

@class FMImageView, NSString, UILabel, UIView;

@interface FMDetailRentBonusCell : UITableViewCell <FMComponentCellProtocol>
{
    FMImageView *_bonusImageView;
    UILabel *_contentLabel;
    FMImageView *_rightIcon;
    UIView *_topLineView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) FMImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) FMImageView *bonusImageView; // @synthesize bonusImageView=_bonusImageView;
- (void).cxx_destruct;
- (void)didSelected:(id)arg1 withBean:(id)arg2;
- (void)bindComponent:(id)arg1;
- (void)setupLayout;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

