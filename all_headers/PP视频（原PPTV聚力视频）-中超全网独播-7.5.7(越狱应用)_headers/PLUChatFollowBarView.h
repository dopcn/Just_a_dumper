//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LZUserCardModel, UIButton;
@protocol PLUChatFollowBarViewDelegate;

@interface PLUChatFollowBarView : UIView
{
    id <PLUChatFollowBarViewDelegate> _delegate;
    LZUserCardModel *_userCardModel;
    UIButton *_followBtn;
    UIButton *_chatBtn;
    UIView *_line;
    UIView *_topLine;
}

@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *chatBtn; // @synthesize chatBtn=_chatBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) LZUserCardModel *userCardModel; // @synthesize userCardModel=_userCardModel;
@property(nonatomic) __weak id <PLUChatFollowBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickfollowBtn:(id)arg1;
- (void)clickChatBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

