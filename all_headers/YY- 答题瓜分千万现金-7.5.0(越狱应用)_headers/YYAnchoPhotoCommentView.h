//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AvatarControl, NSString, NSTimer, PhotoComentVO, UIColor, YYAnchorPhotoDetailPageViewController, YYCommentContentView, YYCommentLeftPriseView;
@protocol YYAnchorPhotoCommentDelegate;

@interface YYAnchoPhotoCommentView : UIView
{
    AvatarControl *_avatar;
    YYCommentContentView *_contentView;
    YYCommentLeftPriseView *_leftPriseView;
    PhotoComentVO *_commentVO;
    long long _timeOut;
    NSTimer *_commentTimer;
    struct CGPoint _prevPoint;
    UIView *_avatarTouchView;
    _Bool _isByUser;
    id <YYAnchorPhotoCommentDelegate> _delegate;
    long long _pageIndex;
    UIColor *_avartarBorderColor;
    UIColor *_commentViewBorderColor;
    NSString *_text;
    YYAnchorPhotoDetailPageViewController *_parentPageViewController;
}

@property(nonatomic) __weak YYAnchorPhotoDetailPageViewController *parentPageViewController; // @synthesize parentPageViewController=_parentPageViewController;
@property(nonatomic) _Bool isByUser; // @synthesize isByUser=_isByUser;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *commentViewBorderColor; // @synthesize commentViewBorderColor=_commentViewBorderColor;
@property(retain, nonatomic) UIColor *avartarBorderColor; // @synthesize avartarBorderColor=_avartarBorderColor;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) __weak id <YYAnchorPhotoCommentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)notifyCommentViewPublishSuccessWithPageIndex:(long long)arg1 commentVO:(id)arg2;
- (void)notifyCommentViewPriseSuccessWithPageIndex:(long long)arg1 commentId:(id)arg2;
- (void)notifyCommentViewDidShowWithPageIndex:(long long)arg1 parentViewController:(id)arg2;
- (void)notifyCommentViewHide:(_Bool)arg1 isSendingComment:(_Bool)arg2 pageIndex:(long long)arg3;
- (void)notifyCommentViewStopTimer:(_Bool)arg1;
- (void)notifyCommentViewControllerDelloc:(long long)arg1 parentViewController:(id)arg2;
- (void)tapCommentViewAction:(id)arg1;
- (void)onShowCommentAction;
- (void)addLeftPriseView:(id)arg1;
- (void)hideborderView:(_Bool)arg1;
- (void)starCommentTimer:(_Bool)arg1;
- (void)updateAppearence:(_Bool)arg1;
@property(readonly, nonatomic) long long avataPostionIndex;
- (void)setCommentText:(id)arg1;
- (void)dispose;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isSelf:(_Bool)arg2;

@end

