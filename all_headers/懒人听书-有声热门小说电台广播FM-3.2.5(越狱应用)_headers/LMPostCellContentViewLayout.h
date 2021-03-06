//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LMPostCellLayoutProtocol-Protocol.h"

@class LMPostLayout, NSString, YYTextLayout;

@interface LMPostCellContentViewLayout : NSObject <LMPostCellLayoutProtocol>
{
    LMPostLayout *postLayout;
    YYTextLayout *_titleLabelLayout;
    YYTextLayout *_contentLabelLayout;
    struct CGRect frame;
    struct CGRect _titleLabelFrame;
    struct CGRect _contentLabelFrame;
}

@property(nonatomic) struct CGRect contentLabelFrame; // @synthesize contentLabelFrame=_contentLabelFrame;
@property(retain, nonatomic) YYTextLayout *contentLabelLayout; // @synthesize contentLabelLayout=_contentLabelLayout;
@property(nonatomic) struct CGRect titleLabelFrame; // @synthesize titleLabelFrame=_titleLabelFrame;
@property(retain, nonatomic) YYTextLayout *titleLabelLayout; // @synthesize titleLabelLayout=_titleLabelLayout;
@property(nonatomic) __weak LMPostLayout *postLayout; // @synthesize postLayout;
@property(nonatomic) struct CGRect frame; // @synthesize frame;
- (void).cxx_destruct;
- (id)_attachmentWithFontSize:(double)arg1 image:(id)arg2 shrink:(_Bool)arg3;
- (void)_addIconBeforeStr:(id)arg1 withFont:(id)arg2;
- (void)_setupContentLayoutWithString:(id)arg1;
- (void)_setupTitleLayoutWithString:(id)arg1;
- (void)layout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

