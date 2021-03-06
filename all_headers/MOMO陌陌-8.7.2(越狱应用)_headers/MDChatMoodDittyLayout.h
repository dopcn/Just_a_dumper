//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDChatBaseLayout.h"

@class MDViewNode;

@interface MDChatMoodDittyLayout : MDChatBaseLayout
{
    MDViewNode *_musicButtonNode;
    MDViewNode *_playContentViewNode;
    MDViewNode *_closeButtonNode;
    MDViewNode *_soundButtonNode;
}

@property(retain, nonatomic) MDViewNode *soundButtonNode; // @synthesize soundButtonNode=_soundButtonNode;
@property(retain, nonatomic) MDViewNode *closeButtonNode; // @synthesize closeButtonNode=_closeButtonNode;
@property(retain, nonatomic) MDViewNode *playContentViewNode; // @synthesize playContentViewNode=_playContentViewNode;
@property(retain, nonatomic) MDViewNode *musicButtonNode; // @synthesize musicButtonNode=_musicButtonNode;
- (void).cxx_destruct;
- (void)layoutTail:(double)arg1;
- (void)layoutContentSubViews;
- (void)setupPlayContentView;
- (id)gifImageNames;
- (void)setupNormalContentView;
- (void)layout;
- (void)setupSubNodes;

@end

