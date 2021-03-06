//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MLEmojiLabel, UIImageView, UILabel;

@interface QYPPFeedHotEventShareView : UIButton
{
    UIImageView *_thumbnail;
    MLEmojiLabel *_title;
    UILabel *_readCount;
    UILabel *_discussCount;
}

@property(retain, nonatomic) UILabel *discussCount; // @synthesize discussCount=_discussCount;
@property(retain, nonatomic) UILabel *readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) MLEmojiLabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEventDiscussCount:(id)arg1;
- (void)setEventReadCount:(id)arg1;
- (void)setEventTitle:(id)arg1;
- (void)setThumbnail:(id)arg1 placeholder:(id)arg2;
- (void)reset;

@end

