//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

@class SSThemedButton, SSThemedView;
@protocol EssayWebToolViewDelegate;

@interface EssayWebToolView : SSViewBase
{
    id <EssayWebToolViewDelegate> _delegate;
    SSThemedView *_topSeperaterLine;
    SSThemedView *_bgImageView;
    SSThemedButton *_refreshButton;
    SSThemedButton *_shareButton;
    SSThemedButton *_fontButton;
}

@property(retain, nonatomic) SSThemedButton *fontButton; // @synthesize fontButton=_fontButton;
@property(retain, nonatomic) SSThemedButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) SSThemedButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) SSThemedView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) SSThemedView *topSeperaterLine; // @synthesize topSeperaterLine=_topSeperaterLine;
@property(nonatomic) __weak id <EssayWebToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fontButtonClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)refreshButtonClicked:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

