//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;
@protocol MessageDoorViewDelegate;

@interface MessageDoorView : UIControl
{
    long long _style;
    id <MessageDoorViewDelegate> _delegate;
    long long _channel;
    long long _showStyle;
    long long _msgNumber;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_redDot;
    UILabel *_numLabel;
    UIImageView *_numBackImg;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIImageView *numBackImg; // @synthesize numBackImg=_numBackImg;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UIImageView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long msgNumber; // @synthesize msgNumber=_msgNumber;
@property(nonatomic) long long showStyle; // @synthesize showStyle=_showStyle;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(nonatomic) __weak id <MessageDoorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)doorTitleSystemFontOfSize:(double)arg1;
- (id)doorNumSystemFontOfSize:(double)arg1;
- (void)refreshMessageDoorView:(id)arg1;
- (void)scrollChangeBlackIcon:(_Bool)arg1;
- (id)channelString;
- (void)didTapMessageAction:(id)arg1;
- (void)clearRedAndNum;
- (void)layoutAllFrame;
- (void)layoutSubviews;
- (void)configMessageDoorView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 channel:(long long)arg3 clickBlock:(CDUnknownBlockType)arg4;
- (id)initWithStyle:(long long)arg1 channel:(long long)arg2 clickBlock:(CDUnknownBlockType)arg3;
- (id)initWithChannel:(long long)arg1 clickBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

