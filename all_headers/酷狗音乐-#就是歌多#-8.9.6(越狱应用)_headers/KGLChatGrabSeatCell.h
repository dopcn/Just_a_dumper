//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGLChatBaseCell.h"

#import "OHAttributedLabelDelegate-Protocol.h"

@class NSMutableAttributedString, NSString, OHAttributedLabel;

@interface KGLChatGrabSeatCell : KGLChatBaseCell <OHAttributedLabelDelegate>
{
    OHAttributedLabel *_attributedLabel;
    NSMutableAttributedString *_mutString;
}

+ (double)cellHeightOfMsg:(id)arg1;
+ (id)parserData:(id)arg1;
@property(retain, nonatomic) NSMutableAttributedString *mutString; // @synthesize mutString=_mutString;
@property(retain, nonatomic) OHAttributedLabel *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setMessage:(id)arg1;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

