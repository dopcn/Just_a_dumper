//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIGestureRecognizer, YWEmoticonGroup, YWLightPopoverView;
@protocol IYWEmoticon;

@interface WXOEmoticonRender : UIView <UIGestureRecognizerDelegate>
{
    long long _rows;
    long long _column;
    long long _pagesCount;
    YWEmoticonGroup *_emoticonGroup;
    CDUnknownBlockType _pickedBlock;
    YWLightPopoverView *_previewView;
    UIGestureRecognizer *_longGesture;
    UIGestureRecognizer *_tapGesture;
    NSMutableArray *_pageImageCache;
    NSArray *_aryEmoticons;
    id <IYWEmoticon> _emotionOnPreview;
    struct CGSize _contentSize;
    struct CGPoint _popverPoint;
}

@property(nonatomic) struct CGPoint popverPoint; // @synthesize popverPoint=_popverPoint;
@property(retain, nonatomic) id <IYWEmoticon> emotionOnPreview; // @synthesize emotionOnPreview=_emotionOnPreview;
@property(retain, nonatomic) NSArray *aryEmoticons; // @synthesize aryEmoticons=_aryEmoticons;
@property(retain, nonatomic) NSMutableArray *pageImageCache; // @synthesize pageImageCache=_pageImageCache;
@property(retain, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIGestureRecognizer *longGesture; // @synthesize longGesture=_longGesture;
@property(retain, nonatomic) YWLightPopoverView *previewView; // @synthesize previewView=_previewView;
@property(copy, nonatomic) CDUnknownBlockType pickedBlock; // @synthesize pickedBlock=_pickedBlock;
@property(retain, nonatomic) YWEmoticonGroup *emoticonGroup; // @synthesize emoticonGroup=_emoticonGroup;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) long long pagesCount; // @synthesize pagesCount=_pagesCount;
@property(nonatomic) long long column; // @synthesize column=_column;
@property(nonatomic) long long rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (void)handleTapFrom:(id)arg1;
- (void)handleLongPressFrom:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hideEmoticonPreview;
- (void)layoutEmoticonPreview:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)showEmoticonPreview:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)removeGestureRecognizer;
- (void)addGestureRecognizer;
- (void)addGestureRecognizerForImageView:(id)arg1;
- (id)getEmoticonByPoint:(struct CGPoint)arg1;
- (id)getSubviewContentPoint:(struct CGPoint)arg1;
- (_Bool)isPointInValidSubview:(struct CGPoint)arg1;
- (long long)getColumnPoint:(struct CGPoint)arg1;
- (long long)getRowByPoint:(struct CGPoint)arg1;
- (long long)getEmoticonIndexByPoint:(struct CGPoint)arg1;
- (void)initContentViews;
- (void)displayEmoticon:(id)arg1 animated:(_Bool)arg2 forImageView:(id)arg3;
- (void)openYWEmoticonCustomViewController:(id)arg1;
- (void)addNoDataViewToPage:(id)arg1;
- (void)generateEmoticonPageCacheImage;
- (void)setEmoticons:(id)arg1;
- (void)dealloc;
- (id)mainWindowOfApplication:(id)arg1;
- (id)initWithEmoticonGroup:(id)arg1 contentSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

