//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, UIButton, UIImageView, WUWeiboStatus;

@interface WIWeiboUtilityBoardView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _expanded;
    WUWeiboStatus *_status;
    CDUnknownBlockType _utilityBoardViewWillExpandToWidth;
    CDUnknownBlockType _commentButtonDidTapped;
    CDUnknownBlockType _forwardButtonDidTapped;
    CDUnknownBlockType _likeButtonDidTapped;
    CDUnknownBlockType _collectButtonDidTapped;
    UIButton *_expandButton;
    UIImageView *_backgroundView;
    NSArray *_uitilityButtouCollection;
    UIButton *_collectButton;
    UIButton *_likeButton;
    double _shrinkedWidth;
    double _expandedWidth;
    UIView *_dimmingView;
    NSTimer *_uitilityBoardIconTimer;
    UIButton *_animatingButton;
    NSArray *_animatingButtonCollection;
}

@property(copy, nonatomic) NSArray *animatingButtonCollection; // @synthesize animatingButtonCollection=_animatingButtonCollection;
@property(nonatomic) __weak UIButton *animatingButton; // @synthesize animatingButton=_animatingButton;
@property(nonatomic) __weak NSTimer *uitilityBoardIconTimer; // @synthesize uitilityBoardIconTimer=_uitilityBoardIconTimer;
@property(nonatomic) __weak UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) double expandedWidth; // @synthesize expandedWidth=_expandedWidth;
@property(nonatomic) double shrinkedWidth; // @synthesize shrinkedWidth=_shrinkedWidth;
@property(nonatomic) __weak UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak UIButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) NSArray *uitilityButtouCollection; // @synthesize uitilityButtouCollection=_uitilityButtouCollection;
@property(nonatomic) __weak UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(copy, nonatomic) CDUnknownBlockType collectButtonDidTapped; // @synthesize collectButtonDidTapped=_collectButtonDidTapped;
@property(copy, nonatomic) CDUnknownBlockType likeButtonDidTapped; // @synthesize likeButtonDidTapped=_likeButtonDidTapped;
@property(copy, nonatomic) CDUnknownBlockType forwardButtonDidTapped; // @synthesize forwardButtonDidTapped=_forwardButtonDidTapped;
@property(copy, nonatomic) CDUnknownBlockType commentButtonDidTapped; // @synthesize commentButtonDidTapped=_commentButtonDidTapped;
@property(copy, nonatomic) CDUnknownBlockType utilityBoardViewWillExpandToWidth; // @synthesize utilityBoardViewWillExpandToWidth=_utilityBoardViewWillExpandToWidth;
@property(nonatomic, getter=isExpended) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) WUWeiboStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)closeAnimation;
- (id)popAnimation;
- (void)uitilityBoardIconAction;
- (void)showUitilityBoard:(id)arg1;
- (void)collectButtonDidTapped:(id)arg1;
- (void)likeButtonDidTapped:(id)arg1;
- (void)forwardButtonDidTapped:(id)arg1;
- (void)commentButtonDidTapped:(id)arg1;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dismiss:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)nib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

