//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BBALikeAnimationButton, BBANewIconBarViewModel, UIImageView, UILabel, UIView;

@interface BBAFeedMoreMenuItemCell : UITableViewCell
{
    int _itemType;
    BBANewIconBarViewModel *_itemData;
    UIImageView *_logo;
    UILabel *_title;
    UILabel *_desc;
    UIView *_bottomLine;
    BBALikeAnimationButton *_likeBtn;
}

@property(retain, nonatomic) BBALikeAnimationButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) BBANewIconBarViewModel *itemData; // @synthesize itemData=_itemData;
- (void).cxx_destruct;
- (void)resetLikeBtnTitle:(id)arg1 withCount:(id)arg2 withUped:(_Bool)arg3 withAnimation:(_Bool)arg4;
- (void)likeBtnPressed;
- (void)hideBottomLine;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

