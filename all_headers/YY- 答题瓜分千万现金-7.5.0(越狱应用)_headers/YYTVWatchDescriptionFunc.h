//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYTVBaseWatchFunc.h"

@class MASConstraint, NSArray, NSString, TinyVideoShadowLabel, UIControl;

@interface YYTVWatchDescriptionFunc : YYTVBaseWatchFunc
{
    NSArray *_topics;
    NSString *_title;
    NSString *_titleWithNoTopics;
    UIControl *_musicView;
    TinyVideoShadowLabel *_musicTitleLabel;
    TinyVideoShadowLabel *_titleLabel;
    MASConstraint *_titleLabelBottomConstraint;
    UIControl *_collaborateHintView;
    TinyVideoShadowLabel *_guessHintLabel;
    MASConstraint *_guessHintLabelBottomConstraint;
    TinyVideoShadowLabel *_collaborateHintLabel;
    MASConstraint *_collaborateHintLabelBottomConstraint;
    NSArray *_topicViews;
}

@property(retain, nonatomic) NSArray *topicViews; // @synthesize topicViews=_topicViews;
@property(retain, nonatomic) MASConstraint *collaborateHintLabelBottomConstraint; // @synthesize collaborateHintLabelBottomConstraint=_collaborateHintLabelBottomConstraint;
@property(retain, nonatomic) TinyVideoShadowLabel *collaborateHintLabel; // @synthesize collaborateHintLabel=_collaborateHintLabel;
@property(retain, nonatomic) MASConstraint *guessHintLabelBottomConstraint; // @synthesize guessHintLabelBottomConstraint=_guessHintLabelBottomConstraint;
@property(retain, nonatomic) TinyVideoShadowLabel *guessHintLabel; // @synthesize guessHintLabel=_guessHintLabel;
@property(retain, nonatomic) UIControl *collaborateHintView; // @synthesize collaborateHintView=_collaborateHintView;
@property(retain, nonatomic) MASConstraint *titleLabelBottomConstraint; // @synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint;
@property(retain, nonatomic) TinyVideoShadowLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TinyVideoShadowLabel *musicTitleLabel; // @synthesize musicTitleLabel=_musicTitleLabel;
@property(retain, nonatomic) UIControl *musicView; // @synthesize musicView=_musicView;
@property(retain, nonatomic) NSString *titleWithNoTopics; // @synthesize titleWithNoTopics=_titleWithNoTopics;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
- (void).cxx_destruct;
- (void)yytvWatchFunctionPrepareForReuse;
- (void)yytvWatchFunctionLoadData:(id)arg1;
- (_Bool)isEmptyString:(id)arg1;
- (id)topicView:(id)arg1 atIndex:(long long)arg2;
- (void)configTitleNumberOfLines:(unsigned long long)arg1;
- (void)showCollaboratorHint:(id)arg1;
- (void)showGuessHint:(id)arg1;
- (void)extractTopics;
- (void)extractTitle;
- (void)showTopicsView;
- (void)showTitleView;
- (void)showMusicView;
- (void)setupData;
- (void)dealloc;

@end

