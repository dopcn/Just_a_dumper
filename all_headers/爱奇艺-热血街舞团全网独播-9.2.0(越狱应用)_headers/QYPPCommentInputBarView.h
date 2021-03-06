//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MLEmojiLabel, NSString, UIButton, UIImageView;
@protocol QYPPCommentInputBarViewDelegate;

@interface QYPPCommentInputBarView : UIView
{
    id <QYPPCommentInputBarViewDelegate> _delegate;
    unsigned long long _status;
    NSString *_placeHolder;
    MLEmojiLabel *_textView;
    UIButton *_likeButton;
    UIImageView *_topLineImage;
    UIButton *_voiceButton;
    UIButton *_gifButton;
    UIButton *_commentButton;
}

@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *gifButton; // @synthesize gifButton=_gifButton;
@property(retain, nonatomic) UIButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) UIImageView *topLineImage; // @synthesize topLineImage=_topLineImage;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MLEmojiLabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <QYPPCommentInputBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickWithType:(unsigned long long)arg1;
- (void)likeButtonClick;
- (void)commentButtonClick;
- (void)gifButtonClick;
- (void)voiceButtonClick;
- (void)textViewClick;
- (void)layoutSubviews;
- (double)widthOfButtonTitle:(id)arg1;
- (void)updateTextViewContent:(id)arg1;
- (void)updateItemSelectedStatus:(unsigned long long)arg1 selected:(_Bool)arg2;
- (void)updateItemWithType:(unsigned long long)arg1 count:(id)arg2;
- (void)updateBarElementType:(unsigned long long)arg1;
- (void)creatSubViews;
- (id)getTextViewContent;
- (void)setElementsInteractionEanbled:(_Bool)arg1;
- (void)setNomalStatus;
- (void)setEditStatus;
- (void)setInvalidStatus;
- (id)initWithFrame:(struct CGRect)arg1;

@end

