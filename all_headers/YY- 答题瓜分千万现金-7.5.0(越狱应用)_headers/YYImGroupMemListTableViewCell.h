//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, YYImGroupMemListItem;

@interface YYImGroupMemListTableViewCell : UITableViewCell
{
    CDUnknownBlockType _onClickBlock;
    UIImageView *_iconImv;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    UILabel *_moreLabel;
    YYImGroupMemListItem *_item;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) YYImGroupMemListItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImv; // @synthesize iconImv=_iconImv;
@property(copy, nonatomic) CDUnknownBlockType onClickBlock; // @synthesize onClickBlock=_onClickBlock;
- (void).cxx_destruct;
- (void)onClick;
- (void)showLine:(_Bool)arg1;
- (void)setItem:(id)arg1 editable:(_Bool)arg2;
- (void)awakeFromNib;

@end

