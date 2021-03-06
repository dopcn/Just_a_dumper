//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class GLIMImageView, GLIMMessageBottomActionItemData, UIImageView, UILabel;

@interface GLIMMessageBottomActionItemView : UIControl
{
    GLIMMessageBottomActionItemData *_itemData;
    GLIMImageView *_imageView;
    UILabel *_titleLabel;
    UIImageView *_badgeImageView;
}

+ (id)itemViewWithFrame:(struct CGRect)arg1 itemData:(id)arg2 target:(id)arg3 action:(SEL)arg4;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLIMImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GLIMMessageBottomActionItemData *itemData; // @synthesize itemData=_itemData;
- (void).cxx_destruct;
- (id)imageWithName:(id)arg1;
- (void)hideNewBadgeView;
- (void)setHighlighted:(_Bool)arg1;
- (void)buildSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

