//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UILabel, XAdEngineTipLinkModel;
@protocol XAdEngineTipLinkDelegate;

@interface XAdEngineTipLinkView : UIView <UITextViewDelegate>
{
    id <XAdEngineTipLinkDelegate> _tipLinkDelegate;
    UILabel *_tipLabel;
    XAdEngineTipLinkModel *_tipModel;
    double _tipContentWidth;
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    struct CGRect _optContentRect;
}

@property(nonatomic) struct CGRect optContentRect; // @synthesize optContentRect=_optContentRect;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(nonatomic) double tipContentWidth; // @synthesize tipContentWidth=_tipContentWidth;
@property(retain, nonatomic) XAdEngineTipLinkModel *tipModel; // @synthesize tipModel=_tipModel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak id <XAdEngineTipLinkDelegate> tipLinkDelegate; // @synthesize tipLinkDelegate=_tipLinkDelegate;
- (void).cxx_destruct;
- (void)clickOptContent;
- (struct CGRect)contentRectWithMatchRange:(struct _NSRange)arg1;
- (void)setupTextContainerWithLabel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutTipContentView;
- (void)refreshVipTipContent;
- (void)setup;
- (void)updateTipLinkModel:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

