//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TMWXMyCustomContentItemModel, UIImageView, UILabel;

@interface TWXSendMyCustomContentBubbleChatContentView : UIView
{
    _Bool _outGoing;
    TMWXMyCustomContentItemModel *_goodsItem;
    UIImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_backgroundImageView;
}

@property(nonatomic) _Bool outGoing; // @synthesize outGoing=_outGoing;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TMWXMyCustomContentItemModel *goodsItem; // @synthesize goodsItem=_goodsItem;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 withGoodsItem:(id)arg2 andSendingStatus:(_Bool)arg3;

@end

