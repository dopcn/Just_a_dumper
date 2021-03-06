//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HPGrowingTextView, UIButton, UIImageView, UILabel;

@interface SWPhotoStreamCommentWrapper : UIView
{
    UIImageView *_textBgView;
    HPGrowingTextView *_textView;
    UIButton *_sendButton;
    UIButton *_emojiButton;
    UILabel *_textCountLabel;
}

@property(readonly, nonatomic) UILabel *textCountLabel; // @synthesize textCountLabel=_textCountLabel;
@property(readonly, nonatomic) UIButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

