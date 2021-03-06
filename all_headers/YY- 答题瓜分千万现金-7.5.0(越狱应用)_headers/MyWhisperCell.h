//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ChannelOneChatMessage, ChatRichTextView, NSLayoutConstraint, UILabel;

@interface MyWhisperCell : UITableViewCell
{
    double _textViewOriginLeadingConstraint;
    double _nicknameWidth;
    UILabel *_nicknameLabel;
    ChatRichTextView *_messageView;
    NSLayoutConstraint *_textViewLeadingConstraint;
    ChannelOneChatMessage *_message;
}

+ (double)textViewMargin;
+ (double)lineFragmentPadding;
+ (double)defaultContentFontSize;
+ (double)height;
+ (id)identity;
+ (id)nib;
@property(retain, nonatomic) ChannelOneChatMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak NSLayoutConstraint *textViewLeadingConstraint; // @synthesize textViewLeadingConstraint=_textViewLeadingConstraint;
@property(nonatomic) __weak ChatRichTextView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) __weak UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)ajustText:(double)arg1 cell:(double)arg2;
- (void)updateMessage:(id)arg1 delegate:(id)arg2;

@end

