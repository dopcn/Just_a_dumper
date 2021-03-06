//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIGestureRecognizer;
@protocol WXOEmoticonContentViewDelegate;

@interface WXOEmoticonContentView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_previewView;
    unsigned long long _pages;
    id <WXOEmoticonContentViewDelegate> _delegate;
    NSArray *_emoticons;
    UIGestureRecognizer *_longGesture;
    UIGestureRecognizer *_tapGesture;
    long long _pagesCount;
    struct CGSize _contentSize;
}

+ (void)setFixedPositionOfDeleteButton:(_Bool)arg1;
+ (id)sharePageImageCache;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) long long pagesCount; // @synthesize pagesCount=_pagesCount;
@property(retain, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIGestureRecognizer *longGesture; // @synthesize longGesture=_longGesture;
@property(nonatomic) NSArray *emoticons; // @synthesize emoticons=_emoticons;
@property(nonatomic) __weak id <WXOEmoticonContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTapFrom:(id)arg1;
- (void)handleLongPressFrom:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)getSubviewContentPoint:(struct CGPoint)arg1;
- (_Bool)isPointInValidSubview:(struct CGPoint)arg1;
- (void)removeLongGesture;
- (void)addLongGesture;
- (_Bool)isDeleteEmoticonAtPoint:(struct CGPoint)arg1;
- (id)getEmoticonByPoint:(struct CGPoint)arg1;
- (int)getEmoticonIndexByPoint:(struct CGPoint)arg1;
- (void)showEmoticonPreviewByPoint:(struct CGPoint)arg1;
- (void)initContentViews;
- (void)initOtherViews;
- (id)mainWindowOfApplication:(id)arg1;
- (void)initPageViewsByStep;
- (void)initPageViewAtIndex:(long long)arg1;
- (void)generateEmoticonPageAtIndex:(long long)arg1;
- (long long)totalPages;
- (long long)deleteButtonIndexInPage:(long long)arg1;
- (long long)emoticonCountPerPage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContentSize:(struct CGSize)arg1 emoticons:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

