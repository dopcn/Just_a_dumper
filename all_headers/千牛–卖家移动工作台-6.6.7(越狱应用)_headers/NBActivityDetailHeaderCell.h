//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;
@protocol NBActivityDetailHeaderCellDelegate;

@interface NBActivityDetailHeaderCell : UITableViewCell
{
    id <NBActivityDetailHeaderCellDelegate> _delegate;
    UIButton *_actionButton;
    UIImageView *_mainPic;
    UILabel *_titleLabel;
    UILabel *_recommenedTags;
    UILabel *_moneyLabel;
    UIButton *_ticketButton;
}

@property(retain, nonatomic) UIButton *ticketButton; // @synthesize ticketButton=_ticketButton;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *recommenedTags; // @synthesize recommenedTags=_recommenedTags;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *mainPic; // @synthesize mainPic=_mainPic;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <NBActivityDetailHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickMainPic:(id)arg1;
- (void)onClickAction:(id)arg1;
- (void)updateActionButtonStatusByDetail:(id)arg1;
- (void)configCellByActivityDetail:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

